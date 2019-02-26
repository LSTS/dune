file(GLOB DUNE_EXIFTOOL_FILES
    vendor/libraries/exiftool/*.cpp)

set_source_files_properties(${DUNE_EXIFTOOL_FILES}
    PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_EXIFTOOL_FILES})
