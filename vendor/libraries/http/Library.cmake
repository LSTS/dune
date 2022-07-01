file(GLOB DUNE_HTTP_FILES
  vendor/libraries/http/httplib.h)

set_source_files_properties(${DUNE_HTTP_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_C_FLAGS}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_HTTP_FILES})

set(DUNE_VENDOR_INCS_DIR ${DUNE_VENDOR_INCS_DIR} ${PROJECT_SOURCE_DIR}/vendor/libraries/http)
