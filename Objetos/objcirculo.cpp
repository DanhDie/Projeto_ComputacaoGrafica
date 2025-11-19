#include "objcirculo.h"
#include "ponto.h"
#include "Objetos/objwindow.h"
#include "clippingutil.h"
#include <QPainter>
#include <cmath>

ObjCirculo::ObjCirculo(QString nome, Ponto3D centro, int raio, TipoObjeto tipo)
    : Objeto(nome, tipo) {
    adicionarPonto(centro); // Ponto central
    adicionarPonto(Ponto3D(raio, 0));    // Raio do círculo

    circuloTransformado=Clipping::gerarAproximacaoCirculo(centro, raio);
}

void ObjCirculo::desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window, int /*modoP*/) const {
    // --- Aplica o clipping de círculo ---
    QVector<Ponto3D>poligono=circuloTransformado;

    // normaliza cada ponto
    for (Ponto3D& p : poligono) {
        p = window.normalizar(p);
    }

    QVector<Ponto3D>pontoClip;
    bool visivel = Clipping::clipPoligono(poligono, pontoClip);

    if (!visivel)
        return; // totalmente fora da window — não desenha

    // --- Mapeia os pontos recortados para a viewport ---
    QVector<QPoint> pontosTela;
    for (const Ponto3D& p : pontoClip) {
        Ponto3D pTela = vp.mapear(p);
        pontosTela.append(pTela.toQPoint());
    }

    // --- Desenha o polígono resultante (círculo visível) ---
    painter->drawPolygon(pontosTela);
}

QVector<QPoint> ObjCirculo::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool& desenhar) const {
    // Essa função não precisa mais calcular clipping manualmente,
    // mas podemos mantê-la caso outros usos a chamem.
    QVector<QPoint> pontosTela;
    const QVector<Ponto3D> pts = this->getPontos();

    for (const Ponto3D& pOriginal : pts) {
        Ponto3D p = pOriginal;
        Ponto3D pNorm = window.normalizar(p);
        Ponto3D pTela = vp.mapear(pNorm);
        pontosTela.append(pTela.toQPoint());
    }

    return pontosTela;
}

void ObjCirculo::transformar(const Matriz& transformacao) {
    //  Multiplicar ponto a ponto do círculo-polígono
    for(Ponto3D& p : circuloTransformado){
        Matriz nova = transformacao * p;
        p.setX(nova[0][0]);
        p.setY(nova[1][0]);
        p.setZ(nova[2][0]);
    }
}

Ponto3D ObjCirculo::getPontoReferencia() const {
    return pontos[0]; // Centro
}

QPoint ObjCirculo::getCentro() const {
    return pontos[0].toQPoint();
}

int ObjCirculo::getRaio() const {
    return static_cast<int>(std::round(pontos[1].x()));
}

void ObjCirculo::setCentro(const QPoint& centro) {
    pontos[0].setX(centro.x());
    pontos[0].setY(centro.y());
}

void ObjCirculo::setRaio(int raio) {
    pontos[1].setX(raio);
}
