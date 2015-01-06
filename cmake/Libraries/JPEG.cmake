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

CHECK_LIBRARY_EXISTS(jpeg jpeg_set_defaults "" HAVE_LIB_JPEG)
dune_test_header_deps(jpeglib.h "sys/types.h;stdio.h")

check_cxx_source_compiles("
#include <stdio.h>
#include <jpeglib.h>
#if JPEG_LIB_VERSION < 80
#  error JPEG too old
#endif
int main(void) {return 0;}"
HAVE_LIB_JPEG_80)

if(HAVE_LIB_JPEG AND HAVE_LIB_JPEG_80 AND DUNE_SYS_HAS_JPEGLIB_H)
  dune_add_lib(jpeg)
  set(DUNE_SYS_HAS_JPEG 1 CACHE INTERNAL "JPEG library")
  set(DUNE_USING_JPEG 1 CACHE INTERNAL "JPEG library")
else(HAVE_LIB_JPEG AND HAVE_LIB_JPEG_80 AND DUNE_SYS_HAS_JPEGLIB_H)
  set(DUNE_SYS_HAS_JPEG 0 CACHE INTERNAL "JPEG library")
  set(DUNE_USING_JPEG 0 CACHE INTERNAL "JPEG library")
endif(HAVE_LIB_JPEG AND HAVE_LIB_JPEG_80 AND DUNE_SYS_HAS_JPEGLIB_H)
