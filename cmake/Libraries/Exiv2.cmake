############################################################################
# Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      #
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
# Author: Pedro Gonçalves                                                  #
############################################################################

if(EXIV2)
  find_library(EXIV2_LIBRARY NAMES exiv2 PATHS /usr/lib)

  if(${EXIV2_LIBRARY} STRLESS "libexiv2.so")
    # Exiv2 Present
    set(DUNE_SYS_HAS_EXIV2 1 CACHE INTERNAL "Exiv2 library")
    set(DUNE_USING_EXIV2 1 CACHE INTERNAL "Exiv2 library")

    # FIND_PACKAGE(Exiv2 REQUIRED)
    dune_add_lib(exiv2)

    # Check Header
    dune_test_header(exiv2/exiv2.hpp)

  else()
    # Exiv2 not found on the system.
    message(SEND_ERROR "Exiv2 was not found on the system.")
    set(DUNE_SYS_HAS_EXIV2 0 CACHE INTERNAL "Exiv2 library")
    set(DUNE_USING_EXIV2 0 CACHE INTERNAL "Exiv2 library")

  endif()

endif(EXIV2)
