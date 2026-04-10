#////////////////////////////////////////////////////////////////////////////
#//
#//  This file is part of RTIMULib
#//
#//  Copyright (c) 2014, richards-tech
#//
#//  Permission is hereby granted, free of charge, to any person obtaining a copy of
#//  this software and associated documentation files (the "Software"), to deal in
#//  the Software without restriction, including without limitation the rights to use,
#//  copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
#//  Software, and to permit persons to whom the Software is furnished to do so,
#//  subject to the following conditions:
#//
#//  The above copyright notice and this permission notice shall be included in all
#//  copies or substantial portions of the Software.
#//
#//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
#//  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
#//  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
#//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
#//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
#//  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#// The cmake support was based on work by Moritz Fischer at ettus.com.
#// Original copyright notice:
#
# Copyright 2014 Ettus Research LLC
#

SET(DEMO_SRCS
    AccelCalDlg.cpp
    RTIMULibDemoGL.cpp
    IMUThread.cpp
    MagCalDlg.cpp
    SelectIMUDlg.cpp
    SelectFusionDlg.cpp
    main.cpp)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

SET(CMAKE_AUTOMOC ON)

IF(WIN32)
    SET(EXTRA_LIBS opengl32)
ENDIF(WIN32)
IF (UNIX AND (NOT APPLE))
    SET(EXTRA_LIBS GL)
ENDIF(UNIX AND (NOT APPLE))

IF(DEFINED QT5)
    FIND_PACKAGE(Qt5Widgets REQUIRED)
    FIND_PACKAGE(Qt5Core REQUIRED)
    FIND_PACKAGE(Qt5OpenGL REQUIRED)
    FIND_PACKAGE(Qt5Gui REQUIRED)
    qt5_wrap_ui(UI_HEADERS RTIMULibDemoGL.ui)
    ADD_EXECUTABLE(RTIMULibDemoGL ${DEMO_SRCS} ${UI_HEADERS} ${GL_HEADERS})
    TARGET_LINK_LIBRARIES(RTIMULibDemoGL RTIMULib RTIMULibGL  ${EXTRA_LIBS})
    qt5_use_modules(RTIMULibDemoGL Widgets Gui)
    INSTALL(TARGETS RTIMULibDemoGL DESTINATION bin)
ELSE(DEFINED QT5)
    FIND_PACKAGE(Qt4)
    IF(QT4_FOUND)
        QT4_WRAP_UI(UI_HEADERS RTIMULibDemoGL.ui)
        SET(QT_USE_QTOPENGL TRUE)
        INCLUDE(${QT_USE_FILE})
        ADD_DEFINITIONS(${QT_DEFINITIONS})
        ADD_EXECUTABLE(RTIMULibDemoGL ${DEMO_SRCS} ${UI_HEADERS} ${GL_HEADERS})
        TARGET_LINK_LIBRARIES(RTIMULibDemoGL RTIMULib RTIMULibGL ${Qt5Gui_OPENGL_LIBRARIES} ${QT_LIBRARIES} ${EXTRA_LIBS})
        INSTALL(TARGETS RTIMULibDemoGL DESTINATION bin)
    ELSE(QT4_FOUND)
        MESSAGE(STATUS "Qt4 not found")
    ENDIF(QT4_FOUND)
ENDIF(DEFINED QT5)

