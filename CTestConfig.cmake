#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# $Id:: CTestConfig.cmake 12303 2013-01-01 02:14:25Z jbraga               $:#
#############################################################################

set(CTEST_PROJECT_NAME "DUNE")
set(CTEST_NIGHTLY_START_TIME "01:00:00 GMT")
set(CTEST_DROP_METHOD "http")
set(CTEST_DROP_SITE "whale.fe.up.pt")
set(CTEST_DROP_LOCATION "/cdash/submit.php?project=DUNE")
set(CTEST_DROP_SITE_CDASH TRUE)
set(CTEST_CUSTOM_MAXIMUM_NUMBER_OF_WARNINGS "500")
