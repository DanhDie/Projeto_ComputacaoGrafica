#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include <QPainter>
#include "DisplayFile.h"
#include <Objetos/objwindow.h>
#include <viewport.h>

class MyFrame : public QFrame {
    Q_OBJECT
public:
    explicit MyFrame(QWidget *parent = nullptr);

    void adicionarObjeto(Objeto* obj);
    void setDisplayFile(DisplayFile* df);
    void desenharObjetos(ObjWindow* window, Viewport vp, Objeto *obj, QPainter *painter);

signals:
    void BtEsquerdoPress(QPointF p);

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

private:
    DisplayFile* displayFile;  // referência ao display file
};

#endif // MYFRAME_H
