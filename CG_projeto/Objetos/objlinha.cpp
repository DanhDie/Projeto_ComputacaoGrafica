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
