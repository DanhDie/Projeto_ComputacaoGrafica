#include "objtriangulo.h"
#include "ponto.h"
#include <QPainter>
#include <limits>
#include "Objetos/objwindow.h"
#include "clippingutil.h"

ObjTriangulo::ObjTriangulo(QString nome, int priX, int priY, int segX, int segY, int terX, int terY, TipoObjeto tipo)
    : Objeto (nome, tipo){
    adicionarPonto(Ponto(priX,priY));
    adicionarPonto(Ponto(segX,segY));
    adicionarPonto(Ponto(terX,terY));
}

void ObjTriangulo::desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const{
    const QVector<Ponto> pts = this->getPontos();

    if (pts.size() < 3) {
        return;
    }

    // Normaliza todos os pontos
    QVector<Ponto> pontosNormalizados;
    for (const Ponto& pOriginal : pts) {
        Ponto pNorm = window.normalizar(pOriginal);
        pontosNormalizados.append(pNorm);
    }

    // Aplica clipping no triângulo
    QVector<Ponto> pontosClipped;
    bool deveDesenhar = Clipping::clipPoligono(pontosNormalizados, pontosClipped);

    if (!deveDesenhar || pontosClipped.size() < 3) {
        return;
    }

    // Mapeia para a viewport e desenha
    QVector<QPoint> pontosTela;
    for (const Ponto& pNorm : pontosClipped) {
        Ponto pTela = vp.mapear(pNorm);
        pontosTela.append(pTela.toQPoint());
    }

    painter->drawPolygon(pontosTela);
}

// Mantenha ajustarPontos vazia ou básica para compatibilidade
QVector<QPoint> ObjTriangulo::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool desenhar) const {
    QVector<QPoint> pontosTela;
    // Implementação básica ou vazia, já que não é mais usada
    const QVector<Ponto> pts = this->getPontos();

    for (const Ponto& pOriginal : pts) {
        Ponto pNorm = window.normalizar(pOriginal);
        Ponto pTela = vp.mapear(pNorm);
        pontosTela.append(pTela.toQPoint());
    }

    return pontosTela;
}

Ponto ObjTriangulo::getPontoReferencia() const {
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
