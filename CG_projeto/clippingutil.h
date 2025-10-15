#ifndef CLIPPINGUTIL_H
#define CLIPPINGUTIL_H

#include "Objetos/ponto.h"
#include "Objetos/objwindow.h"
#include <QVector>

// O namespace declara as funções que existirão.
namespace Clipping {
// Para Cohen-Sutherland (linhas)
void calcularRC(const Ponto& p, int RC[4]);
void calcularClipping(Ponto &p, double m, int RC[4]);
bool cohenSutherland(Ponto& p1, Ponto& p2);

// Para Sutherland-Hodgman (polígonos)
bool clipPoligono(const QVector<Ponto>& poligonoEntrada, QVector<Ponto>& poligonoSaida);

// Funções auxiliares para polígonos
namespace PolygonClip {
void clipAgainstEdge(const QVector<Ponto>& entrada, QVector<Ponto>& saida,
                     int edge, double clipValue, bool isVertical);
Ponto calcularInterseccao(const Ponto& p1, const Ponto& p2, int edge, double clipValue, bool isVertical);
int calcularCodigoRegiao(double x, double y);
}

} // Fim do namespace Clipping

#endif // CLIPPINGUTIL_H
