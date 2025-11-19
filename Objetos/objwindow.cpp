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
    // transforma pelo view
    Matriz P(4,1);
    P[0][0] = p.x();
    P[1][0] = p.y();
    P[2][0] = p.z();
    P[3][0] = 1;

    Matriz Pv = visualizacao * P;

    double x = Pv[0][0];
    double y = Pv[1][0];
    double z = Pv[2][0];

    // normalização linear para [-1,1]
    double xn = (x - getXmin()) / (getXmax() - getXmin()) * 2 - 1;
    double yn = (y - getYmin()) / (getYmax() - getYmin()) * 2 - 1;
    double zn = (z - getZmin()) / (getZmax() - getZmin()) * 2 - 1;

    return Ponto3D(xn, yn, zn);
}

Ponto3D ObjWindow::desnormalizar(const Ponto3D& p) {
    double x = (p.x()+1)/2 * (getXmax()-getXmin()) + getXmin();
    double y = (p.y()+1)/2 * (getYmax()-getYmin()) + getYmin();
    double z = (p.z()+1)/2 * (getZmax()-getZmin()) + getZmin();

    Matriz P(4,1);
    P[0][0]=x; P[1][0]=y; P[2][0]=z; P[3][0]=1;

      Matriz Vinv = visualizacao.inversa();
    Matriz Pw = Vinv * P;

    return Ponto3D(Pw[0][0], Pw[1][0], Pw[2][0]);
}

double ObjWindow::getXmin() const { return pontos[0].x(); }
double ObjWindow::getYmin() const { return pontos[0].y(); }
double ObjWindow::getZmin() const { return pontos[0].z(); }
double ObjWindow::getXmax() const { return pontos[2].x(); }
double ObjWindow::getYmax() const { return pontos[2].y(); }
double ObjWindow::getZmax() const { return pontos[2].z(); }

void ObjWindow::transformar(const Matriz& transformacao){
    visualizacao=visualizacao*transformacao;
}


void ObjWindow::pan(double dx, double dy, double dz) {
    visualizacao = Matriz::translacao(-dx, -dy, -dz) * visualizacao;
}

void ObjWindow::zoom(double fator) {
    visualizacao = Matriz::escala(1.0/fator, 1.0/fator, 1.0/fator) * visualizacao;
}

void ObjWindow::setRotacao(double angulo) {
    double delta = angulo - anguloRotacao;
    anguloRotacao = angulo;

    visualizacao = Matriz::rotacaoY(-delta) * visualizacao;
}
double ObjWindow::getRotacao() const { return anguloRotacao; }

void ObjWindow::desenhar(QPainter*, const Viewport&, const ObjWindow&, int modoP) const {}
QVector<QPoint> ObjWindow::ajustarPontos(const Viewport&, const ObjWindow&, bool&) const { return {}; }
