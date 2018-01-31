############################################################################
# Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             #
############################################################################
# This file is subject to the terms and conditions defined in file         #
# 'LICENCE.md', which is part of this source code package.                 #
############################################################################
# Tests if libcurl is present and can be used.                             #
############################################################################

dune_test_lib(curl curl_global_init)
dune_test_header("curl/curl.h")

if(DUNE_SYS_HAS_LIB_CURL AND DUNE_SYS_HAS_CURL_CURL_H)
  set(DUNE_USING_CURL 1 CACHE INTERNAL "CURL library")
else()
  set(DUNE_USING_CURL 0 CACHE INTERNAL "CURL library")
endif()
