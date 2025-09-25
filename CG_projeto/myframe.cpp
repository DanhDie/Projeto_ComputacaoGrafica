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

    pen.setWidth(1);
    pen.setColor(QColor("#282b2e")); //preto
    painter.setPen(pen);
    painter.setRenderHint(QPainter::Antialiasing);

    // pega a window do display file (assumindo que você adicionou ela com nome "janela")
    ObjWindow* window = dynamic_cast<ObjWindow*>(displayFile->getObjeto("janela"));
    if (!window) return;

    // define viewport (área interna do frame)
    Viewport vp(0, 0, width(), height());

    // percorre todos os objetos
    for (Objeto* obj : displayFile->getObjetos()) {
        if (obj->getNome() == "janela") continue; // Para não desenhar a window (janela)
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
        // centro já mapeado para viewport
        QPoint centro = pontosTela[0];

        // Ponto do raio no mundo
        const Ponto& centroMundo = obj->getPontos()[0];
        const Ponto& pontoRaioMundo = obj->getPontos()[1];

        // Distância (raio) no mundo
        double raioMundo = std::hypot(pontoRaioMundo.x(), pontoRaioMundo.y());

        // Escala da window para a viewport
        double escalaX = (vp.getVxmax() - vp.getVxmin()) / (window->getXmax() - window->getXmin());
        double escalaY = (vp.getVymax() - vp.getVymin()) / (window->getYmax() - window->getYmin());

        double escalaMedia = (escalaX + escalaY) / 2.0;

        int raioPixel = static_cast<int>(std::round(raioMundo * escalaMedia));

        painter->drawEllipse(centro, raioPixel, raioPixel);
    }
}
