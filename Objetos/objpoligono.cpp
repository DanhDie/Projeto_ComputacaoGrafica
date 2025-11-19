#include "objpoligono.h"
#include "clippingutil.h"
#include <QPainter>

ObjPoligono::ObjPoligono(QString nome, const Ponto3D* pontos, int quantidade, TipoObjeto tipo)
    : Objeto(nome, tipo), numPontos(quantidade)
{
    for (int i = 0; i < quantidade; ++i) {
        adicionarPonto(pontos[i]);
    }
}

void ObjPoligono::desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window, int /*modoP*/) const {
    bool desenhar = true;
    QVector<QPoint> pontosTela = ajustarPontos(vp, window, desenhar);
    if (!desenhar || pontosTela.size() < 3) return;

    painter->drawPolygon(pontosTela);
}

QVector<QPoint> ObjPoligono::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const {
    QVector<QPoint> pontosTela;
    const QVector<Ponto3D> pts = this->getPontos();

    QVector<Ponto3D> pontosNorm;
    for (const Ponto3D& p : pts) {
        pontosNorm.append(window.normalizar(p));
    }

    QVector<Ponto3D> pontosClip;
    desenhar = Clipping::clipPoligono(pontosNorm, pontosClip);
    if (!desenhar) return pontosTela;

    for (const Ponto3D& p : pontosClip) {
        Ponto3D pTela = vp.mapear(p);
        pontosTela.append(QPoint(pTela.x(), pTela.y()));
    }

    return pontosTela;
}

Ponto3D ObjPoligono::getPontoReferencia() const {
    const QVector<Ponto3D>& vertices = this->getPontos();
    if (vertices.isEmpty()) return Ponto3D(0,0,0);

    double minX = vertices[0].x(), maxX = vertices[0].x();
    double minY = vertices[0].y(), maxY = vertices[0].y();
    double minZ = vertices[0].z(), maxZ = vertices[0].z();

    for (int i = 1; i < vertices.size(); ++i) {
        const Ponto3D& p = vertices[i];
        if (p.x() < minX) minX = p.x();
        if (p.x() > maxX) maxX = p.x();
        if (p.y() < minY) minY = p.y();
        if (p.y() > maxY) maxY = p.y();
        if (p.z() < minZ) minZ = p.z();
        if (p.z() > maxZ) maxZ = p.z();
    }

    return Ponto3D(minX + (maxX - minX)/2.0,
                   minY + (maxY - minY)/2.0,
                   minZ + (maxZ - minZ)/2.0);
}
