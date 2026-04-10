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

IF(APPLE)
    SET(SERIAL_SRCS
        src/qextserialport.cpp
        src/qextserialenumerator.cpp
        src/qextserialport_unix.cpp
        src/qextserialenumerator_osx.cpp)
    FIND_LIBRARY(IOKIT_LIBRARY IOKit)
    FIND_LIBRARY(COREFOUNDATION_LIBRARY CoreFoundation )
    MARK_AS_ADVANCED(IOKIT_LIBRARY COREFOUNDATION_LIBRARY)
    SET(EXTRA_LIBS ${IOKIT_LIBRARY} ${COREFOUNDATION_LIBRARY})    
    MESSAGE(STATUS "OS is Apple")
ELSEIF(UNIX)
    SET(SERIAL_SRCS
        src/qextserialport.cpp
        src/qextserialenumerator.cpp
        src/qextserialport_unix.cpp
        src/qextserialenumerator_unix.cpp)
    SET(EXTRA_LIBS )
    MESSAGE(STATUS "OS is Linux")
ENDIF(APPLE)

IF(WIN32)
    SET(SERIAL_SRCS
        src/qextserialport.cpp
        src/qextserialenumerator.cpp
        src/qextserialport_win.cpp
        src/qextserialenumerator_win.cpp)
    SET(EXTRA_LIBS setupapi advapi32 user32)
    MESSAGE(STATUS "OS is Windows")
ENDIF(WIN32)

SET(CMAKE_AUTOMOC ON)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/src)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

IF(DEFINED QT5)
    FIND_PACKAGE(Qt5Core REQUIRED)
    IF(WIN32)
        ADD_LIBRARY(RTSerialPort STATIC ${SERIAL_SRCS})
    ELSE(WIN32)
        ADD_LIBRARY(RTSerialPort SHARED ${SERIAL_SRCS})
    ENDIF(WIN32)
    qt5_use_modules(RTSerialPort Core)
    TARGET_LINK_LIBRARIES(RTSerialPort ${EXTRA_LIBS})
ELSE(DEFINED QT5)
    FIND_PACKAGE(Qt4 REQUIRED)
    INCLUDE(${QT_USE_FILE})
    ADD_DEFINITIONS(${QT_DEFINITIONS})
    IF(WIN32)
        ADD_LIBRARY(RTSerialPort STATIC ${SERIAL_SRCS})
    ELSE(WIN32)
        ADD_LIBRARY(RTSerialPort SHARED ${SERIAL_SRCS})
    ENDIF(WIN32)
    TARGET_LINK_LIBRARIES(RTSerialPort ${EXTRA_LIBS} ${QT_LIBRARIES})
ENDIF(DEFINED QT5)
INSTALL(TARGETS RTSerialPort DESTINATION lib)

