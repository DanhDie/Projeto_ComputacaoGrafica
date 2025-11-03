#ifndef OBJWINDOW_H
#define OBJWINDOW_H

#include "objeto.h"
#include "ponto3d.h"

class ObjWindow : public Objeto {
public:
    ObjWindow(QString nome, double xmin, double ymin, double zmin,
              double xmax, double ymax, double zmax);

    void atualizarLimites(double xmin, double ymin, double zmin,
                          double xmax, double ymax, double zmax);

    Ponto3D normalizar(const Ponto3D p) const;
    Ponto3D desnormalizar(const Ponto3D p);

    // Getters
    double getXmin() const;
    double getYmin() const;
    double getZmin() const;
    double getXmax() const;
    double getYmax() const;
    double getZmax() const;

    void pan(double dx, double dy, double dz = 0.0);
    void zoom(double fator);
    void setRotacao(double angulo); // graus
    double getRotacao() const;

    void desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const override;

protected:
    QVector<QPoint> ajustarPontos(const Viewport &vp,const ObjWindow &window,bool desenhar) const;

private:
    double anguloRotacao = 0.0; // graus
};

#endif // OBJWINDOW_H
