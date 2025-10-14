#ifndef CLIPPINGUTIL_H
#define CLIPPINGUTIL_H

#include "Objetos/ponto.h"
#include "Objetos/objwindow.h"

// O namespace declara as funções que existirão.
namespace Clipping {
void calcularRC(const Ponto& p, int RC[4]);
void calcularClipping(Ponto &p, double m, int RC[4]);
bool cohenSutherland(Ponto& p1, Ponto& p2);

} // Fim do namespace Clipping

#endif // CLIPPINGUTIL_H
