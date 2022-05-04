##########################################################
# SQLite 3
##########################################################
file(GLOB DUNE_SQLITE3_FILES
  vendor/libraries/sqlite3/*.c)

if(DUNE_SYS_HAS_STDINT_H)
  set(SQLITE3_C_FLAGS "${SQLITE3_C_FLAGS} -DHAVE_STDINT_H")
endif(DUNE_SYS_HAS_STDINT_H)

if(DUNE_SYS_HAS_INTTYPES_H)
  set(SQLITE3_C_FLAGS "${SQLITE3_C_FLAGS} -DHAVE_INTTYPES_H")
endif(DUNE_SYS_HAS_INTTYPES_H)

if(DUNE_OS_RTEMS)
  set(SQLITE3_C_FLAGS "${SQLITE3_C_FLAGS} -DSQLITE_OMIT_WAL -DSQLITE_OMIT_LOAD_EXTENSION")
endif(DUNE_OS_RTEMS)

if(DUNE_OS_WINDOWS AND DUNE_CXX_GNU)
  set(SQLITE3_C_FLAGS "${SQLITE3_C_FLAGS} -Wno-sign-compare -Wno-uninitialized")
endif(DUNE_OS_WINDOWS AND DUNE_CXX_GNU)

if(DUNE_OS_DARWIN)
  set(SQLITE3_C_FLAGS "${SQLITE3_C_FLAGS} -DSQLITE_DISABLE_INTRINSIC")
endif(DUNE_OS_DARWIN)

if(CMAKE_COMPILER_IS_GNUCXX)
  if(CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 8.0)
    set(SQLITE3_C_FLAGS "${SQLITE3_C_FLAGS} -Wno-cast-function-type")
  else()
    set(SQLITE3_C_FLAGS "${SQLITE3_C_FLAGS} -Wno-bad-function-cast")
  endif()
elseif(CMAKE_CXX_COMPILER_ID MATCHES ".*Clang")
  set(SQLITE3_C_FLAGS "${SQLITE3_C_FLAGS} -Wno-cast-function-type")
endif()

check_cxx_compiler_flag(-Wimplicit-fallthrough=0 _has_wimplicit_fallthrough_0)
if(_has_wimplicit_fallthrough_0)
  set(_sqlite3_extra_cflags -Wimplicit-fallthrough=0)
endif()

set_source_files_properties(${DUNE_SQLITE3_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_C_FLAGS} ${SQLITE3_C_FLAGS} ${_sqlite3_extra_cflags}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_SQLITE3_FILES})
