#include "ObjLinha.h"
#include "objwindow.h"
#include "ponto3d.h"
#include <QPainter>
#include "clippingutil.h"

// ":" Neste contexto significa inicialização; O ObjLinha inicializa a si mesmo e instancia um Objeto
// para guardar seu nome e pontos
ObjLinha::ObjLinha(QString nome, const Ponto3D& p1, const Ponto3D& p2)
    : Objeto(nome, Linha) {
    adicionarPonto(p1);
    adicionarPonto(p2);
}

void ObjLinha::desenhar(QPainter* painter, const Viewport &vp, const ObjWindow &window) const {
    bool desenhar = true;
    QVector<QPoint> pontosTela = ajustarPontos(vp, window, desenhar);

    if (!desenhar) return;
    if (pontosTela.size() >= 2)
        painter->drawLine(pontosTela[0], pontosTela[1]);
}

QVector<QPoint> ObjLinha::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const {
    QVector<QPoint> pontosTela;
    const QVector<Ponto3D> pts = this->getPontos3D(); // obtém os pontos 3D

    // Cópia dos pontos
    Ponto3D p1 = pts[0];
    Ponto3D p2 = pts[1];

    // Normalização das cópias (2D dentro do window)
    Ponto3D p1Norm = window.normalizar(Ponto3D(p1.x(), p1.y(), p1.z()));
    Ponto3D p2Norm = window.normalizar(Ponto3D(p2.x(), p2.y(), p2.z()));

    // Cohen-Sutherland
    desenhar = Clipping::cohenSutherland(p1Norm, p2Norm);
    if (!desenhar) return pontosTela;

    // Mapeamento dos pontos para viewport
    Ponto3D p1Tela = vp.mapear(p1Norm);
    Ponto3D p2Tela = vp.mapear(p2Norm);

    // Atribuição final
    pontosTela.append(QPoint(static_cast<int>(p1Tela.x()), static_cast<int>(p1Tela.y())));
    pontosTela.append(QPoint(static_cast<int>(p2Tela.x()), static_cast<int>(p2Tela.y())));


    // Retorno dos pontos processados para desenho
    return pontosTela;
}

Ponto3D ObjLinha::getPontoReferencia() const {
    // Para uma linha, pode ser o ponto médio.
    const Ponto3D& p1 = pontos3D[0];
    const Ponto3D& p2 = pontos3D[1];
    double midX = (p1.x() + p2.x()) / 2.0;
    double midY = (p1.y() + p2.y()) / 2.0;
    double midZ = (p1.z() + p2.z()) / 2.0;
    return Ponto3D(midX, midY, midZ);
}
