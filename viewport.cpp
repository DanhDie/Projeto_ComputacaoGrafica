#include "viewport.h"
#include <algorithm>

Viewport::Viewport(double vxmin, double vymin, double vxmax, double vymax)
    : vxmin(vxmin), vymin(vymin), vxmax(vxmax), vymax(vymax) {}

Ponto3D Viewport::mapear(const Ponto3D& pNorm) const {
    double xn = (pNorm.x() + 1) / 2.0;
    double yn = (1 - pNorm.y()) / 2.0; // inverte o Y para tela
    double xTela = vxmin + xn * (vxmax - vxmin);
    double yTela = vymin + yn * (vymax - vymin);
    return Ponto3D(xTela, yTela, pNorm.z());
}

Ponto3D Viewport::desmapear(const QPoint& p) const {
    double width = vxmax - vxmin;
    double height = vymax - vymin;
    double xNorm = 2.0 * ((p.x() - vxmin) / width) - 1.0;
    double yNorm = 1.0 - 2.0 * ((p.y() - vymin) / height);
    return Ponto3D(xNorm, yNorm, 0);
}

double Viewport::getVxmax() const { return vxmax; }
double Viewport::getVxmin() const { return vxmin; }
double Viewport::getVymax() const { return vymax; }
double Viewport::getVymin() const { return vymin; }
