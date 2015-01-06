############################################################################
# Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Universidade do Porto. For licensing   #
# terms, conditions, and further information contact lsts@fe.up.pt.        #
#                                                                          #
# European Union Public Licence - EUPL v.1.1 Usage                         #
# Alternatively, this file may be used under the terms of the EUPL,        #
# Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

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
