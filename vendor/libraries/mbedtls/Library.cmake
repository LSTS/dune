# TODO: MAKE GUARD
aux_source_directory(vendor/libraries/mbedtls/ DUNE_MBEDTLS_FILES)
aux_source_directory(vendor/libraries/mbedtls/library/ DUNE_MBEDTLS_FILES)
include_directories(vendor/libraries/mbedtls/include
                    vendor/libraries/mbedtls/tests/include
                    vendor/libraries/mbedtls/library)

set_source_files_properties(${DUNE_MBEDTLS_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_MBEDTLS_FILES})
# TODO: MAKE GUARD
