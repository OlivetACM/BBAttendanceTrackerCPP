QT       += core gui network

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

INCLUDEPATH += include/ src/
SOURCES += \
    src/addressdialog.cpp \
#    src/dumpToFile.cpp \
    src/latedialog.cpp \
    src/logindialog.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/mytablewidget.cpp

HEADERS += \
    include/addressdialog.h \
#    include/dumpToFile.h \
    include/latedialog.h \
    include/logindialog.h \
    include/mainwindow.h \
    include/mytablewidget.h \
    include/ui_addressdialog.h \
    include/ui_latedialog.h \
    include/ui_logindialog.h\
    include/ui_mainwindow.h

#FORMS += \
#    addressdialog.ui \
#    latedialog.ui \
#    logindialog.ui \
#    mainwindow.ui

TRANSLATIONS += \
    untitled_en_US.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

