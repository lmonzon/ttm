#!/bin/bash

#
# Exporta los menúes del sitio.
#

# exit if using uninitialized variable
set -u
# exit on error
set -e

# El script está en [perfil]/tools, obtenemos [perfil].
dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )/.." && pwd )
perfil=${dir##*/}

echo "Exportando menus..."

# Agregar acá los menúes a exportar.
MENUS="menu-ttm-menu-emprendedor \
menu-ttm-menu-tutor \
menu-ttm-men-anonimo \
menu-ttm-men-usuario-tutor \
menu-ttm-men-usuario-emprendedor \
menu-ttm-menu-footer-acerca \
menu-ttm-menu-footer-contactos \
menu-ttm-menu-footer-servicios \
menu-ttm-menu-footer-prensa \
menu-ttm-menu-footer-plataforma
"


for m in $MENUS; do
    file=$dir/data/menu/$m.json
    rm $file -f
    drush menu-export $file $m --export-options
done;
