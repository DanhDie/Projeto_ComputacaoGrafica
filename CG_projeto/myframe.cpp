/*
 * Sim, aqui é a classe que tem o QPainter que vai desenhar as coisas
*/

#include "MyFrame.h"
#include "Objetos/ponto.h"
#include "mainwindow.h"
#include "QMouseEvent"
#include "viewport.h"
#include "Objetos/objwindow.h"

MyFrame::MyFrame(QWidget *parent) : QFrame(parent), displayFile(nullptr) {
    setStyleSheet("background-color: white;");
}

void MyFrame::setDisplayFile(DisplayFile* df) {
    displayFile = df;
    update();
}

void MyFrame::adicionarObjeto(Objeto* obj) {
    if (displayFile) {
        displayFile->adicionarObjeto(obj);
        update();
    }
}

void MyFrame::paintEvent(QPaintEvent *event) {
    QFrame::paintEvent(event);

    QPainter painter(this);
    int margin = 20;
    QRect viewportRect(margin, margin, width() - 2*margin, height() - 2*margin);
    QPen pen(QColor("#f3a2be"));
    pen.setWidth(2);
    painter.setPen(pen);
    painter.drawRect(viewportRect);


    if (!displayFile) return;
    // pega a window do display file (assumindo que você adicionou ela com nome "janela")
    ObjWindow* window = dynamic_cast<ObjWindow*>(displayFile->getObjeto("janela"));
    if (!window) return;

    //Setup da caneta
    pen.setWidth(1);
    pen.setColor(QColor("#282b2e")); //preto
    painter.setPen(pen);
    painter.setRenderHint(QPainter::Antialiasing);

    // define viewport (área interna do frame)
    Viewport vp(
        viewportRect.left(),
        viewportRect.top(),
        viewportRect.right(),
        viewportRect.bottom()
        );

    // percorre todos os objetos
    for (Objeto* obj : displayFile->getObjetos()) {
        //Você não vão sentir diferença nenhuma, mas o SANGUE e SUOR que levou para só duas linhas de código serem necessárias
        //para desenhar, é inacredítavel.
        obj->desenhar(&painter,vp,*window);
    }
}

void MyFrame::mousePressEvent(QMouseEvent *event){
    emit BtEsquerdoPress(event->pos());
}
