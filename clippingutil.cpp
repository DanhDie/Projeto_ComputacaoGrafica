#include "clippingutil.h"
#include <QWidget>
#include <cmath>


void Clipping::calcularRC(const Ponto& p, int RC[4]) {
    const double Xmin = 0.0, Xmax = 1.0;
    const double Ymin = 0.0, Ymax = 1.0;
    RC[0] = RC[1] = RC[2] = RC[3] = 0;

    if (p.y() < Ymin) RC[0] = 1; // Borda superior
    if (p.y() > Ymax) RC[1] = 1; // Borda inferior
    if (p.x() > Xmax) RC[2] = 1; // Direita
    if (p.x() < Xmin) RC[3] = 1; // Esquerda
}

void Clipping::calcularClipping(Ponto &p, double m, int RC[4]) {
    const double Xmin = 0.0, Xmax = 1.0;
    const double Ymin = 0.0, Ymax = 1.0;
    double x = p.x();
    double y = p.y();

    if (RC[0]) { y = Ymin; x = p.x() + ((1/m) * (y - p.y())); }
    if (RC[1]) { y = Ymax; x = p.x() + ((1/m) * (y - p.y())); }
    if (RC[2]) { x = Xmax; y = (m * (x - p.x())) + p.y(); }
    if (RC[3]) { x = Xmin; y = (m * (x - p.x())) + p.y(); }

    p.setX(x);
    p.setY(y);
}

bool Clipping::cohenSutherland(Ponto& p1, Ponto& p2) {
    int RC1[4] = {0}, RC2[4] = {0};
    calcularRC(p1, RC1);
    calcularRC(p2, RC2);

    bool p1Dentro = !(RC1[0] || RC1[1] || RC1[2] || RC1[3]);
    bool p2Dentro = !(RC2[0] || RC2[1] || RC2[2] || RC2[3]);

    if (p1Dentro && p2Dentro) return true;

    bool rejeitar = true;
    for (int i = 0; i < 4; ++i) {
        if (!(RC1[i] && RC2[i])) { rejeitar = false; break; }
    }
    if (rejeitar) return false;

    double m = (p2.y() - p1.y()) / (p2.x() - p1.x());
    calcularClipping(p1, m, RC1);
    calcularClipping(p2, m, RC2);

    return true;
}

bool Clipping::clipPoligono(const QVector<Ponto>& poligonoEntrada, QVector<Ponto>& poligonoSaida) {
    if (poligonoEntrada.size() < 3) {
        return false;
    }

    QVector<Ponto> listaAtual = poligonoEntrada;
    QVector<Ponto> listaProxima;

    // MUDANÇA AQUI: Use 0.0 e 1.0 em vez de -1.0 e 1.0
    // Borda esquerda (x = 0.0)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 1, 0.0, true);
    listaAtual = listaProxima;
    listaProxima.clear();

    if (listaAtual.size() < 3) return false;

    // Borda direita (x = 1.0)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 2, 1.0, true);
    listaAtual = listaProxima;
    listaProxima.clear();

    if (listaAtual.size() < 3) return false;

    // Borda inferior (y = 0.0)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 4, 0.0, false);
    listaAtual = listaProxima;
    listaProxima.clear();

    if (listaAtual.size() < 3) return false;

    // Borda superior (y = 1.0)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 8, 1.0, false);

    poligonoSaida = listaProxima;
    return poligonoSaida.size() >= 3;
}

void Clipping::PolygonClip::clipAgainstEdge(const QVector<Ponto>& entrada, QVector<Ponto>& saida,
                                            int edge, double clipValue, bool isVertical) {
    if (entrada.empty()) return;

    Ponto pontoAnterior = entrada.last();
    bool anteriorDentro = false;

    if (isVertical)
        anteriorDentro = (edge == 1) ? (pontoAnterior.x() >= clipValue) : (pontoAnterior.x() <= clipValue);
    else
        anteriorDentro = (edge == 4) ? (pontoAnterior.y() >= clipValue) : (pontoAnterior.y() <= clipValue);

    for (const Ponto& pontoAtual : entrada) {
        bool atualDentro = false;

        if (isVertical)
            atualDentro = (edge == 1) ? (pontoAtual.x() >= clipValue) : (pontoAtual.x() <= clipValue);
        else
            atualDentro = (edge == 4) ? (pontoAtual.y() >= clipValue) : (pontoAtual.y() <= clipValue);

        if (atualDentro) {
            if (!anteriorDentro) {
                Ponto interseccao = calcularInterseccao(pontoAnterior, pontoAtual, edge, clipValue, isVertical);
                saida.append(interseccao);
            }
            saida.append(pontoAtual);
        } else if (anteriorDentro) {
            Ponto interseccao = calcularInterseccao(pontoAnterior, pontoAtual, edge, clipValue, isVertical);
            saida.append(interseccao);
        }

        pontoAnterior = pontoAtual;
        anteriorDentro = atualDentro;
    }
}

Ponto Clipping::PolygonClip::calcularInterseccao(const Ponto& p1, const Ponto& p2,
                                                 int edge, double clipValue, bool isVertical) {
    double x, y;

    if (isVertical) {
        x = clipValue;
        double t = (clipValue - p1.x()) / (p2.x() - p1.x());
        y = p1.y() + t * (p2.y() - p1.y());
    } else {
        y = clipValue;
        double t = (clipValue - p1.y()) / (p2.y() - p1.y());
        x = p1.x() + t * (p2.x() - p1.x());
    }

    return Ponto(x, y);
}

int Clipping::PolygonClip::calcularCodigoRegiao(double x, double y) {
    int codigo = 0; // DENTRO

    // MUDANÇA AQUI: Use 0.0 e 1.0
    if (x < 0.0)       codigo |= 1; // ESQUERDA
    else if (x > 1.0)  codigo |= 2; // DIREITA
    if (y < 0.0)       codigo |= 4; // ABAIXO
    else if (y > 1.0)  codigo |= 8; // ACIMA

    return codigo;
}

// Aproxima o círculo como um polígono regular
static QVector<Ponto> gerarAproximacaoCirculo(const Ponto& centro, double raio, int segmentos = 128) {
    QVector<Ponto> resultado;
    resultado.reserve(segmentos);
    const double TWO_PI = 2.0 * M_PI;
    for (int i = 0; i < segmentos; ++i) {
        double theta = (TWO_PI * i) / segmentos;
        double x = centro.x() + raio * std::cos(theta);
        double y = centro.y() + raio * std::sin(theta)*1.3;
        resultado.append(Ponto(x, y));
    }
    return resultado;
}

// Usa Sutherland-Hodgman sobre a aproximação
bool Clipping::clipCirculo(const Ponto& centro, double raio, QVector<Ponto>& poligonoSaida, int segmentos) {
    QVector<Ponto> aproximacao = gerarAproximacaoCirculo(centro, raio, segmentos);
    QVector<Ponto> resultado;
    bool visivel = clipPoligono(aproximacao, resultado);
    poligonoSaida = resultado;
    return visivel;
}
