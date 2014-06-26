file(GLOB DUNE_LZ4_FILES
  vendor/libraries/lz4/*.c)

set_source_files_properties(${DUNE_LZ4_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_C_FLAGS}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_LZ4_FILES})
