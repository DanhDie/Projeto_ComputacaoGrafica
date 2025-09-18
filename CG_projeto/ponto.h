#ifndef PONTO_H
#define PONTO_H

#include "matriz.h"
#include <QPoint>
#include <cmath>

class Ponto : public Matriz {
public:
    Ponto(double x = 0, double y = 0);

    double x() const;
    double y() const;

    void setX(double val);
    void setY(double val);

    QPoint toQPoint() const; // conversão para QPoint (para desenhar no Qt)
};

#endif // PONTO_H
