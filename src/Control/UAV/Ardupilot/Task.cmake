macro(task_files_hook)
  set(MAVLINK_CFLAGS "")

  check_cxx_compiler_flag(-Wno-address-of-packed-member _has_wnoaddress_of_packed_member)
  if(_has_wnoaddress_of_packed_member)
    set(MAVLINK_CFLAGS "${MAVLINK_CFLAGS} -Wno-address-of-packed-member")
  endif()

  check_cxx_compiler_flag(-Wno-ignored-qualifiers _has_wnoignored_qualifiers)
  if(_has_wnoignored_qualifiers)
    set(MAVLINK_CFLAGS "${MAVLINK_CFLAGS} -Wno-ignored-qualifiers")
  endif()

  check_cxx_compiler_flag(-Wno-array-bounds _has_wnoarray_bounds)
  if(_has_wnoarray_bounds)
    set(MAVLINK_CFLAGS "${MAVLINK_CFLAGS} -Wno-array-bounds")
  endif()

  check_cxx_compiler_flag(-Wno-stringop-overread _has_wnostringop_overread)
  if(_has_wnostringop_overread)
    set(MAVLINK_CFLAGS "${MAVLINK_CFLAGS} -Wno-stringop-overread")
  endif()

  set(cxx_flags "${cxx_flags} ${MAVLINK_CFLAGS}")
endmacro(task_files_hook)
