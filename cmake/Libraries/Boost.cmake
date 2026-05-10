if(NOT DUNELEGACY)
  return()
endif()

find_package(Boost 1.80 REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

dune_test_header(boost/optional.hpp)
dune_add_lib(boost_optional)