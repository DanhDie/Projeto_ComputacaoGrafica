QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Objetos/objwindow.cpp \
    displayfile.cpp \
    main.cpp \
    mainwindow.cpp \
    matriz.cpp \
    Botoes/mycombobox.cpp \
    Botoes/mydoublespinbox.cpp \
    myframe.cpp \
    Botoes/mypushbutton.cpp \
    Objetos/objcasa.cpp \
    Objetos/objcirculo.cpp \
    Objetos/objeto.cpp \
    Objetos/objlinha.cpp \
    Objetos/objnathghostkiller.cpp \
    Objetos/objpoligono.cpp \
    Objetos/objtriangulo.cpp \
    Objetos/ponto.cpp \
    Objetos/sol.cpp \
    viewport.cpp

HEADERS += \
    Objetos/objwindow.h \
    displayfile.h \
    mainwindow.h \
    matriz.h \
    Botoes/mycombobox.h \
    Botoes/mydoublespinbox.h \
    myframe.h \
    Botoes/mypushbutton.h \
    Objetos/objcasa.h \
    Objetos/objcirculo.h \
    Objetos/objeto.h \
    Objetos/objlinha.h \
    Objetos/objnathghostkiller.h \
    Objetos/objpoligono.h \
    Objetos/objtriangulo.h \
    Objetos/ponto.h \
    Objetos/sol.h \
    viewport.h

FORMS += \
    mainwindow.ui

INCLUDEPATH += $$PWD/Botoes
INCLUDEPATH += $$PWD/Objetos

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Icone.qrc \
    icon.qrc
