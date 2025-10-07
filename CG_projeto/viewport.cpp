#include "viewport.h"

Viewport::Viewport(double vxmin, double vymin, double vxmax, double vymax)
    : vxmin(vxmin), vymin(vymin), vxmax(vxmax), vymax(vymax) {}

Ponto Viewport::mapear(const Ponto& pNormalizado) const {
    double xn = pNormalizado.x();
    double yn = pNormalizado.y();

    double xp = vxmin + xn * (vxmax - vxmin);
    double yp = vymin + (1.0 - yn) * (vymax - vymin); // <- mesma inversão

    return Ponto(xp, yp);
}

double Viewport::getVxmax()const{ return vxmax; }
double Viewport::getVxmin()const{ return vxmin; }
double Viewport::getVymax()const{ return vymax; }
double Viewport::getVymin()const{ return vymin; }

Ponto Viewport::desmapear(QPoint p) {
    double width = vxmax - vxmin;
    double height = vymax - vymin;

    if (width == 0.0 || height == 0.0)
        return Ponto(0, 0);

    double xNorm = (p.x() - vxmin) / width;
    double yNorm = 1.0 - ((p.y() - vymin) / height);
    // limitar entre 0 e 1 só por segurança
    xNorm = std::clamp(xNorm, 0.0, 1.0);
    yNorm = std::clamp(yNorm, 0.0, 1.0);

    return Ponto(xNorm, yNorm);
}
