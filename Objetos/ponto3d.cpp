#include "ponto3d.h"

Ponto3D::Ponto3D(double x, double y, double z) : Matriz(4, 1) {
    (*this)[0][0] = x;
    (*this)[1][0] = y;
    (*this)[2][0] = z;
    (*this)[3][0] = 1; // coordenada homogênea
}

double Ponto3D::x() const {
    return (*this)[0][0];
}

double Ponto3D::y() const {
    return (*this)[1][0];
}

double Ponto3D::z() const {
    return (*this)[2][0];
}

void Ponto3D::setX(double val) {
    (*this)[0][0] = val;
}

void Ponto3D::setY(double val) {
    (*this)[1][0] = val;
}

void Ponto3D::setZ(double val) {
    (*this)[2][0] = val;
}

QPoint Ponto3D::toQPoint() const {
    // Projeção ortogonal (descarta Z)
    return QPoint(x(), y());
}
