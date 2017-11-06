#!/bin/bash

#
# Copia el perfil de instalación, modificando el nombre de los
# archivos y el nombre del perfil dentro de los archivos
#

if [ $# != 2 ]; then
  echo "uso: ./cp-profile.sh origen destino"
  exit
fi

origen=$(basename $1)
destino=$(basename $2)
orig_dir=$1
dest_dir=$2

mkdir -p $dest_dir

cp -r $orig_dir/* $dest_dir
for ext in info install profile make; do
  rm $dest_dir/$origen.$ext
  sed s/$origen/$destino/ $orig_dir/$origen.$ext > $dest_dir/$destino.$ext
done

echo "Se generó el perfil $destino a partir de $origen en $dest_dir."
echo "Es necesario editar el archivo $dest_dir/$destino.info y modificar"
echo "el nombre y la descripción del perfil."
