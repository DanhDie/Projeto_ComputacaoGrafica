/*
 * Sim, aqui é a classe que tem o QPainter que vai desenhar as coisas
*/

#include "MyFrame.h"
#include "Objetos/ponto.h"
#include "mainwindow.h"
#include "QMouseEvent"

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

    if (!displayFile) return;

    QPainter painter(this);
    painter.setPen(Qt::black);
    painter.setRenderHint(QPainter::Antialiasing);

    for (const Objeto* obj : displayFile->getObjetos()) {
        if (obj->getTipo() == Linha) {
                painter.drawLine(obj->getPontos()[0].toQPoint(), obj->getPontos()[1].toQPoint());
        }
        else if (obj->getTipo() == Poligono) {
            QVector<QPoint> qpts;
            qpts.reserve(obj->getPontos().size());
            for(const Ponto &p : obj->getPontos()){
                qpts.append(p.toQPoint());
            }
            painter.drawPolygon(qpts);
        }
        else if (obj->getTipo() == Circulo) {
                QPoint centro = obj->getPontos()[0].toQPoint();
                int raio = (int)std::round(obj->getPontos()[1].x());
                painter.drawEllipse(centro, raio, raio);
        }
        else if (obj->getTipo() == Complexo){
            obj->autorretrato(&painter);
        }
    }
}

void MyFrame::mousePressEvent(QMouseEvent *event){
    emit BtEsquerdoPress(event->pos());
}
