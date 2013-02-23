#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################

if(V4L2)
  dune_test_lib(v4l2 v4l2_open)
  dune_test_header(libv4l2.h)

  if(DUNE_SYS_HAS_LIB_V4L2 AND DUNE_SYS_HAS_LIBV4L2_H)
    set(DUNE_USING_V4L2 1 CACHE INTERNAL "libv4l2")
  else(DUNE_SYS_HAS_LIB_V4L2 AND DUNE_SYS_HAS_LIBV4L2_H)
    set(DUNE_USING_V4L2 0 CACHE INTERNAL "libv4l2")
  endif(DUNE_SYS_HAS_LIB_V4L2 AND DUNE_SYS_HAS_LIBV4L2_H)
endif(V4L2)
