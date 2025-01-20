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


greaterThan(QT_MAJOR_VERSION, 4): cache()

TEMPLATE = app

TARGET = RTHostIMU

DESTDIR = Output

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += debug_and_release

target.path = /usr/local/bin

INSTALLS += target

DEFINES += QT_NETWORK_LIB

INCLUDEPATH += GeneratedFiles

MOC_DIR += GeneratedFiles/moc

OBJECTS_DIR += objects

UI_DIR += GeneratedFiles

RCC_DIR += GeneratedFiles

include(RTHostIMU.pri)
include(../RTHostIMUCommon/RTHostIMUCommon.pri)
include(../../RTIMULib/RTIMULib.pri)
include(../RTSerialPort/src/qextserialport.pri)
include(../RTArduLinkHost/RTArduLinkHost.pri)

