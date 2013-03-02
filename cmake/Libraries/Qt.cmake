############################################################################
# Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      #
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
# https://www.lsts.pt/dune/licence.                                        #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

if(GUI)
  find_package(Qt4)
  set(QT_USE_QTXML 1)
  set(QT_USE_QTUITOOLS 1)
  set(QT_USE_QTNETWORK 1)
  include(${QT_USE_FILE})

  if(QT_LIBRARIES)
    if(DUNE_OS_WINDOWS AND DUNE_CXX_GNU)
      get_filename_component(DUNE_QT_PATH ${QT_QTGUI_LIBRARY} PATH)
      set(DUNE_QT_PATH ${DUNE_QT_PATH}/../bin)
      install(FILES ${DUNE_QT_PATH}/mingwm10.dll
        ${DUNE_QT_PATH}/QtCore4.dll
        ${DUNE_QT_PATH}/QtGui4.dll
        DESTINATION bin)

      set(QT_LIBRARIES ${QT_LIBRARIES} -mwindows)
    endif(DUNE_OS_WINDOWS AND DUNE_CXX_GNU)

    macro(dune_qt4_wrap_ui outfiles)
      set(${outfiles})
      QT4_EXTRACT_OPTIONS(ui_files ui_options ${ARGN})

      foreach(it ${ui_files})
        DUNE_GET_GENERATED_PATH(outpath ${it})
        get_filename_component(outfile ${it} NAME_WE)
        get_filename_component(infile ${it} ABSOLUTE)

        set(outfile ${outpath}/ui_${outfile}.hpp)
        add_custom_command(OUTPUT ${outfile}
          COMMAND ${QT_UIC_EXECUTABLE}
          ARGS ${ui_options} -o ${outfile} ${infile}
          MAIN_DEPENDENCY ${infile})
        set(${outfiles} ${${outfiles}} ${outfile})
      endforeach(it)
    endmacro(dune_qt4_wrap_ui)

    macro(dune_qt4_wrap_cpp outfiles)
      set(${outfiles})
      QT4_EXTRACT_OPTIONS(moc_files moc_options ${ARGN})

      foreach(it ${moc_files})
        DUNE_GET_GENERATED_PATH(outpath ${it})
        get_filename_component(outfile ${it} NAME_WE)
        set(outfile ${outpath}/moc_${outfile}.cpp)
        get_filename_component(it ${it} ABSOLUTE)

        QT4_CREATE_MOC_COMMAND(${it}  ${outfile} "" "${moc_options}")
        set(${outfiles} ${${outfiles}} ${outfile})
      endforeach(it)
    endmacro(dune_qt4_wrap_cpp)
  endif(QT_LIBRARIES)
endif(GUI)
