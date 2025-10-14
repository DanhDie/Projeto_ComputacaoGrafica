#ifndef OBJCASA_H
#define OBJCASA_H

#include <QVector>
#include<QPainter>

#include "displayfile.h"
#include "objlinha.h"
#include "objcirculo.h"
#include "objtriangulo.h"
#include "objpoligono.h"

class ObjCasa : public Objeto
{
public:
    ObjCasa(QString nome, int x, int y, TipoObjeto tipo = Complexo);
    ObjCasa(QString nome);
    ~ObjCasa();

    const QVector<Objeto*> getObjetos() const;
    void desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const override;
    void transformar(const Matriz& transformacao) override;
    Ponto getPontoReferencia() const override;

protected:
    QVector<QPoint>ajustarPontos(const Viewport &vp,const ObjWindow &window,bool desenhar) const override;

private:
    QVector<Objeto*> objPrimitivos;
};

#endif // OBJCASA_H
