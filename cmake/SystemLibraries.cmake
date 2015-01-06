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

include(CheckLibraryExists)

# Add library as a build dependency.
macro(dune_add_lib library)
  set(DUNE_SYS_LIBS ${DUNE_SYS_LIBS} ${library})
  set(CMAKE_REQUIRED_LIBRARIES ${CMAKE_REQUIRED_LIBRARIES} ${library})
endmacro(dune_add_lib)

# This macro checks if the symbol exists in the library and if it
# does, it appends library to the list.
macro(dune_test_lib library symbol)
  string(REPLACE "." "_" output ${library})
  string(REPLACE "/" "_" output ${output})
  string(REPLACE "-" "_" output ${output})
  string(TOUPPER DUNE_SYS_HAS_LIB_${output} output)

  CHECK_LIBRARY_EXISTS(${library} ${symbol} "" ${output})

  if(${output})
    dune_add_lib(${library})
  endif(${output})
endmacro(dune_test_lib)

macro(dune_probe_libs)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***      Probing System Libraries      ***")
  message(STATUS "******************************************")

  dune_test_lib(rt clock_gettime)
  dune_test_lib(ws2_32 getch)
  dune_test_lib(wsock32 getch)
  dune_test_lib(iphlpapi getch)
  dune_test_lib(socket setsockopt)
  dune_test_lib(pthread pthread_self)
  dune_test_lib(m pow)
  dune_test_lib(xnet inet_addr)
  dune_test_lib(nsl inet_ntop)
  dune_test_lib(dl dlopen)
  dune_test_lib(intl gettext)
endmacro(dune_probe_libs)
