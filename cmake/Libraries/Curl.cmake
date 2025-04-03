# Find the libcurl package
find_package(CURL QUIET)

if (CURL_FOUND)
  include_directories(${CURL_INCLUDE_DIR})
  dune_test_header(curl/curl.h)
  dune_add_lib(curl)
endif()