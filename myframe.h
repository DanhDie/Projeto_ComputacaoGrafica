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

    void setModoP(int m) { modoP = m; }
    int getModoP() const { return modoP; }

signals:
    void BtEsquerdoPress(QPointF p);

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

private:
    DisplayFile* displayFile;  // referência ao display file
    int modoP = 1; // 1 = perspectiva (padrão) | 0 = ortogonal
};

#endif // MYFRAME_H
