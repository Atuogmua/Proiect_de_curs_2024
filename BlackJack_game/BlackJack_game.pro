QT += core gui

greaterThan(QT_MAJOR_VERSION, 4) : QT += widgets

TARGET = BlackJack_game
TEMPLATE = app


RESOURCES += \
    image

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui
