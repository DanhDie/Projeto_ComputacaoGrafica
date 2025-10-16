#include "objpoligono.h"
#include "ponto.h"
#include <QPainter>
#include <limits>
#include "Objetos/objwindow.h"
#include "clippingutil.h"

ObjPoligono::ObjPoligono(QString nome, const Ponto* pontos, int quantidade, TipoObjeto tipo)
    : Objeto(nome, tipo)
{
    for (int i = 0; i < quantidade; ++i) {
        adicionarPonto(pontos[i]);
    }
}

void ObjPoligono::desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const{
    bool desenhar;
    QVector<QPoint>pontosTela=ajustarPontos(vp,window,desenhar);

    if(pontosTela.size() >= 4)painter->drawPolygon(pontosTela);
}

QVector<QPoint> ObjPoligono::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool desenhar) const {
    QVector<QPoint> pontosTela;
    const QVector<Ponto> pts = this->getPontos();

    if (pts.size() < 3) {
        return pontosTela;
    }

    // Normaliza todos os pontos
    QVector<Ponto> pontosNormalizados;
    for (const Ponto& pOriginal : pts) {
        Ponto pNorm = window.normalizar(pOriginal);
        pontosNormalizados.append(pNorm);
    }

    // Aplica clipping no polígono
    QVector<Ponto> pontosClipped;
    desenhar = Clipping::clipPoligono(pontosNormalizados, pontosClipped);

    if (!desenhar) {
        return pontosTela;
    }

    // Mapeia para a viewport
    for (const Ponto& pNorm : pontosClipped) {
        Ponto pTela = vp.mapear(pNorm);
        pontosTela.append(pTela.toQPoint());
    }

    return pontosTela;
}

Ponto ObjPoligono::getPontoReferencia() const {
    const QVector<Ponto>& vertices = this->getPontos();

    if (vertices.isEmpty()) {
        return Ponto(0, 0);
    }

    // Inicializa com os valores do primeiro ponto
    double minX = vertices[0].x();
    double maxX = vertices[0].x();
    double minY = vertices[0].y();
    double maxY = vertices[0].y();

    // Itera a partir do segundo ponto para encontrar os extremos
    for (int i = 1; i < vertices.size(); ++i) {
        const Ponto& p = vertices[i];
        if (p.x() < minX) minX = p.x();
        if (p.x() > maxX) maxX = p.x();
        if (p.y() < minY) minY = p.y();
        if (p.y() > maxY) maxY = p.y();
    }

    // Calcula o centro da caixa delimitadora
    double centroX = minX + (maxX - minX) / 2.0;
    double centroY = minY + (maxY - minY) / 2.0;

    return Ponto(centroX, centroY);
}
