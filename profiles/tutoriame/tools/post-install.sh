#!/bin/bash

#
# Tareas para después de la instalación.
#
# Ejecutar desde la raíz del sitio.
#

# exit if using uninitialized variable
set -u
# exit on error
set -e

# El script está en [perfil]/tools, obtenemos [perfil].
dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )/.." && pwd )
perfil=${dir##*/}

# Importar menús
echo "Importando menus..."
for f in $(ls $dir/data/menu/*.json); do
    filename=$(basename "$f")
    menu="${filename%.*}"
    echo "** $menu"
    drush menu-import --user=1 $f $menu --clean-import
done;

# Traducciones
echo "Descargando traducciones..."
drush en l10n_update -y
drush l10n-update --languages=es

# El directorio de Google Analytics no coincide con el nombre del módulo
if [[ -d "sites/all/modules/contrib/google_analytics" ]]; then
    echo "Reparando el directorio de Google Analytics y habilitándolo..."
    mv sites/all/modules/contrib/google_analytics sites/all/modules/contrib/googleanalytics
    drush en -y googleanalytics
fi

# Revertimos todas las features.
echo "Revirtiendo features..."
drush fra --force -y

# Reconstruimos permisos.
echo "Reconstruyendo permisos..."
drush php-eval 'node_access_rebuild();'

echo "Borramos README.txt y CHANGELOG.txt"
rm README.txt
rm CHANGELOG.txt
rm COPYRIGHT.txt
rm INSTALL.*.txt
rm INSTALL.txt
rm PATCHES.txt
rm MAINTAINERS.txt
rm UPGRADE.txt
rm tutoriame.make

echo "No se muestran los mensajes de error en pantall"
drush vset error_level 0
