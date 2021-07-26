aux_source_directory(vendor/libraries/eigen/ DUNE_EIGEN_FILES)

set_source_files_properties(${DUNE_EIGEN_FILES}
    PROPERTIES COMPILE_FLAGS "${DUNE_C_FLAGS} ${DUNE_C_FLAGS_STRICT}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_EIGEN_FILES})
