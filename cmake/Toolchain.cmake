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
# This script tries to overcome some CMake limitations regarding cross     #
# compilers. The alternative method is to have a CMAKE_TOOLCHAIN_FILE      #
# describing the toolchain. For now this script is far easier to use.      #
############################################################################

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
