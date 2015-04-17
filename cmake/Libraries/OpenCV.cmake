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
# Author: Kristian Klausen                                                 #
############################################################################

if(OPENCV)
  CHECK_LIBRARY_EXISTS(opencv_core cvGetImage "" HAVE_LIB_OPENCV)

  if(HAVE_LIB_OPENCV)
    # OpenCV Present
    set(DUNE_SYS_HAS_OPENCV 1 CACHE INTERNAL "OpenCV library")
    set(DUNE_USING_OPENCV 1 CACHE INTERNAL "OpenCV library")

    # FIND_PACKAGE(OpenCV REQUIRED)
    dune_add_lib(opencv_calib3d)
    dune_add_lib(opencv_contrib)
    dune_add_lib(opencv_core)
    dune_add_lib(opencv_features2d)
    dune_add_lib(opencv_flann)
    dune_add_lib(opencv_gpu)
    dune_add_lib(opencv_highgui)
    dune_add_lib(opencv_imgproc)
    dune_add_lib(opencv_legacy)
    dune_add_lib(opencv_ml)
    dune_add_lib(opencv_video)
    dune_add_lib(opencv_objdetect)
    #dune_add_lib(opencv_photo)
    #dune_add_lib(opencv_stitcing)
    #dune_add_lib(opencv_ts)
    #dune_add_lib(opencv_videostab)
    #dune_add_lib(opencv_nonfree)

    # Check Header
    dune_test_header(opencv2/opencv.hpp)

  else(HAVE_LIB_OPENCV)
    # OpenCV not found on the system.
    message(SEND_ERROR "OpenCV was not found on the system.")
    set(DUNE_SYS_HAS_OPENCV 0 CACHE INTERNAL "OpenCV library")
    set(DUNE_USING_OPENCV 0 CACHE INTERNAL "OpenCV library")
  endif(HAVE_LIB_OPENCV)
endif(OPENCV)
