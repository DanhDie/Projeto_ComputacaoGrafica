#include "objcirculo.h"
#include "ponto.h"
#include "Objetos/objwindow.h"
#include <QPainter>

ObjCirculo::ObjCirculo(QString nome, int cenX, int cenY, int raio, TipoObjeto tipo)
    : Objeto (nome, tipo){
    adicionarPonto(Ponto(cenX, cenY)); //Ponto central
    adicionarPonto(Ponto(raio, 0));    //Raio do circulo
}

void ObjCirculo::desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const{
    QVector<QPoint> pontosTela=ajustarPontos(vp, window);

    // centro já mapeado para viewport
    QPoint centro = pontosTela[0];

    // Ponto do raio no mundo
    const Ponto& centroMundo = this->getPontos()[0];
    const Ponto& pontoRaioMundo = this->getPontos()[1];

    // Distância (raio) no mundo
    double raioMundo = std::hypot(pontoRaioMundo.x(), pontoRaioMundo.y());

    // Escala da window para a viewport
    double escalaX = (vp.getVxmax() - vp.getVxmin()) / (window.getXmax() - window.getXmin());
    double escalaY = (vp.getVymax() - vp.getVymin()) / (window.getYmax() - window.getYmin());

    double escalaMedia = (escalaX + escalaY) / 2.0;

    int raioPixel = static_cast<int>(std::round(raioMundo * escalaMedia));

    painter->drawEllipse(centro, raioPixel, raioPixel);
}

void ObjCirculo::transformar(const Matriz& transformacao) {
    // Para detectar se há escala na transformação
    double escalaX = std::sqrt(transformacao[0][0] * transformacao[0][0] + transformacao[1][0] * transformacao[1][0]);
    double escalaY = std::sqrt(transformacao[0][1] * transformacao[0][1] + transformacao[1][1] * transformacao[1][1]);

    // Transforma o centro
    Ponto centro = pontos[0];
    Matriz centroTransformado = transformacao * centro;
    pontos[0].setX(centroTransformado[0][0]);
    pontos[0].setY(centroTransformado[1][0]);

    double escalaMedia = (escalaX + escalaY) / 2.0;
    int novoRaio = static_cast<int>(std::round(getRaio() * escalaMedia));
    setRaio(novoRaio);
}

QPoint ObjCirculo::getCentro() const {
    return pontos[0].toQPoint();
}

int ObjCirculo::getRaio() const {
    return (int)std::round(pontos[1].x());
}

void ObjCirculo::setCentro(const QPoint& centro) {
    pontos[0].setX(centro.x());
    pontos[0].setY(centro.y());
}

void ObjCirculo::setRaio(int raio) {
    pontos[1].setX(raio);
}
