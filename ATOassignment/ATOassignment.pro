#-------------------------------------------------
#
# Project created by QtCreator 2016-11-10T09:55:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ATOassignment
TEMPLATE = app


SOURCES += main.cpp\
        atoassignmentmainwindow.cpp \
    myobfilecontroller.cpp \
    myoboutputdialog.cpp \
    myobtoatomaindialog.cpp \
    myobtoatocontroller.cpp

HEADERS  += atoassignmentmainwindow.h \
    myobfilecontroller.h \
    myoboutputdialog.h \
    myobtoatomaindialog.h \
    myobtoatocontroller.h

FORMS    += atoassignmentmainwindow.ui \
    myoboutputdialog.ui \
    myobtoatomaindialog.ui
