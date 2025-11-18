#ifndef OBJPOLIGONO_H
#define OBJPOLIGONO_H

#include "objeto.h"
#include "ponto3d.h"
#include "viewport.h"
#include "objwindow.h"

class ObjPoligono : public Objeto {
public:
    ObjPoligono(QString nome, const Ponto3D* pontos, int quantidade, TipoObjeto tipo = TipoObjeto::Poligono);

    void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window, int modoP) const override;
    Ponto3D getPontoReferencia() const override;

protected:
    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const;

private:
    int numPontos;
};
#endif // OBJPOLIGONO_H
