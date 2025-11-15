#ifndef SOL_H
#define SOL_H

#include <QVector>
#include <QPainter>

#include "objeto.h"
#include "objtriangulo.h"
#include "objcirculo.h"

class Sol : public Objeto
{
public:
    Sol(QString nome, int x, int y, int z, TipoObjeto tipo = TipoObjeto::Complexo);
    Sol(QString nome);
    ~Sol();

    const QVector<Objeto*> getObjetos() const override;
    void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window, int modoP) const override;
    void transformar(const Matriz& transformacao) override;
    Ponto3D getPontoReferencia() const override;

protected:
    QVector<QPoint>ajustarPontos(const Viewport &vp,const ObjWindow &window,bool &desenhar) const override;

private:
    QVector<Objeto*> objPrimitivos;
};

#endif // SOL_H
