if(NOT DUNELEGACY)
  add_compile_definitions(DUNE_HAS_OPTIONAL)
  return()
endif()

find_package(Boost 1.80)

if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  add_compile_definitions(DUNE_HAS_OPTIONAL)
endif()