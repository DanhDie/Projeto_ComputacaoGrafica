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
}

void ObjCirculo::desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window, int /*modoP*/) const {
    // --- Obtem centro e raio do círculo ---
    Ponto3D centroMundo = pontos[0];
    double raioMundo = pontos[1].x();

    // --- Normaliza em relação à window ---
    Ponto3D centroNorm=window.normalizar(centroMundo);
    double escalaX = 2.0 / (window.getXmax() - window.getXmin());
    double escalaY = 2.0 / (window.getYmax() - window.getYmin());

    double escala = std::min(escalaX, escalaY);
    double raioNorm = raioMundo * escala;


    //double raioNorm = raioMundo * (2.0 / (window.getXmax() - window.getXmin()));

    // --- Aplica o clipping de círculo ---
    QVector<Ponto3D> pontosClip;
    bool visivel = Clipping::clipCirculo(centroNorm, raioNorm, pontosClip, 48);

    if (!visivel)
        return; // totalmente fora da window — não desenha

    // --- Mapeia os pontos recortados para a viewport ---
    QVector<QPoint> pontosTela;
    for (const Ponto3D& p : pontosClip) {
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
    // 1️⃣ Calcula as escalas da matriz
    double escalaX = std::sqrt(transformacao[0][0] * transformacao[0][0] + transformacao[1][0] * transformacao[1][0]);
    double escalaY = std::sqrt(transformacao[0][1] * transformacao[0][1] + transformacao[1][1] * transformacao[1][1]);

    // 2️⃣ Transforma o centro
    Ponto3D centroAntigo = pontos[0];
    Matriz centroNovoMatriz = transformacao * centroAntigo;
    pontos[0].setX(centroNovoMatriz[0][0]);
    pontos[0].setY(centroNovoMatriz[1][0]);

    // 3️⃣ Média geométrica das escalas
    double escalaCombinada = std::sqrt(escalaX * escalaY);
    if (std::isnan(escalaCombinada)) escalaCombinada = 0.0;

    // 4️⃣ Aplica ao raio
    double novoRaio = getRaio() * escalaCombinada;
    setRaio(static_cast<int>(std::round(novoRaio)));
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
