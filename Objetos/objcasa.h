#ifndef OBJCASA_H
#define OBJCASA_H

#include <QVector>
#include <QPainter>

#include "objeto.h"
#include "objtriangulo.h"
#include "objpoligono.h"
#include "objcirculo.h"
#include "ponto3d.h"
#include "viewport.h"
#include "objwindow.h"
#include "matriz.h"

class ObjCasa : public Objeto
{
public:
    ObjCasa(QString nome, double x = 0, double y = 0, TipoObjeto tipo = TipoObjeto::Complexo);
    ~ObjCasa();

    const QVector<Objeto*> getObjetos() const;

    void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window, int modoP) const override;
    void transformar(const Matriz& transformacao) override;
    Ponto3D getPontoReferencia() const override;

protected:
    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const;

private:
    QVector<Objeto*> objPrimitivos;
};

#endif // OBJCASA_H
