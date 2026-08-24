macro(task_files_hook)
  file(GLOB SAMPLERS_SOURCES ${TASK_DIR}/Samplers/*.cpp)
  file(GLOB SAMPLERS_HEADERS ${TASK_DIR}/Samplers/*.hpp)

  set(TASK_SOURCES ${SAMPLERS_SOURCES} ${TASK_DIR}/Task.cpp)
  set(TASK_HEADERS ${SAMPLERS_HEADERS} ${TASK_DIR}/SamplerFactory.hpp)

  include_directories(${TASK_DIR})
endmacro(task_files_hook)