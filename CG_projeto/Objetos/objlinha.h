#ifndef OBJLINHA_H
#define OBJLINHA_H

#include "Objeto.h"
#include <QString>
#include <QPoint>
#include <QVector>

class ObjLinha : public Objeto
// Neste contexto, ":" indica herança da classe Objeto, para o ObjLinha
{
public:
    ObjLinha(QString nome, int priX, int priY, int segX, int segY, TipoObjeto tipo=Linha); //Construtor de ObjLinha

    void desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const override;
};
#endif // OBJLINHA_H
