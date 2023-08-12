QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    avopenglframeuploader.cpp \
    avopenglwidget.cpp \
    controllermanager.cpp \
    discoverymanager.cpp \
    dynamicgridwidget.cpp \
    host.cpp \
    loginpindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    manualhostdialog.cpp \
    moc_mainwindow.cpp \
    registdialog.cpp \
    servericonwidget.cpp \
    serveritemwidget.cpp \
    sessionlog.cpp \
    settings.cpp \
    settingsdialog.cpp \
    settingskeycapturedialog.cpp \
    streamsession.cpp \
    streamwindow.cpp

HEADERS += \
    avopenglframeuploader.h \
    avopenglwidget.h \
    controllermanager.h \
    discoverymanager.h \
    dynamicgridwidget.h \
    exception.h \
    host.h \
    loginpindialog.h \
    logsniffer.h \
    mainwindow.h \
    manualhostdialog.h \
    registdialog.h \
    servericonwidget.h \
    serveritemwidget.h \
    sessionlog.h \
    settings.h \
    settingsdialog.h \
    settingskeycapturedialog.h \
    streamsession.h \
    streamwindow.h \
    transformmode.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
