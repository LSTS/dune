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

if(POINTGREY)
  CHECK_LIBRARY_EXISTS(flycapture-c GetInternal "" HAVE_LIB_FLYCAPTURE)

  if(HAVE_LIB_FLYCAPTURE)
    # FlyCapture Present
    set(DUNE_SYS_HAS_FLYCAPTURE 1 CACHE INTERNAL "FlyCapture library")
    set(DUNE_USING_FLYCAPTURE 1 CACHE INTERNAL "FlyCapture library")


    dune_add_lib(flycapture)
    dune_add_lib(flycapture-c)

    # Check Header
    dune_test_header(flycapture/FlyCapture2.h)
    dune_test_header(flycapture/FlyCapture2_C.h)

  else(HAVE_LIB_FLYCAPTURE)
    # FlyCapture not found on the system.
    message(SEND_ERROR "FlyCapture was not found on the system.")
    set(DUNE_SYS_HAS_FLYCAPTURE 0 CACHE INTERNAL "FlyCapture library")
    set(DUNE_USING_FLYCAPTURE 0 CACHE INTERNAL "FlyCapture library")
  endif(HAVE_LIB_FLYCAPTURE)

endif(POINTGREY)
