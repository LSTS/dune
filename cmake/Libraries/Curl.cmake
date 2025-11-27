# Find the libcurl package
if(NOT DEFINED CROSS)
  find_package(CURL QUIET)

  if(CURL_FOUND)
    include_directories(${CURL_INCLUDE_DIR})
    dune_test_header(curl/curl.h)
    dune_add_lib(curl)
  endif(CURL_FOUND)
endif(NOT DEFINED CROSS)