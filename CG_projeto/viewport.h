#ifndef VIEWPORT_H
#define VIEWPORT_H

#include "ponto.h"

class Viewport {
private:
    double vxmin, vymin, vxmax, vymax;

public:
    Viewport(double vxmin = 0, double vymin = 0, double vxmax = 800, double vymax = 600);

    // Converte ponto normalizado [0,1] para coordenada de tela
    Ponto mapear(const Ponto& pNormalizado) const;
    Ponto desmapear(QPoint p);
};

#endif // VIEWPORT_H
