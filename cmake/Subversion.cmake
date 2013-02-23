#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# Get SVN revision of source tree.                                          #
#############################################################################

execute_process(COMMAND svnversion -c
  WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}"
  OUTPUT_VARIABLE DUNE_SVN_REV_STR
  ERROR_QUIET
  OUTPUT_STRIP_TRAILING_WHITESPACE)

string(REGEX REPLACE "^[^:]+:" "" DUNE_SVN_REV_STR "${DUNE_SVN_REV_STR}")

string(COMPARE EQUAL "${DUNE_SVN_REV_STR}" "" empty_string)
if(empty_string)
  set(DUNE_SVN_REV_STR "unknown")
endif(empty_string)
