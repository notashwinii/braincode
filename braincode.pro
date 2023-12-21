QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    levelpg1.cpp \
    levelpg2.cpp \
    levelpg3.cpp \
    levelpg4.cpp \
    levelpg5.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp
    login.cpp
HEADERS += \
    levelpg1.h \
    levelpg2.h \
    levelpg3.h \
    levelpg4.h \
    levelpg5.h \
    login.h \
    mainwindow.h


FORMS += \
    levelpg1.ui \
    levelpg2.ui \
    levelpg3.ui \
    levelpg4.ui \
    levelpg5.ui \
    login.ui \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
