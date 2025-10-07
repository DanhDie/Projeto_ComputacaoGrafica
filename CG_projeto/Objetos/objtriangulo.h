#ifndef OBJTRIANGULO_H
#define OBJTRIANGULO_H
#include "Objeto.h"

class ObjTriangulo : public Objeto
{
public:
    ObjTriangulo(QString nome, int priX, int priY, int segX, int segY, int terX, int terY, TipoObjeto tipo=Poligono);
    void desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const override;
};

#endif // OBJTRIANGULO_H
