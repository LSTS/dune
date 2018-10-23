# This is required to build using Visual Studio,
# skip this library on other platforms.
if (NOT MSVC)
    return()
endif()

include_directories(vendor/libraries/regex)
list(APPEND DUNE_VENDOR_FILES vendor/libraries/regex/regex.c)
