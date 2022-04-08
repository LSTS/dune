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
# Author: Ricardo Martins                                                  #
############################################################################

dune_test_lib(bvtsdk BVTSonar_Create)
dune_test_header(bvt_sdk.h)

if(DUNE_SYS_HAS_LIB_BVTSDK AND DUNE_SYS_HAS_BVT_SDK_H)
  # BVTSDK.
  check_cxx_source_compiles("#include <bvt_sdk.h>\nint main(void) { BVTSonar_GetTemperature(0); return 0;}"
    BVTSDK)
  # BVTSDK 4.
  check_cxx_source_compiles("#include <bvt_sdk.h>\nint main(void) { float x = 0; BVTSonar_GetTemperature(0, &x); return 0;}"
    BVTSDK4)

  if(BVTSDK)
    set(DUNE_USING_BVTSDK 1 CACHE INTERNAL "libbvtsdk")
  endif()

  if(BVTSDK4)
    set(DUNE_USING_BVTSDK4 1 CACHE INTERNAL "libbvtsdk4")
  endif()
else(DUNE_SYS_HAS_LIB_BVTSDK AND DUNE_SYS_HAS_BVT_SDK_H)
  set(DUNE_USING_BVTSDK 0 CACHE INTERNAL "libbvtsdk")
endif(DUNE_SYS_HAS_LIB_BVTSDK AND DUNE_SYS_HAS_BVT_SDK_H)
