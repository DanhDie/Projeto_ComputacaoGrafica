#include "objcirculo.h"
#include <QPainter>
#include <cmath>
#include "objwindow.h"

ObjCirculo::ObjCirculo(QString nome, const Ponto3D& c, double r, TipoObjeto tipo)
    : Objeto(nome, tipo), centro(c), raio(r)
{}

// Função que projeta o ponto do círculo para a tela
QVector<QPoint> ObjCirculo::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const {
    QVector<QPoint> pontos;

    // Normaliza o ponto do círculo no espaço da janela
    Ponto3D pNorm = window.normalizar(centro);

    // Mapeia o ponto normalizado para a viewport (tela)
    Ponto3D pTela = vp.mapear(pNorm);

    // Adiciona ponto projetado à lista
    pontos.append(QPoint(pTela.x(), pTela.y()));

    // Define que o círculo deve ser desenhado
    desenhar = true;
    return pontos;
}

// Desenha o círculo projetado na tela
void ObjCirculo::desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const {
    bool desenhar = true;

    // Ajusta o ponto do centro para a tela
    QVector<QPoint> pontosTela = ajustarPontos(vp, window, desenhar);

    // Se não houver pontos válidos, retorna
    if (!desenhar || pontosTela.isEmpty()) return;

    // Desenha círculo usando QRectF (x,y = topo-esquerdo, w,h = diâmetro)
    double rTela = raio; // pode ajustar escala se quiser
    // Aplica perspectiva simples: círculos mais distantes parecem menores
    Ponto3D pNorm = window.normalizar(centro);
    double fatorPerspectiva = 1.0 / (1.0 + pNorm.z());
    rTela *= fatorPerspectiva;

    // Desenha o círculo
    QPoint p = pontosTela[0];
    painter->drawEllipse(QPointF(p.x(), p.y()), rTela, rTela);
}

// Retorna o ponto de referência do círculo (centro)
Ponto3D ObjCirculo::getPontoReferencia() const {
    return centro;
}
