#!/usr/bin/env bash

file="./include/minecpp/entity/entity.h"

base=$(basename $file)
dir=$(dirname $file)

changed_base=$(./to_pascal.py $base)

source_directories=(
  include
  lib
  test
  service
  tool
)

for dir in "${source_directories[@]}"; do
  while IFS= read -r file; do
    echo "chaining $file"
  done <  <(find $dir -regex '.+\.h' -or -regex '.+\.cpp' -or -regex '.+\.hpp')
done
