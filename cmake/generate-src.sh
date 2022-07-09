#!/usr/bin/env bash

libname=$1
libdir=$2
targetname=$3
sublib=$4
include_path=$5
targettype=$6

sublibs=$(find "$libdir/src$sublib" -mindepth 1 -maxdepth 1 -type d | sort)
source_files=$(find "$libdir/src$sublib" -maxdepth 1  -name "*.cpp" -or -name "*.cc" -or -name "*.h" -or -name "*.hpp" | sort)

if [[  $targettype == "library" ]]; then
  include_files=$(find "$libdir/include/${include_path}${sublib}" -maxdepth 1 -name "*.h" -or -name "*.hpp" | sort)
fi

libname_underscore=${libname//\//_}
sublib_underscore=${sublib//\//_}

if (( "${#include_files}" > 0 )); then
  echo "set(MINECPP_${libname_underscore^^}${sublib_underscore^^}_INCLUDE_DIR \${MINECPP_${libname_underscore^^}_DIR}/include/$include_path$sublib)"
fi

if (( "${#include_files}" > 0 || "${#source_files}" > 0 )); then
  echo "target_sources($targetname PUBLIC"
  if (( "${#source_files}" > 0 ));  then
    echo "        # Source files"
    for source_file in $source_files; do
    echo "        \${CMAKE_CURRENT_SOURCE_DIR}/$(basename $source_file)"
    done
  fi

  if (( "${#include_files}" > 0 ));  then
    echo ""
    echo "        # Header files"
    for include_file in $include_files; do
    echo "        \${MINECPP_${libname_underscore^^}${sublib_underscore^^}_INCLUDE_DIR}/$(basename $include_file)"
    done
  fi
  echo ")"
  echo ""
fi

if (( ${#sublibs} > 0 )); then

  echo "# Subdirectories"
  for subsublib in $sublibs; do
      echo "add_subdirectory(\"$(basename $subsublib)\")"
  done
  echo ""

  for subsublib in $sublibs; do
      ./cmake/generate-src.sh "$libname" "$libdir" "$targetname" "${sublib}/$(basename $subsublib)" $include_path > "$libdir/src${sublib}/$(basename $subsublib)/CMakeLists.txt" "$targettype"
  done

fi