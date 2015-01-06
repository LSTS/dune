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

macro(dune_add_task root_folder task)
  string(REPLACE "/Task.cmake" "" path ${task})

  # Clear variables
  set(TASK_NAME Task)
  set(TASK_NAME_MANGLED)
  set(TASK_LABEL)
  set(TASK_REQUIRES)
  set(TASK_ENABLED TRUE)
  set(TASK_SOURCES)
  set(TASK_HEADERS)
  set(TASK_PROGRAM)
  set(TASK_NOT_STRICT)

  macro(task_files_hook)
  endmacro(task_files_hook)

  set(TASK_DIR ${root_folder}/${path})
  include(${root_folder}/${task})

  set(class_file ${path}/${TASK_NAME})
  string(REPLACE "/" "::" TASK_CLASS_PATH ${path})

  set(TASK_CLASS ${TASK_CLASS_PATH}::${TASK_NAME})
  set(TASK_LABEL ${TASK_CLASS})

  if(TASK_NAME STREQUAL Task)
    set(TASK_LABEL ${TASK_CLASS_PATH})
  endif(TASK_NAME STREQUAL Task)

  string(REPLACE "::" "." TASK_LABEL ${TASK_LABEL})
  set(TASK_CLASS_PATH "::${TASK_CLASS_PATH}")

  string(REPLACE "/" ";" task_ns ${path})

  foreach(ns ${task_ns})
    set(TASK_NAME_MANGLED ${TASK_NAME_MANGLED}${ns})
  endforeach(ns ${task_ns})

  set(TASK_NAME_MANGLED ${TASK_NAME_MANGLED}${TASK_NAME})
  set(cxx_flags "-DDUNE_TASK=\"DUNE_TASK_EXPORT(${TASK_CLASS_PATH}::Task, ${TASK_NAME_MANGLED})\"")

  # Get required dependencies.
  set(deps_met 1)

  if(TASK_REQUIRES)
    string(TOUPPER ${TASK_REQUIRES} deps)
    string(REPLACE "-" "_" deps ${deps})
    string(REPLACE " " "" deps ${deps})
    string(REPLACE "," ";" deps ${deps})

    foreach(dep ${deps})
      if(NOT "${DUNE_USING_${dep}}" EQUAL 1)
        set(deps_met 0)
      endif(NOT "${DUNE_USING_${dep}}" EQUAL 1)
      set(cxx_flags "${cxx_flags} -DDUNE_${dep}_REQUIRED")
    endforeach(dep ${deps})
  endif(TASK_REQUIRES)

  if(deps_met AND TASK_ENABLED)
    set(DUNE_TASKS_ENABLED ${DUNE_TASKS_ENABLED} ${TASK_LABEL})

    task_files_hook()

    if(TASK_NOT_STRICT)
      set(cxx_flags "${cxx_flags} ${DUNE_CXX_FLAGS}")
    else(TASK_NOT_STRICT)
      set(cxx_flags "${cxx_flags} ${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")
    endif(TASK_NOT_STRICT)

    if(NOT TASK_SOURCES)
      file(GLOB TASK_SOURCES ${root_folder}/${path}/*.cpp)
    endif(NOT TASK_SOURCES)

    if(NOT TASK_HEADERS)
      file(GLOB TASK_HEADERS ${root_folder}/${path}/*.hpp)
    endif(NOT TASK_HEADERS)

    if(TASK_PROGRAM)
      foreach(task_main_source ${TASK_PROGRAM})
        set(program)
        list(REMOVE_ITEM TASK_SOURCES ${task_main_source})
        list(REMOVE_ITEM TASK_SOURCES ${PROJECT_SOURCE_DIR}/${task_main_source})

        get_filename_component(program ${task_main_source} NAME_WE)
        add_executable(${program} EXCLUDE_FROM_ALL ${TASK_SOURCES} ${TASK_HEADERS} ${task_main_source})
        target_link_libraries(${program} dune-core ${DUNE_SYS_LIBS} ${DUNE_EXTERNAL_LIBS})
        set_source_files_properties(${task_main_source} PROPERTIES COMPILE_FLAGS "${cxx_flags}")
      endforeach(task_main_source ${TASK_PROGRAM})
    endif(TASK_PROGRAM)

    set_source_files_properties(${TASK_SOURCES}
      PROPERTIES COMPILE_FLAGS "${cxx_flags}")

    if(DUNE_STATIC)
      add_library(${TASK_LABEL} STATIC ${TASK_SOURCES})
      target_link_libraries(${TASK_LABEL} dune-core ${DUNE_SYS_LIBS})
      if(DUNE_CXX_MICROSOFT AND DUNE_CPU_X86)
        if(DUNE_CPU_32B)
          set_target_properties(${TASK_LABEL} PROPERTIES STATIC_LIBRARY_FLAGS "/machine:x86")
        else(DUNE_CPU_32B)
          set_target_properties(${TASK_LABEL} PROPERTIES STATIC_LIBRARY_FLAGS "/machine:x64")
        endif(DUNE_CPU_32B)
      endif(DUNE_CXX_MICROSOFT AND DUNE_CPU_X86)
      set(creator_sign "DUNE::Tasks::Task* create${TASK_NAME_MANGLED}(const std::string&, DUNE::Tasks::Context&);\n")
      set(creator_init "DUNE::Tasks::Factory::registerStaticTask(\"${TASK_LABEL}\", create${TASK_NAME_MANGLED});\n")
      set(STATIC_TASKS_SIGNATURES "${STATIC_TASKS_SIGNATURES}${creator_sign}")
      set(STATIC_TASKS_CREATORS "${STATIC_TASKS_CREATORS}${creator_init}")
      set(DUNE_STATIC_TASKS "${DUNE_STATIC_TASKS};${TASK_LABEL}")
    endif(DUNE_STATIC)

    if(DUNE_SHARED)
      add_library(${TASK_LABEL} MODULE ${TASK_SOURCES})
      target_link_libraries(${TASK_LABEL} dune-core ${DUNE_SYS_LIBS})
      set_target_properties(${TASK_LABEL} PROPERTIES PREFIX "")
      set_target_properties(${TASK_LABEL} PROPERTIES SUFFIX ".ddt")
      install(TARGETS ${TASK_LABEL} RUNTIME DESTINATION lib LIBRARY DESTINATION lib)
    endif(DUNE_SHARED)

  else(deps_met AND TASK_ENABLED)
    set(DUNE_TASKS_DISABLED ${DUNE_TASKS_DISABLED} ${TASK_LABEL})
  endif(deps_met AND TASK_ENABLED)
endmacro(dune_add_task root_folder task)

macro(dune_add_tasks root_folder)
  file(GLOB_RECURSE tasks RELATIVE ${root_folder} ${root_folder}/Task.cmake)
  foreach(task ${tasks})
    dune_add_task(${root_folder} ${task})
  endforeach(task ${tasks})
endmacro(dune_add_tasks root_folder)

message(STATUS "")
message(STATUS "******************************************")
message(STATUS "***                Tasks               ***")
message(STATUS "******************************************")

if(TASK_FILE)
  if(NOT IS_ABSOLUTE "${TASK_FILE}")
    include(${CMAKE_CURRENT_BINARY_DIR}/${TASK_FILE})
  else()
    include(${TASK_FILE})
  endif()
else(TASK_FILE)
  dune_add_tasks(${PROJECT_SOURCE_DIR}/src)
  dune_add_tasks(${PROJECT_SOURCE_DIR}/private/src)
  dune_add_tasks(${PROJECT_SOURCE_DIR}/user/src)
endif(TASK_FILE)

list(SORT DUNE_TASKS_ENABLED)
foreach(enabled_tasks ${DUNE_TASKS_ENABLED})
  message(STATUS "${enabled_tasks}")
endforeach(enabled_tasks ${DUNE_TASKS_ENABLED})

if(DUNE_TASKS_DISABLED)
  list(SORT DUNE_TASKS_DISABLED)
  message(STATUS "")
  message(STATUS "Disabled due to missing dependencies")
  foreach(disabled_tasks ${DUNE_TASKS_DISABLED})
    message(STATUS "  ${disabled_tasks}")
  endforeach(disabled_tasks ${DUNE_TASKS_DISABLED})
endif(DUNE_TASKS_DISABLED)

message(STATUS "")
