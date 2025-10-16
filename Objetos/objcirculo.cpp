#include "objcirculo.h"
#include "ponto.h"
#include "Objetos/objwindow.h"
#include "clippingutil.h"
#include <QPainter>
#include <cmath>

ObjCirculo::ObjCirculo(QString nome, int cenX, int cenY, int raio, TipoObjeto tipo)
    : Objeto(nome, tipo) {
    adicionarPonto(Ponto(cenX, cenY)); // Ponto central
    adicionarPonto(Ponto(raio, 0));    // Raio do círculo
}

void ObjCirculo::desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const {
    // --- 1️⃣ Obtem centro e raio do círculo ---
    Ponto centroMundo = pontos[0];
    double raioMundo = pontos[1].x();

    // --- 2️⃣ Normaliza em relação à window ---
    double xn = (centroMundo.x() - window.getXmin()) / (window.getXmax() - window.getXmin());
    double yn = (centroMundo.y() - window.getYmin()) / (window.getYmax() - window.getYmin());
    Ponto centroNorm(xn, yn);

    double raioNorm = raioMundo / (window.getXmax() - window.getXmin());

    // --- 3️⃣ Aplica o clipping de círculo ---
    QVector<Ponto> pontosClip;
    bool visivel = Clipping::clipCirculo(centroNorm, raioNorm, pontosClip, 48);

    if (!visivel)
        return; // totalmente fora da window — não desenha

    // --- 4️⃣ Mapeia os pontos recortados para a viewport ---
    QVector<QPoint> pontosTela;
    for (const Ponto& p : pontosClip) {
        Ponto pTela = vp.mapear(p);
        pontosTela.append(pTela.toQPoint());
    }

    // --- 5️⃣ Desenha o polígono resultante (círculo visível) ---
    painter->drawPolygon(pontosTela);
}

QVector<QPoint> ObjCirculo::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool desenhar) const {
    // Essa função não precisa mais calcular clipping manualmente,
    // mas podemos mantê-la caso outros usos a chamem.
    QVector<QPoint> pontosTela;
    const QVector<Ponto> pts = this->getPontos();

    for (const Ponto& pOriginal : pts) {
        Ponto p = pOriginal;
        Ponto pNorm = window.normalizar(p);
        Ponto pTela = vp.mapear(pNorm);
        pontosTela.append(pTela.toQPoint());
    }

    return pontosTela;
}

void ObjCirculo::transformar(const Matriz& transformacao) {
    // 1️⃣ Calcula as escalas da matriz
    double escalaX = std::sqrt(transformacao[0][0] * transformacao[0][0] + transformacao[1][0] * transformacao[1][0]);
    double escalaY = std::sqrt(transformacao[0][1] * transformacao[0][1] + transformacao[1][1] * transformacao[1][1]);

    // 2️⃣ Transforma o centro
    Ponto centroAntigo = pontos[0];
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

Ponto ObjCirculo::getPontoReferencia() const {
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
