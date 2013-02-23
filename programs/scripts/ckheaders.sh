#! /bin/bash
#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# This script checks if headers include all required headers.               #
#############################################################################

bld='/tmp/dune-header-check'
src='/tmp/dune-header-check/source'
svn='https://whale.fe.up.pt/svn/dune/trunk'
flags="-Wall -x c++-header"
flags="$flags -DDUNE_TASK_NAMESPACE="
flags="$flags -DDUNE_TASK_NAMESPACE_END="
flags="$flags -I$src/src"
flags="$flags -I$src/src/Maneuvers"
flags="$flags -I$src/external/libraries"
flags="$flags -I$src/external/libraries/x86-64bit-linux-glibc-gcc4x/include"
flags="$flags -I$bld/DUNEGeneratedFiles/src"
flags="$flags -I/usr/include/opencv"
flags="$flags -I/usr/include/Qt"
flags="$flags -I/usr/include/QtCore"
flags="$flags -I/usr/include/QtGui"
flags="$flags -I/usr/include/QtUiTools"
flags="$flags -I$src/src/Simulators/VSIM"

svn co "$svn" "$src"

cd "$bld"

cmake -DGUI=1 source

find "$src/src" -iname '*.hpp' | while read file; do
    g++ $flags "$file" -o /dev/null > "$bld/check.log"
    if [ $? -ne 0 ]; then
        echo $file
        cat "$bld/check.log"
    fi
done
