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
# Retrieve extra versioning information.                                   #
############################################################################

if(DUNE_VERSION_TPL AND DUNE_VERSION_OUT)
  execute_process(COMMAND git rev-parse --symbolic-full-name --abbrev-ref HEAD
    WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}"
    OUTPUT_VARIABLE branch
    ERROR_QUIET
    OUTPUT_STRIP_TRAILING_WHITESPACE)
  string(COMPARE EQUAL "${branch}" "" empty_string)
  if(empty_string)
    set(branch "unknown")
  endif(empty_string)
  set(DUNE_GIT_INFO "${branch}")

  execute_process(COMMAND git rev-parse --short HEAD
    WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}"
    OUTPUT_VARIABLE sha1
    OUTPUT_STRIP_TRAILING_WHITESPACE)
  string(COMPARE EQUAL "${sha1}" "" empty_string)
  if(empty_string)
    set(sha1 "unknown")
  endif(empty_string)
  set(DUNE_GIT_INFO "${DUNE_GIT_INFO},${sha1}")

  execute_process(COMMAND git status -s
    WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}"
    OUTPUT_VARIABLE dirty
    ERROR_QUIET
    OUTPUT_STRIP_TRAILING_WHITESPACE)
  string(COMPARE NOTEQUAL "${dirty}" "" empty_string)
  if(empty_string)
    set(DUNE_GIT_INFO "${DUNE_GIT_INFO},dirty")
  endif(empty_string)

  configure_file("${DUNE_VERSION_TPL}" "${DUNE_VERSION_OUT}.tmp")

  execute_process(COMMAND ${CMAKE_COMMAND} -E compare_files
    "${DUNE_VERSION_OUT}.tmp" "${DUNE_VERSION_OUT}"
    RESULT_VARIABLE files_cmp
    OUTPUT_QUIET
    ERROR_QUIET)

  if(files_cmp)
    file(RENAME "${DUNE_VERSION_OUT}.tmp" "${DUNE_VERSION_OUT}")
  endif()
else()
  set(DUNE_CORE_SOURCES ${DUNE_CORE_SOURCES}
    ${DUNE_GENERATED}/src/DUNE/Version.cpp)
  file(WRITE "${DUNE_GENERATED}/src/DUNE/Version.cpp" "")

  add_custom_target(dune-version
    COMMAND ${CMAKE_COMMAND}
    -DPROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}
    -DDUNE_VERSION_TPL=src/DUNE/Version.cpp.in
    -DDUNE_VERSION_OUT=${DUNE_GENERATED}/src/DUNE/Version.cpp
    -P "cmake/Version.cmake"
    WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}"
    VERBATIM)
endif()
