if(DUNELEGACY)
  return()
endif()

find_package(PkgConfig QUIET)

pkg_check_modules(MODBUS libmodbus QUIET)

if(MODBUS_FOUND)
  include_directories(${MODBUS_INCLUDE_DIRS})
  link_directories(${MODBUS_LIBRARY_DIRS})
  dune_test_header(modbus/modbus.h)
  dune_add_lib(modbus)
  set(MODBUS_AVAILABLE TRUE CACHE INTERNAL "libmodbus available")
else()
  set(MODBUS_AVAILABLE FALSE CACHE INTERNAL "libmodbus not available")
endif()