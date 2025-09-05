#ifndef OBJNATHGHOSTKILLER_H
#define OBJNATHGHOSTKILLER_H

#include <QVector>  //Vetor para os objetos pertecentes a este
#include <QPainter>

#include "displayfile.h"
#include "objlinha.h"
#include "objcirculo.h"

class ObjNathGhostKiller : public Objeto //Apesar de ser um objeto complexo, também é um objeto... né???????
{
public:
    ObjNathGhostKiller(QString nome, int x, int y, TipoObjeto tipo = Complexo); //Sobrecarga de método como em POO, e construtor principal
    ObjNathGhostKiller(QString nome);

    const QVector<Objeto>& getObjetos() const;
    void autoRetrato(QPainter* painter) const; //método de desenho

private:
    QVector<Objeto> objPrimitivos; //Vetor dos objetos primitivos contidos dentro desse objeto
};

#endif // OBJNATHGHOSTKILLER_H
