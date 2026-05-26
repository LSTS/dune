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

SET(HOST_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/RTHostIMU.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

SET(CMAKE_AUTOMOC ON)

IF(DEFINED QT5)
    FIND_PACKAGE(Qt5Widgets)
    FIND_PACKAGE(Qt5Gui)
    qt5_wrap_ui(UI_HEADERS RTHostIMU.ui)
    ADD_EXECUTABLE(RTHostIMU ${HOST_SRCS} ${UI_HEADERS})
    TARGET_LINK_LIBRARIES(RTHostIMU
        RTIMULib
        RTHostIMUCommon
        RTArduLinkHost
        ${Qt5Core_QTMAIN_LIBRARIES})
    qt5_use_modules(RTHostIMU Widgets Gui)
ELSE(DEFINED QT5)
    FIND_PACKAGE(Qt4 REQUIRED)
    INCLUDE(${QT_USE_FILE})
    ADD_DEFINITIONS(${QT_DEFINITIONS})
    QT4_WRAP_UI(UI_HEADERS RTHostIMU.ui)
    ADD_EXECUTABLE(RTHostIMU ${HOST_SRCS} ${UI_HEADERS}) 
    TARGET_LINK_LIBRARIES(RTHostIMU RTIMULib RTHostIMUCommon RTArduLinkHost ${QT_LIBRARIES})
ENDIF(DEFINED QT5)

INSTALL(TARGETS RTHostIMU DESTINATION bin)

