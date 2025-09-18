#ifndef OBJCIRCULO_H
#define OBJCIRCULO_H

#include "Objeto.h"

class ObjCirculo : public Objeto
{
public:
    ObjCirculo(QString nome, int cenX, int cenY, int raio, TipoObjeto tipo = Circulo);
    void transformar(const Matriz& transformacao) override;

    // Métodos adicionais para círculo
    QPoint getCentro() const;
    int getRaio() const;
    void setCentro(const QPoint& centro);
    void setRaio(int raio);
};

#endif // OBJCIRCULO_H
