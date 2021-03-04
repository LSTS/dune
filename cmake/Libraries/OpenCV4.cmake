############################################################################
# Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      #
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
# Author: Pedro Gonçalves                                                  #
############################################################################

if(OPENCV4)
  CHECK_LIBRARY_EXISTS(opencv_core cvGetImage "" HAVE_LIB_OPENCV4)

  if(HAVE_LIB_OPENCV4)
    # OpenCV Present
    set(DUNE_SYS_HAS_OPENCV4 1 CACHE INTERNAL "OpenCV4 library")
    set(DUNE_USING_OPENCV4 1 CACHE INTERNAL "OpenCV4 library")

    # FIND_PACKAGE(OpenCV REQUIRED)
    dune_add_lib(opencv_calib3d)
    dune_add_lib(opencv_core)
    dune_add_lib(opencv_dnn)
    dune_add_lib(opencv_features2d)
    dune_add_lib(opencv_flann)
    dune_add_lib(opencv_highgui)
    dune_add_lib(opencv_imgcodecs)
    dune_add_lib(opencv_imgproc)
    dune_add_lib(opencv_ml)
    dune_add_lib(opencv_objdetect)
    dune_add_lib(opencv_photo)
    dune_add_lib(opencv_stitching)
    dune_add_lib(opencv_video)
    dune_add_lib(opencv_videoio)

    if(CROSS)
      # Get location of toolchain
      string(REPLACE "/bin" "" TOOLCHAIN_INCLUDE_FOLDER ${CROSS})
      set(TOOLCHAIN_INCLUDE_FOLDER "${TOOLCHAIN_INCLUDE_FOLDER}/sysroot/usr/include/")
      # Check Header
      # Utility macro to search files
      set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
      macro(dune_check_file file_to_search)
        unset(FILE_TO_SEARCH CACHE)
        set(FILE_PATH "${TOOLCHAIN_INCLUDE_FOLDER}${file_to_search}")
        if(EXISTS "${FILE_PATH}")
          message(STATUS "Looking for C++ include ${file_to_search} - found")
          include_directories("${TOOLCHAIN_INCLUDE_FOLDER}/opencv4")
        else()
          message(STATUS "Looking for C++ include ${file_to_search} - not found")
        endif()
      endmacro(dune_check_file file_to_search)
      set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY NEVER)

      dune_check_file(opencv4/opencv2/calib3d.hpp)
      dune_check_file(opencv4/opencv2/core.hpp)
      dune_check_file(opencv4/opencv2/dnn.hpp)
      dune_check_file(opencv4/opencv2/features2d.hpp)
      dune_check_file(opencv4/opencv2/flann.hpp)
      dune_check_file(opencv4/opencv2/highgui.hpp)
      dune_check_file(opencv4/opencv2/imgcodecs.hpp)
      dune_check_file(opencv4/opencv2/imgproc.hpp)
      dune_check_file(opencv4/opencv2/ml.hpp)
      dune_check_file(opencv4/opencv2/objdetect.hpp)
      dune_check_file(opencv4/opencv2/opencv.hpp)
      dune_check_file(opencv4/opencv2/photo.hpp)
      dune_check_file(opencv4/opencv2/stitching.hpp)
      dune_check_file(opencv4/opencv2/video.hpp)
      dune_check_file(opencv4/opencv2/videoio.hpp)
    endif()

  else(HAVE_LIB_OPENCV4)
    # OpenCV not found on the system.
    message(SEND_ERROR "OpenCV v4.x was not found on the system.")
    set(DUNE_SYS_HAS_OPENCV4 0 CACHE INTERNAL "OpenCV4 library")
    set(DUNE_USING_OPENCV4 0 CACHE INTERNAL "OpenCV4 library")
  endif(HAVE_LIB_OPENCV4)
endif(OPENCV4)
