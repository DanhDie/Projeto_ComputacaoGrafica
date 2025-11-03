#include "objwindow.h"
#include <QDebug>
#include <cmath>

ObjWindow::ObjWindow(QString nome, double xmin, double ymin, double zmin,
                     double xmax, double ymax, double zmax)
    : Objeto(nome, Poligono)
{
    pontos.append(Ponto3D(xmin, ymin, zmin));
    pontos.append(Ponto3D(xmax, ymin, zmin));
    pontos.append(Ponto3D(xmax, ymax, zmax));
    pontos.append(Ponto3D(xmin, ymax, zmax));
}

void ObjWindow::atualizarLimites(double xmin, double ymin, double zmin,
                                 double xmax, double ymax, double zmax) {
    pontos[0] = Ponto3D(xmin, ymin, zmin);
    pontos[1] = Ponto3D(xmax, ymin, zmin);
    pontos[2] = Ponto3D(xmax, ymax, zmax);
    pontos[3] = Ponto3D(xmin, ymax, zmax);
}

Ponto3D ObjWindow::normalizar(const Ponto3D& p) const {
    // Aplica rotação inversa apenas no plano XY
    double anguloRad = -this->getRotacao() * M_PI / 180.0;
    double cx = (getXmin() + getXmax()) / 2.0;
    double cy = (getYmin() + getYmax()) / 2.0;
    double cz = (getZmin() + getZmax()) / 2.0;

    double x = p.x() - cx;
    double y = p.y() - cy;
    double z = p.z() - cz;

    double xr = x * cos(anguloRad) - y * sin(anguloRad);
    double yr = x * sin(anguloRad) + y * cos(anguloRad);
    double zr = z;

    xr += cx;
    yr += cy;
    zr += cz;

    // Normaliza de [xmin,xmax] para [-1,1]
    double xn = (xr - getXmin()) / (getXmax() - getXmin()) * 2.0 - 1.0;
    double yn = (yr - getYmin()) / (getYmax() - getYmin()) * 2.0 - 1.0;
    double zn = (zr - getZmin()) / (getZmax() - getZmin()) * 2.0 - 1.0;

    return Ponto3D(xn, yn, zn);
}

Ponto3D ObjWindow::desnormalizar(const Ponto3D& p) {
    double x = (p.x() + 1.0) / 2.0 * (getXmax() - getXmin()) + getXmin();
    double y = (p.y() + 1.0) / 2.0 * (getYmax() - getYmin()) + getYmin();
    double z = (p.z() + 1.0) / 2.0 * (getZmax() - getZmin()) + getZmin();

    double cx = (getXmin() + getXmax()) / 2.0;
    double cy = (getYmin() + getYmax()) / 2.0;
    double cz = (getZmin() + getZmax()) / 2.0;

    double xt = x - cx;
    double yt = y - cy;
    double zt = z - cz;

    double anguloRad = anguloRotacao * M_PI / 180.0;
    double xr = xt * cos(anguloRad) - yt * sin(anguloRad);
    double yr = xt * sin(anguloRad) + yt * cos(anguloRad);
    double zr = zt;

    xr += cx;
    yr += cy;
    zr += cz;

    return Ponto3D(xr, yr, zr);
}

double ObjWindow::getXmin() const { return pontos[0].x(); }
double ObjWindow::getYmin() const { return pontos[0].y(); }
double ObjWindow::getZmin() const { return pontos[0].z(); }
double ObjWindow::getXmax() const { return pontos[2].x(); }
double ObjWindow::getYmax() const { return pontos[2].y(); }
double ObjWindow::getZmax() const { return pontos[2].z(); }

void ObjWindow::pan(double dx, double dy, double dz) {
    for (auto& p : pontos) {
        p = Ponto3D(p.x() + dx, p.y() + dy, p.z() + dz);
    }
}

void ObjWindow::zoom(double fator) {
    double cx = (getXmin() + getXmax()) / 2.0;
    double cy = (getYmin() + getYmax()) / 2.0;
    double cz = (getZmin() + getZmax()) / 2.0;

    double largura = (getXmax() - getXmin()) * fator;
    double altura = (getYmax() - getYmin()) * fator;
    double profundidade = (getZmax() - getZmin()) * fator;

    atualizarLimites(cx - largura/2.0, cy - altura/2.0, cz - profundidade/2.0,
                     cx + largura/2.0, cy + altura/2.0, cz + profundidade/2.0);
}

void ObjWindow::setRotacao(double angulo) { anguloRotacao = angulo; }
double ObjWindow::getRotacao() const { return anguloRotacao; }

void ObjWindow::desenhar(QPainter*, const Viewport&, const ObjWindow&) const {}
QVector<QPoint> ObjWindow::ajustarPontos(const Viewport&, const ObjWindow&, bool&) const { return {}; }



