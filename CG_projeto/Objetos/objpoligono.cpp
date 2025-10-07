#include "objpoligono.h"
#include "ponto.h"
#include <QPainter>

ObjPoligono::ObjPoligono(QString nome, const Ponto* pontos, int quantidade, TipoObjeto tipo)
    : Objeto(nome, tipo)
{
    for (int i = 0; i < quantidade; ++i) {
        adicionarPonto(pontos[i]);
    }
}

void ObjPoligono::desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const{
    QVector<QPoint>pontosTela=ajustarPontos(vp,window);

    if(pontosTela.size() >= 4)painter->drawPolygon(pontosTela);
}
