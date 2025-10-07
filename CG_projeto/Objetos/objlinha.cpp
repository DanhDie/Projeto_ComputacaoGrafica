#include "ObjLinha.h"
#include "ponto.h"
#include <QPainter>

// ":" Neste contexto significa inicialização; O ObjLinha inicializa a si mesmo e instância um Objeto
// para guardar seu nome e pontos
ObjLinha::ObjLinha(QString nome, int priX, int priY, int segX, int segY, TipoObjeto tipo)
    : Objeto(nome, tipo){
        adicionarPonto(Ponto(priX, priY));
        adicionarPonto(Ponto(segX, segY));
}

void ObjLinha::desenhar(QPainter*painter,const Viewport &vp,const ObjWindow&window)const{
    QVector<QPoint>pontosTela=ajustarPontos(vp,window);

    if (pontosTela.size() >= 2) painter->drawLine(pontosTela[0], pontosTela[1]);
}

Ponto ObjLinha::getPontoReferencia() const {
    // Para uma linha, pode ser o ponto médio.
    const Ponto& p1 = pontos[0];
    const Ponto& p2 = pontos[1];
    double midX = (p1.x() + p2.x()) / 2.0;
    double midY = (p1.y() + p2.y()) / 2.0;
    return Ponto(midX, midY);
}
