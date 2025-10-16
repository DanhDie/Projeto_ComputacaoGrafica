#include "objwindow.h"


ObjWindow::ObjWindow(QString nome, double xmin, double ymin, double xmax, double ymax)
    : Objeto(nome, Poligono)
{
    // Retângulo representando a window
    pontos.append(Ponto(xmin, ymin));
    pontos.append(Ponto(xmax, ymin));
    pontos.append(Ponto(xmax, ymax));
    pontos.append(Ponto(xmin, ymax));
}

void ObjWindow::atualizarLimites(double xmin, double ymin, double xmax, double ymax) {
    pontos[0] = Ponto(xmin, ymin);
    pontos[1] = Ponto(xmax, ymin);
    pontos[2] = Ponto(xmax, ymax);
    pontos[3] = Ponto(xmin, ymax);
}

double ObjWindow::getXmin() const { return pontos[0].x(); }
double ObjWindow::getYmin() const { return pontos[0].y(); }
double ObjWindow::getXmax() const { return pontos[2].x(); }
double ObjWindow::getYmax() const { return pontos[2].y(); }
