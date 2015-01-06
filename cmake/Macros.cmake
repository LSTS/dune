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

include(${PROJECT_SOURCE_DIR}/cmake/Compiler.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/Architecture.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/OperatingSystem.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/CXXLibrary.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/SystemLibraries.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/Functions.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/Types.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/Headers.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/Programs.cmake)

macro(DUNE_PROBE_SYSTEM)
  dune_probe_cxx()
  dune_probe_cpu()
  dune_probe_cpu_variant()
  dune_probe_os()
  dune_probe_cxx_lib()
  dune_probe_libs()
  dune_probe_headers()
  dune_probe_functions()
  dune_probe_types()

  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***          Probing Libraries         ***")
  message(STATUS "******************************************")
  file(GLOB cmake_includes ${PROJECT_SOURCE_DIR}/cmake/Libraries/*.cmake)
  foreach(cmake_include ${cmake_includes})
    include(${cmake_include})
  endforeach(cmake_include ${cmake_includes})

  dune_probe_programs()

  set(DUNE_SYSTEM_NAME
    "${DUNE_CPU_CANONICAL}-${DUNE_CPU_BITS}bit-${DUNE_OS_CANONICAL}-${DUNE_CLIB_CANONICAL}-${DUNE_CXX_CANONICAL}")

  set(DUNE_SYSTEM_NAME_VAR
    "${DUNE_CPU_VARIANT}-${DUNE_CPU_BITS}bit-${DUNE_OS_CANONICAL}-${DUNE_CLIB_CANONICAL}-${DUNE_CXX_CANONICAL}")

  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***           System Summary           ***")
  message(STATUS "******************************************")
  message(STATUS "Processor     : ${DUNE_CPU_NAME} ${DUNE_CPU_BITS} bit / ${DUNE_CPU_ENDIANNESS}")
  message(STATUS "System        : ${DUNE_OS_NAME}")
  message(STATUS "Compiler      : ${DUNE_CXX_NAME}")
  message(STATUS "C/C++ Library : ${DUNE_CLIB_NAME}")
  message(STATUS "Canonical     : ${DUNE_SYSTEM_NAME}")
  set(DUNE_PROBE_SYSTEM_DONE 1)
endmacro(DUNE_PROBE_SYSTEM)

# Force system probe for remaining macros.
if(NOT DUNE_PROBE_SYSTEM_DONE)
  DUNE_PROBE_SYSTEM()
endif(NOT DUNE_PROBE_SYSTEM_DONE)

# Utility macro to convert and escape paths on Microsoft Windows
macro(dune_set_path var path)
  if(DUNE_OS_WINDOWS AND CMAKE_HOST_WIN32)
    string(REPLACE "/" "\\\\" norm_path ${path})
    set(${var} ${norm_path})
  else(DUNE_OS_WINDOWS AND CMAKE_HOST_WIN32)
    set(${var} ${path})
  endif(DUNE_OS_WINDOWS AND CMAKE_HOST_WIN32)
endmacro(dune_set_path)

macro(dune_option name description)
  set(${name} ${${name}} CACHE BOOL description)

  if(${name})
    message(STATUS "Module ${name}: Enabled")
  else(${name})
    message(STATUS "Module ${name}: Disabled")
  endif(${name})
endmacro(dune_option name description)

# Utility macro to retrieve the correct path for a generated source file.
macro(DUNE_GET_GENERATED_PATH output file)
  get_filename_component(outpath ${file} PATH)
  set(outpath ${DUNE_GENERATED}/${outpath})
  file(MAKE_DIRECTORY ${outpath})
  set(${output} ${outpath})
endmacro(DUNE_GET_GENERATED_PATH file)
