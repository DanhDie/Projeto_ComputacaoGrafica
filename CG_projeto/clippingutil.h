#ifndef CLIPPINGUTIL_H
#define CLIPPINGUTIL_H

#include "Objetos/ponto.h"
#include "Objetos/objwindow.h"

namespace Clipping {
    void cohenSutherland(Ponto& p1, Ponto& p2, ObjWindow& window);
    bool comparaResultado(double resultado, double min, double max);
}
#endif // CLIPPINGUTIL_H
