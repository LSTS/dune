#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# $Id:: Programs.cmake 12303 2013-01-01 02:14:25Z jbraga                  $:#
#############################################################################

# Test system programs. The following variables are set to the program
# path (if any): DUNE_PROGRAM_JAVA, DUNE_PROGRAM_DOXYGEN
macro(dune_probe_programs)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***          Probing Programs          ***")
  message(STATUS "******************************************")

  # Python
  message(STATUS "Looking for Python interpreter")
  find_program(PYTHON_EXE NAMES python)
  if(PYTHON_EXE)
    set(DUNE_PROGRAM_PYTHON ${PYTHON_EXE})
    message(STATUS "IMC code generation enabled")
  else(PYTHON_EXE)
    message(STATUS "IMC code generation disabled")
  endif(PYTHON_EXE)

  # Doxygen
  message(STATUS "Looking for Doxygen")
  include(FindDoxygen)

  if(DOXYGEN)
    set(DUNE_PROGRAM_DOXYGEN ${DOXYGEN})
    message(STATUS "Source documentation enabled")
  endif(DOXYGEN)

  # Info-ZIP
  message(STATUS "Looking for Info-ZIP")
  FIND_PROGRAM(ZIP_EXE NAMES zip)
  if(ZIP_EXE)
    set(DUNE_PROGRAM_ZIP ${ZIP_EXE})
    message(STATUS "Documentation packaging enabled")
  endif(ZIP_EXE)

  # Gettext.
  FIND_PROGRAM(XGETTEXT_EXE NAMES xgettext)
  if(XGETTEXT_EXE)
    set(DUNE_PROGRAM_XGETTEXT ${XGETTEXT_EXE})
    message(STATUS "Gettext string extraction enabled")
  else(XGETTEXT_EXE)
    message(STATUS "Gettext string extraction disabled")
  endif(XGETTEXT_EXE)

  FIND_PROGRAM(MSGMERGE_EXE NAMES msgmerge)
  if(MSGMERGE_EXE)
    set(DUNE_PROGRAM_MSGMERGE ${MSGMERGE_EXE})
    message(STATUS "Gettext catalog merging enabled")
  else(MSGMERGE_EXE)
    message(STATUS "Gettext catalog merging disabled")
  endif(MSGMERGE_EXE)

  FIND_PROGRAM(MSGFMT_EXE NAMES msgfmt)
  if(MSGFMT_EXE)
    set(DUNE_PROGRAM_MSGFMT ${MSGFMT_EXE})
    message(STATUS "Gettext catalog compilation enabled")
  else(MSGFMT_EXE)
    message(STATUS "Gettext catalog compilation disabled")
  endif(MSGFMT_EXE)
endmacro(dune_probe_programs)
