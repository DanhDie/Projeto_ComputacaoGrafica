#ifndef OBJCIRCULO_H
#define OBJCIRCULO_H

#include "objeto.h"
#include "ponto3d.h"
#include <QPoint>
#include <QVector>


class ObjCirculo : public Objeto
{
public:
    ObjCirculo(QString nome, const Ponto3D& centro, double raio, TipoObjeto tipo = TipoObjeto::Poligono);

    void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const override;
    Ponto3D getPontoReferencia() const override;

protected:
    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const;

private:
    Ponto3D centro;
    double raio;
};

#endif // OBJCIRCULO_H
