/*
 * Sim, aqui é a classe que tem o QPainter que vai desenhar as coisas
*/

#include "MyFrame.h"

MyFrame::MyFrame(QWidget *parent) : QFrame(parent), displayFile(nullptr) {
    setStyleSheet("background-color: white;");
}

void MyFrame::setDisplayFile(DisplayFile* df) {
    displayFile = df;
    update();
}

void MyFrame::adicionarObjeto(const Objeto& obj) {
    if (displayFile) {
        displayFile->adicionarObjeto(obj);
        update();
    }
}

void MyFrame::paintEvent(QPaintEvent *event) {
    QFrame::paintEvent(event);

    if (!displayFile) return;

    QPainter painter(this);
    painter.setPen(Qt::black);
    painter.setRenderHint(QPainter::Antialiasing);

    for (const Objeto& obj : displayFile->getObjetos()) {
        if (obj.getTipo() == Linha) {
            //if (obj.getPontos().size() >= 2) {
                painter.drawLine(obj.getPontos()[0], obj.getPontos()[1]);
            //}
        }
        else if (obj.getTipo() == Poligono) {
            //if (obj.getPontos().size() >= 3) {
                painter.drawPolygon(obj.getPontos());
            //}
        }
        else if (obj.getTipo() == Circulo) {
            //if (obj.getPontos().size() >= 2) {
                QPoint centro = obj.getPontos()[0];
                int raio = obj.getPontos()[1].x();
                painter.drawEllipse(centro, raio, raio);
            //}
        }
    }
}
