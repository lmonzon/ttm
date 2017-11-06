# munra

Perfil de instalación base para los desarrollos de gcoop.

[Proyecto en redmine](http://redmine.gcoop.com.ar:8080/redmine/projects/munra).

## Herramientas

En el directorio tools hay algunos scripts útiles:

* **cp-profile.sh:** sirve para copiar un perfil de instalación

    Se copian todos los archivos y se reemplaza el nombre del perfil en los
    archivos .info .install y .profile

* **install.sh:** instala el sitio desde cero

    Con la estructura [sitio]/profiles/[perfil], ejecutando el script desde la
    raíz del sitio como ./profiles/[perfil]/tools/install.sh se ejecuta el make
    del perfil, se hace un backup de la base de datos de ser necesario y se
    instala el sitio.

    **Opciones:**
    * -u      Usuario de la base de datos (default: 'root')

    * -p      Password de la base de datos (default: '')

    * -d      Base de datos

    * -n      Sitio nuevo (crear la base de datos)

    * -a      Password de admin (default: xx)

    * -m      Mail de admin (default: admin@example.com)

    * -s      Nombre del sitio (default: nombre del perfil)

## Uso

* Crear el directorio [sitio]/profiles/

        mkdir -p /var/www/[sitio]/profiles/

* Clonar el perfil base (munra)

        cd [sitio]/profiles/
        git clone git@gitlab.gcoop.com.ar:munra.git --branch 7.x-1.x

* Copiar munra a un perfil para el sitio

        ./munra/tools/cp-profile.sh munra [sitio]

* Instalar el sitio con el nuevo Perfil

        cd /var/www/[sitio]
        ./profiles/[sitio]/tools/install.sh -u DB_USER -p DB_PASS -d [sitio] -a ADMIN_PASS -m ADMIN_MAIL -s SITE_NAME -n

    Ver más arriba las opciones disponibles para *install.sh*. Muchas son
    optativas y tienen valores por defecto.

* Crear un nuevo repositorio en [gitlab](http://gitlab.gcoop.com.ar) y seguir
los pasos para crear y comitear el nuevo repo.
