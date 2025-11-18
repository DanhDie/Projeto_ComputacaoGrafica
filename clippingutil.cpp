#include "clippingutil.h"
#include <QWidget>
#include <cmath>
#include "ponto3d.h"


void Clipping::calcularRC(const Ponto3D& p, int RC[4]) {
    const double Xmin = -1.0, Xmax = 1.0;
    const double Ymin = -1.0, Ymax = 1.0;
    RC[0] = RC[1] = RC[2] = RC[3] = 0;


    if (p.y() > Ymax) RC[0] = 1; // Borda superior
    if (p.y() < Ymin) RC[1] = 1; // Borda inferior
    if (p.x() > Xmax) RC[2] = 1; // Direita
    if (p.x() < Xmin) RC[3] = 1; // Esquerda
}
bool Clipping::validarCoord(double v){
    return (v >= -1.0 && v <= 1.0);
}
void Clipping::calcularClipping(Ponto3D &p, double m, int RC[4]) {
    const double Xmin = -1.0, Xmax = 1.0;
    const double Ymin = -1.0, Ymax = 1.0;
    double x = p.x();
    double y = p.y();

    if (RC[0]) { y = Ymin; x = p.x() + ((1/m) * (y - p.y())); }
    if (RC[1]) { y = Ymax; x = p.x() + ((1/m) * (y - p.y())); }


    if(!validarCoord(x)){
        if (RC[2]) { x = Xmax; y = (m * (x - p.x())) + p.y(); }
        if (RC[3]) { x = Xmin; y = (m * (x - p.x())) + p.y(); }
    }

    p.setX(x);
    p.setY(y);
}


bool Clipping::cohenSutherland(Ponto3D& p1, Ponto3D& p2)
{
    const double Xmin = -1.0, Xmax = 1.0;
    const double Ymin = -1.0, Ymax = 1.0;

    double x0 = p1.x(), y0 = p1.y();
    double x1 = p2.x(), y1 = p2.y();

    while (true)
    {
        int rc0[4], rc1[4];
        calcularRC(Ponto3D(x0,y0,0), rc0);
        calcularRC(Ponto3D(x1,y1,0), rc1);

        // Aceita
        if ((rc0[0] | rc0[1] | rc0[2] | rc0[3] |
             rc1[0] | rc1[1] | rc1[2] | rc1[3]) == 0)
        {
            p1.setX(x0); p1.setY(y0);
            p2.setX(x1); p2.setY(y1);
            return true;
        }

        // Rejeição trivial
        if ((rc0[0] & rc1[0]) || (rc0[1] & rc1[1]) ||
            (rc0[2] & rc1[2]) || (rc0[3] & rc1[3]))
        {
            return false;
        }

        // Escolhe ponto fora
        int *rcOut;
        double x, y;

        if (rc0[0] || rc0[1] || rc0[2] || rc0[3])
            rcOut = rc0;
        else
            rcOut = rc1;

        if (rcOut[0]) { // TOP
            x = x0 + (x1 - x0) * (Ymax - y0) / (y1 - y0);
            y = Ymax;
        }
        else if (rcOut[1]) { // BOTTOM
            x = x0 + (x1 - x0) * (Ymin - y0) / (y1 - y0);
            y = Ymin;
        }
        else if (rcOut[2]) { // RIGHT
            y = y0 + (y1 - y0) * (Xmax - x0) / (x1 - x0);
            x = Xmax;
        }
        else if (rcOut[3]) { // LEFT
            y = y0 + (y1 - y0) * (Xmin - x0) / (x1 - x0);
            x = Xmin;
        }

        // Atualiza o ponto cortado
        if (rcOut == rc0) {
            x0 = x; y0 = y;
        } else {
            x1 = x; y1 = y;
        }
    }
}






bool Clipping::clipPoligono(const QVector<Ponto3D>& poligonoEntrada, QVector<Ponto3D>& poligonoSaida) {
    if (poligonoEntrada.size() < 3) {
        return false;
    }

    QVector<Ponto3D> listaAtual = poligonoEntrada;
    QVector<Ponto3D> listaProxima;

    // Borda esquerda (x = 0.0)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 1, -1.0, true);
    listaAtual = listaProxima;
    listaProxima.clear();

    if (listaAtual.size() < 3) return false;

    // Borda direita (x = 1.0)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 2, 1.0, true);
    listaAtual = listaProxima;
    listaProxima.clear();

    if (listaAtual.size() < 3) return false;

    // Borda inferior (y = 0.0)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 4, -1.0, false);
    listaAtual = listaProxima;
    listaProxima.clear();

    if (listaAtual.size() < 3) return false;

    // Borda superior (y = 1.0)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 8, 1.0, false);

    poligonoSaida = listaProxima;
    return poligonoSaida.size() >= 3;
}

void Clipping::PolygonClip::clipAgainstEdge(const QVector<Ponto3D>& entrada, QVector<Ponto3D>& saida,
                                            int edge, double clipValue, bool isVertical) {
    if (entrada.empty()) return;

    Ponto3D pontoAnterior = entrada.last();
    bool anteriorDentro = false;

    if (isVertical)
        anteriorDentro = (edge == 1) ? (pontoAnterior.x() >= clipValue) : (pontoAnterior.x() <= clipValue);
    else
        anteriorDentro = (edge == 4) ? (pontoAnterior.y() >= clipValue) : (pontoAnterior.y() <= clipValue);

    for (const Ponto3D& pontoAtual : entrada) {
        bool atualDentro = false;

        if (isVertical)
            atualDentro = (edge == 1) ? (pontoAtual.x() >= clipValue) : (pontoAtual.x() <= clipValue);
        else
            atualDentro = (edge == 4) ? (pontoAtual.y() >= clipValue) : (pontoAtual.y() <= clipValue);

        if (atualDentro) {
            if (!anteriorDentro) {
                Ponto3D interseccao = calcularInterseccao(pontoAnterior, pontoAtual, edge, clipValue, isVertical);
                saida.append(interseccao);
            }
            saida.append(pontoAtual);
        } else if (anteriorDentro) {
            Ponto3D interseccao = calcularInterseccao(pontoAnterior, pontoAtual, edge, clipValue, isVertical);
            saida.append(interseccao);
        }

        pontoAnterior = pontoAtual;
        anteriorDentro = atualDentro;
    }
}

Ponto3D Clipping::PolygonClip::calcularInterseccao(const Ponto3D& p1, const Ponto3D& p2,
                                                     int edge, double clipValue, bool isVertical) {
    double x, y, z = (p1.z() + p2.z()) / 2.0; // mantém profundidade

    if (isVertical) {
        x = clipValue;
        double t = (clipValue - p1.x()) / (p2.x() - p1.x());
        y = p1.y() + t * (p2.y() - p1.y());
    } else {
        y = clipValue;
        double t = (clipValue - p1.y()) / (p2.y() - p1.y());
        x = p1.x() + t * (p2.x() - p1.x());
    }

    return Ponto3D(x, y, z);
}

int Clipping::PolygonClip::calcularCodigoRegiao(double x, double y) {
    int codigo = 0; // DENTRO

    // MUDANÇA AQUI: Use 0.0 e 1.0
    if (x < -1.0)       codigo |= 1; // ESQUERDA
    else if (x > 1.0)  codigo |= 2; // DIREITA
    if (y < -1.0)       codigo |= 4; // ABAIXO
    else if (y > 1.0)  codigo |= 8; // ACIMA

    return codigo;
}

// Aproxima o círculo como um polígono regular
static QVector<Ponto3D> gerarAproximacaoCirculo(const Ponto3D& centro, double raio, int segmentos = 128) {
    QVector<Ponto3D> resultado;
    resultado.reserve(segmentos);
    const double TWO_PI = 2.0 * M_PI;
    for (int i = 0; i < segmentos; ++i) {
        double theta = (TWO_PI * i) / segmentos;
        double x = centro.x() + raio * std::cos(theta);
        double y = centro.y() + raio * std::sin(theta)*1.3;
        resultado.append(Ponto3D(x, y, centro.z()));
    }
    return resultado;
}

// Usa Sutherland-Hodgman sobre a aproximação
bool Clipping::clipCirculo(const Ponto3D& centro, double raio, QVector<Ponto3D>& poligonoSaida, int segmentos) {
    QVector<Ponto3D> aproximacao = gerarAproximacaoCirculo(centro, raio, segmentos);
    QVector<Ponto3D> resultado;
    bool visivel = clipPoligono(aproximacao, resultado);
    poligonoSaida = resultado;
    return visivel;
}
