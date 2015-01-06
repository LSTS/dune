############################################################################
# Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      #
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
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

include(CheckCXXSourceCompiles)

macro(dune_test_TYPE type headers)
  set(program "")

  # Include headers.
  foreach(header ${headers})
    string(REPLACE "." "_" header_var ${header})
    string(REPLACE "/" "_" header_var ${header_var})
    string(REPLACE "-" "_" header_var ${header_var})
    string(TOUPPER ${header_var} header_var)
    set(header_var "DUNE_SYS_HAS_${header_var}")

    if(${header_var})
      set(program "${program}#include <${header}>\n")
    endif(${header_var})
  endforeach(header)

  # Begin main.
  set(program "${program}\nint main(void) { ${type} x; return 0;}\n")

  string(REPLACE "." "_" output "DUNE_SYS_HAS_${type}")
  string(REPLACE "/" "_" output ${output})
  string(REPLACE "-" "_" output ${output})
  string(REPLACE " " "_" output ${output})
  string(REPLACE "::" "_" output ${output})
  string(REGEX REPLACE "<.*>" "" output ${output})
  string(TOUPPER ${output} output)

  # Compile.
  if(NOT ${output})
    check_cxx_source_compiles("${program}" ${output})
  endif(NOT ${output})

  if(${output})
    set(DUNE_SYS_TYPES "${DUNE_SYS_TYPES}#define ${output}\n")
  else(${output})
    set(DUNE_SYS_TYPES "${DUNE_SYS_TYPES}//#undef ${output}\n")
  endif(${output})
endmacro(dune_test_TYPE)

macro(dune_probe_types)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***            Probing Types           ***")
  message(STATUS "******************************************")

  dune_test_type("struct timespec" "time.h;pthread.h")
  dune_test_type("struct timeval" "sys/time.h;winsock2.h")
  dune_test_type("struct termios" "termios.h")
  dune_test_type("struct stat" "sys/stat.h;sys/types.h")
  dune_test_type("struct flock" "fcntl.h")
  dune_test_type("CRITICAL_SECTION" "windows.h")
  dune_test_type("std::tr1::shared_ptr<int>" "memory;tr1/memory")
  dune_test_type("ssize_t" "sys/types.h;windows.h")
endmacro(dune_probe_types)
