macro(task_files_hook)
  file(GLOB VSIM_SOURCES ${TASK_DIR}/VSIM/*.cpp)
  file(GLOB VSIM_HEADERS ${TASK_DIR}/VSIM/*.hpp)

  set(TASK_SOURCES ${VSIM_SOURCES} ${TASK_DIR}/Task.cpp ${TASK_DIR}/Factory.cpp)
  set(TASK_HEADERS ${VSIM_HEADERS} ${TASK_DIR}/Factory.hpp)

  include_directories(${TASK_DIR})
endmacro(task_files_hook)
