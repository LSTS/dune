#!/bin/bash
############################################################################
# Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Faculdade de Engenharia da             #
# Universidade do Porto. For licensing terms, conditions, and further      #
# information contact lsts@fe.up.pt.                                       #
#                                                                          #
# Modified European Union Public Licence - EUPL v.1.1 Usage                #
# Alternatively, this file may be used under the terms of the Modified     #
# EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://github.com/LSTS/dune/blob/master/LICENCE.md and                  #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Jose Pinto                                                       #
############################################################################

# This script can be used to format all committed source files using 
# clang-format. It can also be added used as .git/hooks/pre-commit script

format_file() {
  file="${1}"
  if [ -f $file ]; then
    clang-format -i ${1}
    git add ${1}
  fi
}

case "${1}" in
  --help )
    echo "Runs clang-format on locally committed source files"
    ;;
  * )
    for file in `git diff-index --cached --name-only HEAD | grep -iE '\.(c|cpp|h|hpp)$' ` ; do
	    echo "Applying clang-format to ${file}..."
      format_file "${file}"
    done
    ;;
esac
