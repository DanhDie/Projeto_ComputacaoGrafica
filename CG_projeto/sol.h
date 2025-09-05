#ifndef SOL_H
#define SOL_H


#include <QVector>
#include <QPainter>

#include "displayfile.h"
#include "objtriangulo.h"
#include "objcirculo.h"

class Sol : public Objeto
{
public:
    Sol(QString nome, int x, int y, TipoObjeto tipo = Complexo);
    Sol(QString nome);
    ~Sol();

    const QVector<Objeto*>& getObjetos() const;
    void autorretrato(QPainter* painter) const;

private:
    QVector<Objeto*> objPrimitivos;
};

#endif // SOL_H
