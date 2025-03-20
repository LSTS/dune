# Find the libcurl package
find_package(CURL REQUIRED)

if (CURL_FOUND)
  message(STATUS "libcurl found.")
  include_directories(${CURL_INCLUDE_DIR})
  dune_add_lib(curl)
endif()