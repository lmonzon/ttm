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
