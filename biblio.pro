#-------------------------------------------------
#
# Project created by QtCreator 2017-05-22T14:24:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Biblio
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

TRANSLATIONS += biblio_rus.ts

SOURCES += \
        application.cpp         \
        edit.cpp                \
        helpers1.cpp            \
        itemeditdialog.cpp      \
        itemeditframe.cpp       \
        main.cpp                \
        mainwindow.cpp          \
        table.cpp

HEADERS  += \
        application.h           \
        edit.h                  \
        data.h                  \
        helpers.h               \
        itemeditframe.h         \
        itemeditdialog.h        \
        items.h                 \
        mainwindow.h            \
        table.h

RESOURCES += \
        biblio.qrc






