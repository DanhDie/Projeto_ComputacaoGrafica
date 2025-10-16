#ifndef CLIPPINGUTIL_H
#define CLIPPINGUTIL_H

#include <QVector>
#include "ponto.h"

class Clipping {
public:
    // --- Cálculo de códigos de região e clipping de linhas ---
    static void calcularRC(const Ponto& p, int RC[4]);
    static void calcularClipping(Ponto &p, double m, int RC[4]);
    static bool cohenSutherland(Ponto& p1, Ponto& p2);

    // --- Clipping de polígonos (Sutherland-Hodgman) ---
    static bool clipPoligono(const QVector<Ponto>& poligonoEntrada, QVector<Ponto>& poligonoSaida);

    // --- Clipping de círculos (adição nova) ---
    static bool clipCirculo(const Ponto& centro, double raio, QVector<Ponto>& poligonoSaida, int segmentos = 48);

private:
    // Estrutura interna usada no clipping de polígonos
    struct PolygonClip {
        static void clipAgainstEdge(const QVector<Ponto>& entrada, QVector<Ponto>& saida,
                                    int edge, double clipValue, bool isVertical);
        static Ponto calcularInterseccao(const Ponto& p1, const Ponto& p2, int edge,
                                         double clipValue, bool isVertical);
        static int calcularCodigoRegiao(double x, double y);
    };
};

#endif // CLIPPINGUTIL_H
