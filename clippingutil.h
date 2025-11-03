#ifndef CLIPPINGUTIL_H
#define CLIPPINGUTIL_H

#include <QVector>
#include "ponto3d.h"

class Clipping {
public:
    // --- Cálculo de códigos de região e clipping de linhas (2D com Z preservado) ---
    static void calcularRC(const Ponto3D& p, int RC[4]);
    static void calcularClipping(Ponto3D &p, double m, int RC[4]);
    static bool cohenSutherland(Ponto3D& p1, Ponto3D& p2);

    // --- Clipping de polígonos (Sutherland-Hodgman) ---
    static bool clipPoligono(const QVector<Ponto3D>& poligonoEntrada, QVector<Ponto3D>& poligonoSaida);

    // --- Clipping de círculos (aproximados como polígono) ---
    static bool clipCirculo(const Ponto3D& centro, double raio, QVector<Ponto3D>& poligonoSaida, int segmentos = 48);

private:
    struct PolygonClip {
        static void clipAgainstEdge(const QVector<Ponto3D>& entrada, QVector<Ponto3D>& saida,
                                    int edge, double clipValue, bool isVertical);
        static Ponto3D calcularInterseccao(const Ponto3D& p1, const Ponto3D& p2,
                                           int edge, double clipValue, bool isVertical);
        static int calcularCodigoRegiao(double x, double y);
    };
};

#endif // CLIPPINGUTIL_H
