#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: José Pinto                                                        #
#############################################################################
# $Id:: SpiderMonkey.cmake 12303 2013-01-01 02:14:25Z jbraga              $:#
#############################################################################

if(JS)
  dune_test_lib(mozjs185 JS_EncodeString)
  dune_test_header(js/jsapi.h)

  if(DUNE_SYS_HAS_LIB_MOZJS185 AND DUNE_SYS_HAS_JS_JSAPI_H)
    set(DUNE_USING_SPIDERMONKEY 1 CACHE INTERNAL "SpiderMonkey")
  else(DUNE_SYS_HAS_LIB_MOZJS185 AND DUNE_SYS_HAS_JS_JSAPI_H)
    set(DUNE_USING_SPIDERMONKEY 0 CACHE INTERNAL "SpiderMonkey")
  endif(DUNE_SYS_HAS_LIB_MOZJS185 AND DUNE_SYS_HAS_JS_JSAPI_H)
endif(JS)
