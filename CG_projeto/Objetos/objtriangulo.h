#ifndef OBJTRIANGULO_H
#define OBJTRIANGULO_H

#include "objeto.h"
#include "viewport.h"

class ObjTriangulo : public Objeto
{
public:
    ObjTriangulo(QString nome, int priX, int priY, int segX, int segY, int terX, int terY, TipoObjeto tipo = TipoObjeto::Poligono);

    void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const override;
    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool desenhar) const override;
    Ponto getPontoReferencia() const override;
};

#endif // OBJTRIANGULO_H
