#include "ponto.h"

Ponto::Ponto(double x, double y) : Matriz(3, 1) {
    (*this)[0][0] = x;
    (*this)[1][0] = y;
    (*this)[2][0] = 1; // coordenada homogênea
}

double Ponto::x() const {
    return (*this)[0][0];
}

double Ponto::y() const {
    return (*this)[1][0];
}

void Ponto::setX(double val) {
    (*this)[0][0] = val;
}

void Ponto::setY(double val) {
    (*this)[1][0] = val;
}

QPoint Ponto::toQPoint() const {
    return QPoint((int)std::round(x()), (int)std::round(y()));
}
