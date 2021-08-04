# TODO: MAKE GUARD
# aux_source_directory(vendor/libraries/mbedtls/ DUNE_MBEDTLS_FILES)
aux_source_directory(vendor/libraries/mbedtls/library/ DUNE_MBEDTLS_FILES)
include_directories(vendor/libraries/mbedtls/include
                    vendor/libraries/mbedtls/tests/include
                    vendor/libraries/mbedtls/library
                    ../)

# debug option needs to be set specifically for mbedtls library, otherwhise you can not step into mbedtls functions, only dune
set(CMAKE_BUILD_TYPE "Debug")
add_definitions(-DDEBUG)

set_source_files_properties(${DUNE_MBEDTLS_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_MBEDTLS_FILES})
# TODO: MAKE GUARD
