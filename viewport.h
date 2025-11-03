#ifndef VIEWPORT_H
#define VIEWPORT_H

#include "ponto3d.h"

class Viewport {
private:
    double vxmin, vymin, vxmax, vymax;

public:
    Viewport(double vxmin = 0, double vymin = 0, double vxmax = 800, double vymax = 600);

    Ponto3D mapear(const Ponto3D& pNormalizado) const;
    Ponto3D desmapear(const QPoint& p) const;

    double getVxmax() const;
    double getVxmin() const;
    double getVymax() const;
    double getVymin() const;
};

#endif // VIEWPORT_H
