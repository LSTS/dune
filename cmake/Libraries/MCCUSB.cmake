############################################################################
# Copyright 2007-2021 OceanScan - Marine Systems & Technology, Lda.        #
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

dune_test_lib(usb-1.0 libusb_init)
dune_test_lib(hidapi-libusb hid_close)
dune_test_lib(mccusb usb_device_find_USB_MCC)
dune_test_header(mccusb/pmd.h)

if(DUNE_SYS_HAS_LIB_MCCUSB AND DUNE_SYS_HAS_MCCUSB_PMD_H)
  set(DUNE_USING_MCCUSB 1 CACHE INTERNAL "MCC USB library")
else()
  set(DUNE_USING_MCCUSB 0 CACHE INTERNAL "MCC USB library")
endif()
