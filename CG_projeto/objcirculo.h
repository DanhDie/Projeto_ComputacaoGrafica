#ifndef OBJCIRCULO_H
#define OBJCIRCULO_H

#include "Objeto.h"

class ObjCirculo : public Objeto
{
public:
    ObjCirculo(QString nome, int cenX, int cenY, int raio, TipoObjeto tipo = Circulo);
};

#endif // OBJCIRCULO_H
