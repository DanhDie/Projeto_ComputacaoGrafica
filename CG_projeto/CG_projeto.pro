QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    displayfile.cpp \
    main.cpp \
    mainwindow.cpp \
    matriz.cpp \
    myframe.cpp \
    objcasa.cpp \
    objcirculo.cpp \
    objeto.cpp \
    objlinha.cpp \
    objnathghostkiller.cpp \
    objpoligono.cpp \
    objtriangulo.cpp \
    ponto.cpp \
    sol.cpp

HEADERS += \
    displayfile.h \
    mainwindow.h \
    matriz.h \
    myframe.h \
    objcasa.h \
    objcirculo.h \
    objeto.h \
    objlinha.h \
    objnathghostkiller.h \
    objpoligono.h \
    objtriangulo.h \
    ponto.h \
    sol.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
