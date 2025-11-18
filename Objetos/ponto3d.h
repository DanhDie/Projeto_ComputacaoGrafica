#ifndef PONTO3D_H
#define PONTO3D_H

#include "matriz.h"
#include <QPointF>
#include <cmath>

class Ponto3D : public Matriz {
public:
    Ponto3D(double x = 0.0, double y = 0.0, double z = 0.0);

    double x() const;
    double y() const;
    double z() const;

    void setX(double val);
    void setY(double val);
    void setZ(double val);

    QPoint toQPoint() const; // Projeção ortogonal simples (x, y)
};

#endif // PONTO3D_H
