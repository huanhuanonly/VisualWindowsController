QT       += core gui winextras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

TARGET = VisualWindowsController

SOURCES += \
    AboutDialog/aboutdialog.cpp \
    BinsetEdit/BinsetEdit.cpp \
    ProcessController/ProcessController.cpp \
    RadixLineEdit/RadixLineEdit.cpp \
    SingleColorWidget/SingleColorWidget.cpp \
    WindowController/CursorController.cpp \
    WindowController/WindowController.cpp \
    main.cpp \
    mainwindow.cpp \
    tabCursor/CursorColorWidget.cpp \
    tabProcess/tabProcess.cpp \
    tabSelect/Basic.cpp \
    tabSelect/Dynamic.cpp \
    tabSelect/Static.cpp \
    tabWindow/ChangeWindow.cpp

HEADERS += \
    AboutDialog/aboutdialog.h \
    BinsetEdit/BinsetEdit.h \
    ProcessController/ProcessController.h \
    RadixLineEdit/RadixLineEdit.h \
    SingleColorWidget/SingleColorWidget.h \
    WindowController/CursorController.h \
    WindowController/WindowController.h \
    mainwindow.h

LIBS += \
    User32.lib \
    Gdi32.lib

FORMS += \
    AboutDialog/aboutdialog.ui \
    mainwindow.ui

TRANSLATIONS += \
    VisualWindowsController_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc
 

VERSION = 1.0.0
 
RC_ICONS = Resource/VWC.ico
 
QMAKE_TARGET_COMPANY = "LoveRain"
 
QMAKE_TARGET_PRODUCT = "VisualWindowsController"
 
QMAKE_TARGET_DESCRIPTION = "LoveRain Visual Windows Controller"
 
QMAKE_TARGET_COPYRIGHT = "Copyright (c) 2023-2023 LoveRain Yanghuanhuan 3347484963@qq.com.  All rights reserved."
 
RC_LANG = 0x0004
