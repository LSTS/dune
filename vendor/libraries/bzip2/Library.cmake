file(GLOB DUNE_BZIP2_FILES
  vendor/libraries/bzip2/*.c)

check_cxx_compiler_flag(-Wimplicit-fallthrough=0 _has_wimplicit_fallthrough_0)
if(_has_wimplicit_fallthrough_0)
  set(_bzip2_extra_cflags -Wimplicit-fallthrough=0)
endif()

set_source_files_properties(${DUNE_BZIP2_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_C_FLAGS} ${DUNE_C_FLAGS_STRICT} ${_bzip2_extra_cflags}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_BZIP2_FILES})
