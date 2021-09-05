QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    childmode.cpp \
    diarrhea.cpp \
    dysonia.cpp \
    frequency.cpp \
    help.cpp \
    hypotonia.cpp \
    joints.cpp \
    main.cpp \
    mainwindow.cpp \
    power.cpp \
    powerfour.cpp \
    powerthree.cpp \
    powertwo.cpp \
    program.cpp \
    settings.cpp \
    tutorial.cpp \
    tutorial_2.cpp \
    tutorial_3.cpp

HEADERS += \
    about.h \
    childmode.h \
    diarrhea.h \
    dysonia.h \
    frequency.h \
    help.h \
    hypotonia.h \
    joints.h \
    mainwindow.h \
    power.h \
    powerfour.h \
    powerthree.h \
    powertwo.h \
    program.h \
    settings.h \
    tutorial.h \
    tutorial_2.h \
    tutorial_3.h

FORMS += \
    about.ui \
    childmode.ui \
    diarrhea.ui \
    dysonia.ui \
    frequency.ui \
    help.ui \
    hypotonia.ui \
    joints.ui \
    mainwindow.ui \
    power.ui \
    powerfour.ui \
    powerthree.ui \
    powertwo.ui \
    program.ui \
    settings.ui \
    tutorial.ui \
    tutorial_2.ui \
    tutorial_3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
