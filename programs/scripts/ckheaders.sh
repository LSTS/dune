#! /bin/bash
############################################################################
# Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Universidade do Porto. For licensing   #
# terms, conditions, and further information contact lsts@fe.up.pt.        #
#                                                                          #
# European Union Public Licence - EUPL v.1.1 Usage                         #
# Alternatively, this file may be used under the terms of the EUPL,        #
# Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://www.lsts.pt/dune/licence.                                        #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################
# This script checks if headers include all required headers.              #
############################################################################

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
