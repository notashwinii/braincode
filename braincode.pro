QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    level1.cpp \
    level10.cpp \
    level11.cpp \
    level12.cpp \
    level13.cpp \
    level14.cpp \
    level15.cpp \
    level16.cpp \
    level17.cpp \
    level18.cpp \
    level19.cpp \
    level2.cpp \
    level20.cpp \
    level21.cpp \
    level22.cpp \
    level23.cpp \
    level24.cpp \
    level25.cpp \
    level26.cpp \
    level27.cpp \
    level28.cpp \
    level29.cpp \
    level3.cpp \
    level30.cpp \
    level31.cpp \
    level32.cpp \
    level33.cpp \
    level34.cpp \
    level35.cpp \
    level36.cpp \
    level37.cpp \
    level38.cpp \
    level39.cpp \
    level4.cpp \
    level40.cpp \
    level41.cpp \
    level42.cpp \
    level43.cpp \
    level44.cpp \
    level45.cpp \
    level46.cpp \
    level47.cpp \
    level48.cpp \
    level49.cpp \
    level5.cpp \
    level50.cpp \
    level51.cpp \
    level52.cpp \
    level53.cpp \
    level54.cpp \
    level55.cpp \
    level56.cpp \
    level57.cpp \
    level58.cpp \
    level59.cpp \
    level6.cpp \
    level60.cpp \
    level7.cpp \
    level8.cpp \
    level9.cpp \
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
    level1.h \
    level10.h \
    level11.h \
    level12.h \
    level13.h \
    level14.h \
    level15.h \
    level16.h \
    level17.h \
    level18.h \
    level19.h \
    level2.h \
    level20.h \
    level21.h \
    level22.h \
    level23.h \
    level24.h \
    level25.h \
    level26.h \
    level27.h \
    level28.h \
    level29.h \
    level3.h \
    level30.h \
    level31.h \
    level32.h \
    level33.h \
    level34.h \
    level35.h \
    level36.h \
    level37.h \
    level38.h \
    level39.h \
    level4.h \
    level40.h \
    level41.h \
    level42.h \
    level43.h \
    level44.h \
    level45.h \
    level46.h \
    level47.h \
    level48.h \
    level49.h \
    level5.h \
    level50.h \
    level51.h \
    level52.h \
    level53.h \
    level54.h \
    level55.h \
    level56.h \
    level57.h \
    level58.h \
    level59.h \
    level6.h \
    level60.h \
    level7.h \
    level8.h \
    level9.h \
    levelpg1.h \
    levelpg2.h \
    levelpg3.h \
    levelpg4.h \
    levelpg5.h \
    login.h \
    mainwindow.h


FORMS += \
    level1.ui \
    level10.ui \
    level11.ui \
    level12.ui \
    level13.ui \
    level14.ui \
    level15.ui \
    level16.ui \
    level17.ui \
    level18.ui \
    level19.ui \
    level2.ui \
    level20.ui \
    level21.ui \
    level22.ui \
    level23.ui \
    level24.ui \
    level25.ui \
    level26.ui \
    level27.ui \
    level28.ui \
    level29.ui \
    level3.ui \
    level30.ui \
    level31.ui \
    level32.ui \
    level33.ui \
    level34.ui \
    level35.ui \
    level36.ui \
    level37.ui \
    level38.ui \
    level39.ui \
    level4.ui \
    level40.ui \
    level41.ui \
    level42.ui \
    level43.ui \
    level44.ui \
    level45.ui \
    level46.ui \
    level47.ui \
    level48.ui \
    level49.ui \
    level5.ui \
    level50.ui \
    level51.ui \
    level52.ui \
    level53.ui \
    level54.ui \
    level55.ui \
    level56.ui \
    level57.ui \
    level58.ui \
    level59.ui \
    level6.ui \
    level60.ui \
    level7.ui \
    level8.ui \
    level9.ui \
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
