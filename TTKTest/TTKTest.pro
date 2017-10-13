# =================================================
# * This file is part of the TTK OCR project
# * Copyright (C) 2016 - 2017 Greedysky Studio
#
# * This program is free software; you can redistribute it and/or modify
# * it under the terms of the GNU General Public License as published by
# * the Free Software Foundation; either version 3 of the License, or
# * (at your option) any later version.
#
# * This program is distributed in the hope that it will be useful,
# * but WITHOUT ANY WARRANTY; without even the implied warranty of
# * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# * GNU General Public License for more details.
#
# * You should have received a copy of the GNU General Public License along
# * with this program; If not, see <http://www.gnu.org/licenses/>.
# =================================================

include(../TTKVersion.pri)

QT       += core gui testlib
equals(QT_MAJOR_VERSION, 5){
QT       += widgets
}

win32:msvc{
    CONFIG +=c++11
}else{
    QMAKE_CXXFLAGS += -std=c++11
}

TARGET = TTKTest

TEMPLATE = app
DEFINES += OCR_LIBRARY

INCLUDEPATH += $$PWD/../ \
               $$PWD/../TTKModule/TTKCore/ocrCoreKits

HEADERS  += \
    ocrautotest.h \
    tst_codelines.h

SOURCES  += \
    ocrapplicationmain.cpp \
    tst_codelines.cpp

