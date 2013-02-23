#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################

if(DC1394)
  dune_test_lib(dc1394 dc1394_new)
  dune_test_header(dc1394/camera.h)

  if(DUNE_SYS_HAS_LIB_DC1394 AND DUNE_SYS_HAS_DC1394_CAMERA_H)
    set(DUNE_USING_DC1394 1 CACHE INTERNAL "libdc1394")
  else(DUNE_SYS_HAS_LIB_DC1394 AND DUNE_SYS_HAS_DC1394_CAMERA_H)
    set(DUNE_USING_DC1394 0 CACHE INTERNAL "libdc1394")
  endif(DUNE_SYS_HAS_LIB_DC1394 AND DUNE_SYS_HAS_DC1394_CAMERA_H)
endif(DC1394)
