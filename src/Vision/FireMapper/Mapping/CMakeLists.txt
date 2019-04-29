cmake_minimum_required(VERSION 3.0)

file(GLOB MAPPING_SOURCES *.cpp)
file(GLOB MAPPING_HEADERS *.hpp)

find_package(GDAL REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${GDAL_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})


add_executable(standalone_mapping ${MAPPING_SOURCES} ${MAPPING_HEADERS} standalone/main.cpp)
target_link_libraries(standalone_mapping ${GDAL_LIBRARY} ${OpenCV_LIBS} ${CMAKE_THREAD_LIBS_INIT})
