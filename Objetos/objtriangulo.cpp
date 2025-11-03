#include "objtriangulo.h"
#include "ponto3d.h"
#include <QPainter>
#include <limits>
#include "Objetos/objwindow.h"
#include "clippingutil.h"

// Construtor: recebe 3 pontos 3D
ObjTriangulo::ObjTriangulo(QString nome,
                           const Ponto3D& p1, const Ponto3D& p2, const Ponto3D& p3,
                           TipoObjeto tipo)
    : Objeto(nome, tipo)
{
    adicionarPonto(p1);
    adicionarPonto(p2);
    adicionarPonto(p3);
}

// Desenha o triângulo (projetando 3D -> 2D)
void ObjTriangulo::desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const {
    const QVector<Ponto3D> pts = this->getPontos();

    if (pts.size() < 3) return;

    // Normaliza pontos
    QVector<Ponto3D> pontosNormalizados;
    for (const Ponto3D& p : pts) {
        pontosNormalizados.append(window.normalizar(p));
    }

    // Clipping 3D
    QVector<Ponto3D> pontosClipped;
    bool deveDesenhar = Clipping::clipPoligono(pontosNormalizados, pontosClipped);
    if (!deveDesenhar || pontosClipped.size() < 3) return;

    // Projeta para a tela
    QVector<QPoint> pontosTela;
    for (const Ponto3D& p : pontosClipped) {
        Ponto3D pTela = vp.mapear(p);
        pontosTela.append(QPoint(pTela.x(), pTela.y()));
    }

    painter->drawPolygon(pontosTela);
}

// Ajusta pontos para a viewport (projeção 3D -> 2D)
QVector<QPoint> ObjTriangulo::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const {
    QVector<QPoint> pontosTela;
    const QVector<Ponto3D> pts = this->getPontos();

    for (const Ponto3D& p : pts) {
        Ponto3D pNorm = window.normalizar(p);
        Ponto3D pTela = vp.mapear(pNorm);
        pontosTela.append(QPoint(pTela.x(), pTela.y()));
    }

    return pontosTela;
}

// Retorna ponto de referência (centro da caixa delimitadora 3D)
Ponto3D ObjTriangulo::getPontoReferencia() const {
    const QVector<Ponto3D>& vertices = this->getPontos();
    if (vertices.isEmpty()) return Ponto3D(0, 0, 0);

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

    double cx = minX + (maxX - minX) / 2.0;
    double cy = minY + (maxY - minY) / 2.0;
    double cz = minZ + (maxZ - minZ) / 2.0;

    return Ponto3D(cx, cy, cz);
}
