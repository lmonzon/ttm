#!/bin/bash

#
# Instala drupal usando el perfil de instalación.
#
# Uso: install.sh [--rebuild] [db-user] [db-pass] [db]
# Ejecutar el script desde la raíz del sitio.
#

# exit if using uninitialized variable
set -u
# exit on error
set -e

usage() {
cat << EOF
usage: $0 options

Instala el sitio usando el perfil de instalación.
Ejecutar desde la raíz del sitio.

OPTIONS:
   -u      Usuario de la base de datos (default: 'root')
   -p      Password de la base de datos (default: '')
   -d      Base de datos
   -n      Sitio nuevo (crear la base de datos)
   -a      Password de admin (default: xx)
   -m      Mail de admin (default: admin@example.com)
   -s      Nombre del sitio (default: nombre del perfil)
   -w      Usar --working-copy en drush make (preserva los repos clonados)
   -o      No usar --prepare-install en drush make
   -k      Makefile de drush (default: dir_perfil/perfil.make)
   -e      Usuario del servidor web (Owner para private, files y tmp)
EOF
}


# El script está en [perfil]/tools, obtenemos [perfil].
dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )/.." && pwd )
perfil=${dir##*/}

DB_USER="root"
DB_PASS=""
DB=
NEW=
ADMIN_PASS="xx"
ADMIN_MAIL="admin@example.com"
SITE_NAME=$perfil
WORKING_COPY=
PREPARE_INSTALL="--prepare-install"
MAKEFILE=$dir/$perfil.make
WEBSERVER_USER=
if [[ -f "sites/default/settings.php" ]]; then
    SETTINGS=1
else
    SETTINGS=0
fi
while getopts "hu:p:d:a:m:ok:s:nwe:" OPTION; do
    case $OPTION in
        h)
            usage
            exit
            ;;
        u)
            DB_USER="$OPTARG"
            ;;
        p)
            DB_PASS="$OPTARG"
            ;;
        d)
            DB="$OPTARG"
            ;;
        a)
            ADMIN_PASS="$OPTARG"
            ;;
        m)
            ADMIN_MAIL="$OPTARG"
            ;;
        s)
            SITE_NAME="$OPTARG"
            ;;
        n)
            NEW=1
            ;;
        w)
           WORKING_COPY="--working-copy"
            ;;
        o)
           PREPARE_INSTALL=
            ;;
        k)
           MAKEFILE="$OPTARG"
            ;;
        e)
           WEBSERVER_USER="$OPTARG"
            ;;
        ?)
            usage
            exit
            ;;
    esac
done

if [[ "$NEW" -eq "1" ]] && [[ -z "$DB" ]] && [[ "$SETTINGS" -eq 0 ]]; then
    echo "Si se usa -n es necesario especificar el nombre de la base con -d."
    usage
    exit 1
fi



# Descargar drupal, módulos, temas y bibliotecas.
drush make $PREPARE_INSTALL $WORKING_COPY $MAKEFILE .

# Crear directorios configurados en File system.
mkdir private sites/default/tmp sites/default/files -p
chmod g+w -R private sites/default/files
chmod 777 -R sites/default/tmp
if [[ -n "$WEBSERVER_USER" ]]; then
    sudo chown -R $WEBSERVER_USER: private sites/default/files sites/default/tmp
fi

# Si no es un sitio nuevo hacemos backup de la base de datos y tomamos los
# datos de conexión de settings.php.
if [[ -z "$NEW" ]]; then
    drush bam-backup
    drush sql-drop -y
    drush sql-create -y
    arguments=
else
    if [[ "$SETTINGS" -gt 0 ]]; then
        arguments=
    else
        arguments="--db-url=mysql://$DB_USER:$DB_PASS@10.0.0.21/$DB"
    fi
fi

# Instalamos el sitio.
drush site-install $perfil $arguments --locale=es --account-pass=$ADMIN_PASS --account-mail=$ADMIN_MAIL --site-name=$SITE_NAME

# En files se crea el directorio de estilos durante la instalación
if [[ -n "$WEBSERVER_USER" ]]; then
    sudo chown -R $WEBSERVER_USER: sites/default/files
fi
