#ifndef OBJPOLIGONO_H
#define OBJPOLIGONO_H

#include "objeto.h"
#include <QPoint>

class ObjPoligono : public Objeto {
public:
    ObjPoligono(QString nome, const QPoint* pontos, int quantidade, TipoObjeto tipo);
};

#endif // OBJPOLIGONO_H
