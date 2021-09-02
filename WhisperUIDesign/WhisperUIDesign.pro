QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

LIBS += User32.LIB

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

RC_ICONS = logo.ico

SOURCES += \
    Connection.cpp \
    DataClass.cpp \
    Echo.cpp \
    SocketClient.cpp \
    changepasswordform.cpp \
    changeusernameform.cpp \
    constants.cpp \
    friendbutton.cpp \
    friendrequestform.cpp \
    loginform.cpp \
    main.cpp \
    chatform.cpp \
    promptform.cpp \
    signinform.cpp

HEADERS += \
    Connection.h \
    DataClass.h \
    Echo.h \
    SocketClient.h \
    changepasswordform.h \
    changeusernameform.h \
    chatform.h \
    constants.h \
    friendbutton.h \
    friendrequestform.h \
    loginform.h \
    promptform.h \
    signinform.h

FORMS += \
    changepasswordform.ui \
    changeusernameform.ui \
    chatform.ui \
    friendrequestform.ui \
    loginform.ui \
    promptform.ui \
    signinform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
