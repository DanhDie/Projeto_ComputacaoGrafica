#include "viewport.h"

Viewport::Viewport(double vxmin, double vymin, double vxmax, double vymax)
    : vxmin(vxmin), vymin(vymin), vxmax(vxmax), vymax(vymax) {}

Ponto Viewport::mapear(const Ponto& pNormalizado) const {
    double xn = pNormalizado.x(); // entre 0 e 1
    double yn = pNormalizado.y(); // entre 0 e 1

    double xp = vxmin + xn * (vxmax - vxmin);
    double yp = vymin + (1 - yn) * (vymax - vymin); // inverte Y (Qt usa Y para baixo)

    return Ponto(xp, yp);
}
