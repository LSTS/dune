CHECK_LIBRARY_EXISTS(jpeg jpeg_set_defaults "" HAVE_LIB_JPEG)
dune_test_header_deps(jpeglib.h "sys/types.h;stdio.h")

check_cxx_source_compiles("
#include <stdio.h>
#include <jpeglib.h>
#if JPEG_LIB_VERSION < 80
#  error JPEG too old
#endif
int main(void) {return 0;}"
HAVE_LIB_JPEG_80)

if(HAVE_LIB_JPEG AND HAVE_LIB_JPEG_80 AND DUNE_SYS_HAS_JPEGLIB_H)
  dune_add_lib(jpeg)
  set(DUNE_SYS_HAS_JPEG 1 CACHE INTERNAL "JPEG library")
  set(DUNE_USING_JPEG 1 CACHE INTERNAL "JPEG library")
else(HAVE_LIB_JPEG AND HAVE_LIB_JPEG_80 AND DUNE_SYS_HAS_JPEGLIB_H)
  set(DUNE_SYS_HAS_JPEG 0 CACHE INTERNAL "JPEG library")
  set(DUNE_USING_JPEG 0 CACHE INTERNAL "JPEG library")
endif(HAVE_LIB_JPEG AND HAVE_LIB_JPEG_80 AND DUNE_SYS_HAS_JPEGLIB_H)
