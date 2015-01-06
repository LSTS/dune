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

include(CheckSymbolExists)
include(CheckCXXCompilerFlag)

macro(dune_probe_cxx)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***           Probing Compiler         ***")
  message(STATUS "******************************************")

  # Intel C Compiler
  if(NOT DUNE_CXX_NAME)
    check_symbol_exists(__INTEL_COMPILER stdio.h DUNE_CXX_INTEL)
    if(DUNE_CXX_INTEL)
      set(DUNE_CXX_NAME "Intel")
      set(DUNE_CXX_CANONICAL "intel")
      if(CMAKE_BUILD_TYPE MATCHES "Debug")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
      endif(CMAKE_BUILD_TYPE MATCHES "Debug")
    endif(DUNE_CXX_INTEL)
  endif(NOT DUNE_CXX_NAME)

  # Sun Studio compiler.
  if(NOT DUNE_CXX_NAME)
    check_symbol_exists(__SUNPRO_C stdio.h DUNE_CXX_SUN)
    if(DUNE_CXX_SUN)
      set(DUNE_CXX_NAME "Sun Studio/Sun Pro")
      set(DUNE_CXX_CANONICAL "sunpro")
      set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -library=stlport4")
      add_definitions(-D_REENTRANT)
    endif(DUNE_CXX_SUN)
  endif(NOT DUNE_CXX_NAME)

  # LLVM/Clang compiler.
  if(NOT DUNE_CXX_NAME)
    check_symbol_exists(__clang__ stdio.h DUNE_CXX_CLANG)
    if(DUNE_CXX_CLANG)
      set(DUNE_CXX_NAME "LLVM/Clang")
      set(DUNE_CXX_CANONICAL "clang")
    endif(DUNE_CXX_CLANG)
  endif(NOT DUNE_CXX_NAME)

  # GNU C Compiler
  if(NOT DUNE_CXX_NAME)
    check_symbol_exists(__GNUC__ stdio.h DUNE_CXX_GNU)
    if(DUNE_CXX_GNU)
      exec_program(${CMAKE_CXX_COMPILER} ARGS -dumpversion OUTPUT_VARIABLE verinfo)
      string(REPLACE "." ";" gxxver ${verinfo})
      list(GET gxxver 0 gxxmaj)
      list(GET gxxver 1 gxxmin)

      # For now all minor versions of GCC v4 have a compatible ABI.
      if("${gxxmaj}" MATCHES "4")
        set(gxxmin "x")
      endif("${gxxmaj}" MATCHES "4")

      set(DUNE_CXX_NAME "GCC v${gxxmaj}.${gxxmin}")
      set(DUNE_CXX_CANONICAL "gcc${gxxmaj}${gxxmin}")

      # This avoids spurious warnings from C++ STL code.
      if("${gxxmaj}" MATCHES "3")
        set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} -Wno-uninitialized")
      endif("${gxxmaj}" MATCHES "3")

      check_cxx_compiler_flag(-fexceptions has_fexceptions)
      if(has_fexceptions)
        set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} -fexceptions")
      endif(has_fexceptions)

      check_cxx_compiler_flag(-Wno-long-long has_wno_long_long)
      if(has_wno_long_long)
        set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} -Wno-long-long")
        set(DUNE_C_FLAGS "${DUNE_C_FLAGS} -Wno-long-long")
      endif(has_wno_long_long)

      check_cxx_compiler_flag(-Wextra has_wextra)
      if(has_wextra)
        set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} -Wextra")
        set(DUNE_C_FLAGS "${DUNE_C_FLAGS} -Wextra")
      endif(has_wextra)

      check_cxx_compiler_flag(-Wformat has_wformat)
      if(has_wformat)
        set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} -Wformat -Wformat-security")
        set(DUNE_C_FLAGS "${DUNE_C_FLAGS} -Wformat -Wformat-security")
      endif(has_wformat)

      check_cxx_compiler_flag(-Wno-missing-field-initializers has_wno_missing_field_initializers)
      if(has_wno_missing_field_initializers)
        set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} -Wno-missing-field-initializers")
        set(DUNE_C_FLAGS "${DUNE_C_FLAGS} -Wno-missing-field-initializers")
      endif(has_wno_missing_field_initializers)

      check_cxx_compiler_flag(-fdiagnostics-show-option has_fdiagnostic_show_option)
      if(has_fdiagnostic_show_option)
        set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} -fdiagnostics-show-option")
        set(DUNE_C_FLAGS "${DUNE_C_FLAGS} -fdiagnostics-show-option")
      endif(has_fdiagnostic_show_option)

      if(NO_RTTI)
        check_cxx_compiler_flag(-fno-rtti has_fno_rtti)
        if(has_fno_rtti)
          set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} -fno-rtti")
        endif(has_fno_rtti)
      endif()

      if(PROFILE)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pg")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pg")
      endif(PROFILE)

      set(DUNE_CXX_FLAGS_STRICT "-Wall -Wshadow -pedantic")
      set(DUNE_C_FLAGS_STRICT "-Wall -Wshadow -pedantic")
      set(DUNE_CXX_FLAGS_LOOSE  "")
      set(DUNE_CXX_FLAGS_DEBUG  "")
    endif(DUNE_CXX_GNU)
  endif(NOT DUNE_CXX_NAME)

  # Microsoft compiler
  if(NOT DUNE_CXX_NAME)
    check_symbol_exists(_MSC_VER stdio.h DUNE_CXX_MICROSOFT)
    if(DUNE_CXX_MICROSOFT)
      set(DUNE_CXX_NAME "Microsoft")

      if(MSVC60)
        message(FATAL_ERROR "Visual Studio 6.0 is not supported")
      elseif(MSVC10)
        set(msv_version "2010")
      elseif(MSVC90)
        set(msv_version "2008")
      elseif(MSVC80)
        set(msv_version "2005")
      elseif(MSVC71)
        set(msv_version "2003")
      elseif(MSVC70)
        set(msv_version "2002")
      endif(MSVC60)

      set(DUNE_CXX_CANONICAL "vs${msv_version}")
      set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} /wd4251 /wd4244 /wd4267 /wd4800 /wd4805 /wd4305 /wd4244 /wd4996")
      set(DUNE_CXX_FLAGS_STRICT "")
      set(DUNE_CXX_FLAGS_LOOSE  "")
      set(DUNE_CXX_FLAGS_DEBUG  "")

      add_definitions(-D_CRT_SECURE_NO_WARNINGS -D_SCL_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE)
    endif(DUNE_CXX_MICROSOFT)
  endif(NOT DUNE_CXX_NAME)

  # Unknown compiler
  if(NOT DUNE_CXX_NAME)
    set(DUNE_CXX_NAME "Unknown")
    set(DUNE_CXX_CANONICAL "unk")
    set(DUNE_CXX_UNKNOWN 1)
  endif(NOT DUNE_CXX_NAME)
endmacro(dune_probe_cxx)
