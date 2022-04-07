file(GLOB DUNE_ZLIB_FILES
  vendor/libraries/zlib/*.c)

if(DUNE_CXX_GNU AND DUNE_OS_WINDOWS)
  set(ZLIB_CFLAGS "-DNO_VIZ")
else(DUNE_CXX_GNU AND DUNE_OS_WINDOWS)
  set(ZLIB_CFLAGS "")
endif(DUNE_CXX_GNU AND DUNE_OS_WINDOWS)

check_cxx_compiler_flag(-Wimplicit-fallthrough=0 _has_wimplicit_fallthrough_0)
if(_has_wimplicit_fallthrough_0)
  set(_zlib_extra_cflags -Wimplicit-fallthrough=0)
endif()

set_source_files_properties(${DUNE_ZLIB_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_C_FLAGS} ${DUNE_C_FLAGS_STRICT} ${ZLIB_CFLAGS} ${_zlib_extra_cflags}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_ZLIB_FILES})
