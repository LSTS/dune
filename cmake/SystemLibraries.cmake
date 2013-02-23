#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# $Id:: SystemLibraries.cmake 12303 2013-01-01 02:14:25Z jbraga           $:#
#############################################################################

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
