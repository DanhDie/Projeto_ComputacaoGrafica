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

    if (!displayFile) return;

    QPainter painter(this);
    painter.setPen(Qt::black);
    painter.setRenderHint(QPainter::Antialiasing);

    // pega a window do display file (assumindo que você adicionou ela com nome "janela")
    ObjWindow* window = dynamic_cast<ObjWindow*>(displayFile->getObjeto("janela"));
    if (!window) return;

    // define viewport (área interna do frame)
    Viewport vp(0, 0, width(), height());

    // percorre todos os objetos
    for (Objeto* obj : displayFile->getObjetos()) {
        //Tratador de desenho de objetos complexos
        if (obj->getTipo() == Complexo) {                   //Caso seja complexo
            QVector<Objeto*> subs = obj->getObjetos();      //Pega todos os sub objetos
            for (Objeto* sub : subs) {
                desenharObjetos(window,vp,sub,&painter);     //Envia cada um para normalizar e desenhar
            }
        } else {                                            //Se não,
            desenharObjetos(window, vp, obj, &painter);      //Só envia normalmente
        }
    }
}

void MyFrame::mousePressEvent(QMouseEvent *event){
    emit BtEsquerdoPress(event->pos());
}


void MyFrame::desenharObjetos(ObjWindow *window, Viewport vp, Objeto *obj, QPainter *painter){
    QVector<QPoint> pontosTela;
    for (const Ponto& p : obj->getPontos()) {
        // normaliza em relação à window
        Ponto pNorm = window->normalizar(p, window);

        // mapeia para a viewport
        Ponto pTela = vp.mapear(pNorm);

        pontosTela.append(pTela.toQPoint());
    }

    // desenha no painter
    if (obj->getTipo() == Linha) {
        if (pontosTela.size() >= 2)
            painter->drawLine(pontosTela[0], pontosTela[1]);
    }
    else if (obj->getTipo() == Poligono) {
        painter->drawPolygon(pontosTela);
    }
    else if (obj->getTipo() == Circulo) {
        // círculo armazenado como centro + raio
        QPoint centro = pontosTela[0];

        // Calcula o fator de escala baseado na largura da viewport vs window
        double fatorEscala = static_cast<double>(vp.getVxmax() - vp.getVxmin()) /
                             (window->getXmax() - window->getXmin());

        // Pega o raio original (distância entre os dois pontos)
        Ponto p1 = obj->getPontos()[0];
        Ponto p2 = obj->getPontos()[1];
        double raioOriginal = sqrt(pow(p2.x() - p1.x(), 2) + pow(p2.y() - p1.y(), 2));

        int raioPixel = static_cast<int>(raioOriginal * fatorEscala);

        painter->drawEllipse(centro, raioPixel, raioPixel);
    }
}
