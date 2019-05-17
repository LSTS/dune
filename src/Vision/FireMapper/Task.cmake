if (NOT DUNE_SYS_HAS_OPENCV)
    set(TASK_ENABLED FALSE)
endif (NOT DUNE_SYS_HAS_OPENCV)

if (NOT DUNE_SYS_HAS_GDAL)
    set(TASK_ENABLED FALSE)
endif (NOT DUNE_SYS_HAS_GDAL)

macro(task_files_hook)
    file(GLOB MAPPING_TASK_SOURCES ${TASK_DIR}/*.cpp ${TASK_DIR}/Mapping/*.cpp)
    file(GLOB MAPPING_TASK_HEADERS ${TASK_DIR}/*.hpp ${TASK_DIR}/Mapping/*.hpp)

    set(TASK_SOURCES ${MAPPING_TASK_SOURCES})
    set(TASK_HEADERS ${MAPPING_TASK_HEADERS})

    include_directories(${TASK_DIR})
    include_directories(${TASK_DIR}/Mapping)
endmacro(task_files_hook)

