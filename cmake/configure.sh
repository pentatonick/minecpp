#!/usr/bin/env bash

libraries=$(jq -r '.libraries[]' <Build.json)

for lib in $libraries; do
  echo "Configuring library $lib"
  ./cmake/configure-library.sh $lib "library/$lib" "library"
done

services=$(jq -r '.services[]' <Build.json)

for serv in $services; do
  echo "Configuring service $serv"
  ./cmake/configure-library.sh $serv "service/$serv" "executable"
done
