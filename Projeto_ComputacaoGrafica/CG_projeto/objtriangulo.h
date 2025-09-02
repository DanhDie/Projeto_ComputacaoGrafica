#ifndef OBJTRIANGULO_H
#define OBJTRIANGULO_H
#include "Objeto.h"

class ObjTriangulo : public Objeto
{
public:
    ObjTriangulo(QString nome, int priX, int priY, int segX, int segY, int terX, int terY, TipoObjeto tipo=Poligono);
};

#endif // OBJTRIANGULO_H
