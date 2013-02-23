#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# $Id:: Toolchain.cmake 12303 2013-01-01 02:14:25Z jbraga                 $:#
#############################################################################
# This script tries to overcome some CMake limitations regarding cross      #
# compilers. The alternative method is to have a CMAKE_TOOLCHAIN_FILE       #
# describing the toolchain. For now this script is far easier to use.       #
#############################################################################

if(CROSS)
  # Cleanup prefix.
  string(REGEX REPLACE "gcc$" "" CROSS "${CROSS}")
  string(REGEX REPLACE "g\\+\\+$" "" CROSS "${CROSS}")
  string(REGEX REPLACE "-gcc$" "" CROSS "${CROSS}")
  string(REGEX REPLACE "-g\\+\\+$" "" CROSS "${CROSS}")
  string(REGEX REPLACE "-$" "" CROSS "${CROSS}")

  # MinGW cross toolchain.
  string(REGEX MATCH ".*mingw.*" match_mingw "${CROSS}")
  if(match_mingw)
    set(CMAKE_SYSTEM_NAME Windows)
    set(CMAKE_C_COMPILER "${CROSS}-gcc")
    set(CMAKE_CXX_COMPILER "${CROSS}-g++")
    set(CMAKE_RC_COMPILER "${CROSS}-windres")
    set(CMAKE_STRIP "${CROSS}-strip")
    set(CMAKE_RC_COMPILE_OBJECT "<CMAKE_RC_COMPILER> --input-format rc --output-format coff -i<SOURCE> -o<OBJECT>")
  endif(match_mingw)

  # GCC Linux cross toolchain.
  string(REGEX MATCH ".*linux.*" match_linux "${CROSS}")
  if(match_linux)
    set(CMAKE_SYSTEM_NAME Linux)
    set(CMAKE_C_COMPILER "${CROSS}-gcc")
    set(CMAKE_CXX_COMPILER "${CROSS}-g++")
  endif(match_linux)

  # RTEMS toolchain.
  string(REGEX MATCH ".*rtems.*" match_rtems "${CROSS}")
  if(match_rtems)
    if(NOT RTEMS_BSP)
      message(FATAL_ERROR "\nPlease set RTEMS_BSP to the path of your BSP\n")
    endif(NOT RTEMS_BSP)

    # Set RTEMS_RELOCADDR to the address where you want your
    # image to load (in hexadecimal) If you'll be using GRUB to load
    # the images it will have to be >= 0x100000 (1024K). If you are
    # using NetBoot to load the images it can be >= 0x10000 (64K) AND
    # <= 0x97C00 (607K) OR >= 0x100000 (1024K). The memory top is of
    # course another limit. Make sure there is enough space before the
    # upper memory limits for the image and the memory allocated by it
    # to fit.  Make sure the value you choose is aligned to 4 bytes.
    if(NOT RTEMS_RELOCADDR)
      set(RTEMS_RELOCADDR "0x100000")
    endif(NOT RTEMS_RELOCADDR)

    set(CMAKE_SYSTEM_NAME Generic)
    set(CMAKE_C_COMPILER "${CROSS}-gcc")
    set(CMAKE_CXX_COMPILER "${CROSS}-g++")

    file(GLOB_RECURSE pcs "${RTEMS_BSP}/*.pc")
    exec_program(pkg-config ARGS "${pcs}" --cflags OUTPUT_VARIABLE cflags)
    exec_program(pkg-config ARGS "${pcs}" --variable=includedir OUTPUT_VARIABLE include)

    string(REPLACE "-O2" "" cflags ${cflags})
    string(REPLACE "-g" "" cflags ${cflags})
    string(REPLACE "-Wall" "" cflags ${cflags})
    string(REPLACE "-Wimplicit-function-declaration" "" cflags ${cflags})
    string(REPLACE "-Wstrict-prototypes" "" cflags ${cflags})
    string(REPLACE "-Wnested-externs" "" cflags ${cflags})

    set(CMAKE_CXX_FLAGS_INIT "${cflags}" CACHE INTERNAL "Initial C++ compiler flags")
    set(CMAKE_CXX_FLAGS_DEBUG_INIT "${cflags}" CACHE INTERNAL "Initial C++ compiler flags")
    set(CMAKE_CXX_FLAGS_RELEASE_INIT "${cflags}" CACHE INTERNAL "Initial C++ compiler flags")
    set(CMAKE_CXX_FLAGS_RELWITHDEBINFO_INIT "${cflags}" CACHE INTERNAL "Initial C++ compiler flags")
    set(CMAKE_C_FLAGS_INIT "${cflags}" CACHE INTERNAL "Initial C compiler flags")
    set(CMAKE_C_FLAGS_DEBUG_INIT "${cflags}" CACHE INTERNAL "Initial C compiler flags")
    set(CMAKE_C_FLAGS_RELEASE_INIT "${cflags}" CACHE INTERNAL "Initial C compiler flags")
    set(CMAKE_C_FLAGS_RELWITHDEBINFO_INIT "${cflags}" CACHE INTERNAL "Initial C compiler flags")

    set(CMAKE_EXE_LINKER_FLAGS_INIT "-Wl,-Ttext,${RTEMS_RELOCADDR}" CACHE INTERNAL "C linker flags")

    set(CMAKE_FIND_ROOT_PATH  "${include}")
    set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
    set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
    set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
  endif(match_rtems)

  set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
  set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY NEVER)
  set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE NEVER)

endif(CROSS)
