#ifndef OBJPOLIGONO_H
#define OBJPOLIGONO_H

#include "objeto.h"
#include <QPoint>
#include "ponto.h"

class ObjPoligono : public Objeto {
public:
    ObjPoligono(QString nome, const Ponto* pontos, int quantidade, TipoObjeto tipo);

    void desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const override;
};

#endif // OBJPOLIGONO_H
