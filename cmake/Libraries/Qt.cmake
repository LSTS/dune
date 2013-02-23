#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################

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
  endif(QT_LIBRARIES)

  macro(dune_qt4_wrap_ui outfiles)
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

  macro(dune_qt4_wrap_cpp outfiles )
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
endif(GUI)
