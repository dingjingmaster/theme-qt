TEMPLATE = app

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4) : QT += widgets

CONFIG += no_keywords c++11

HEADERS += \
    custom-style.h

SOURCES += \
    custom-style.cpp \
    main.cpp

LIBS += \
    -lX11                                                   \
    -lgsettings-qt

OTHER_FILES += \
    $$PWD/LICENSE                                           \
    $$PWD/Doxyfile                                          \
    $$PWD/README.md                                         \
    $$PWD/.gitignore                                        \


