#ifndef OBJCIRCULO_H
#define OBJCIRCULO_H

#include "Objeto.h"

class ObjCirculo : public Objeto
{
public:
    ObjCirculo(QString nome, int cenX, int cenY, int raio, TipoObjeto tipo = Circulo);
    void desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const override;
    void transformar(const Matriz& transformacao) override;
    Ponto getPontoReferencia() const override;

    // Métodos adicionais para círculo
    QPoint getCentro() const;
    int getRaio() const;
    void setCentro(const QPoint& centro);
    void setRaio(int raio);

protected:
    QVector<QPoint>ajustarPontos(const Viewport &vp,const ObjWindow &window,bool desenhar) const override;
};

#endif // OBJCIRCULO_H
