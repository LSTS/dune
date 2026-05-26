if(NOT DUNE_SYS_HAS_JPEG)
  file(GLOB DUNE_JPEG_FILES
    vendor/libraries/jpeg/*.c)

  check_cxx_compiler_flag(-Wimplicit-fallthrough=0 _has_wimplicit_fallthrough_0)
  if(_has_wimplicit_fallthrough_0)
    set(_jpeg_extra_cflags "${_jpeg_extra_cflags} -Wimplicit-fallthrough=0")
  endif()

  check_cxx_compiler_flag(-Wno-shift-negative-value _has_wno_shift_negative_value)
  if(_has_wno_shift_negative_value)
    set(_jpeg_extra_cflags "${_jpeg_extra_cflags} -Wno-shift-negative-value")
  endif()

  set_source_files_properties(${DUNE_JPEG_FILES}
    PROPERTIES COMPILE_FLAGS "${DUNE_C_FLAGS} ${_jpeg_extra_cflags}")

  list(APPEND DUNE_VENDOR_FILES ${DUNE_JPEG_FILES})

  set(DUNE_USING_JPEG 1 CACHE INTERNAL "JPEG library")
endif(NOT DUNE_SYS_HAS_JPEG)
