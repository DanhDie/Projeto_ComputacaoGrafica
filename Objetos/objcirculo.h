#ifndef OBJCIRCULO_H
#define OBJCIRCULO_H

#include "Objeto.h"

class ObjCirculo : public Objeto
{
public:
    ObjCirculo(QString nome, Ponto3D centro, int raio, TipoObjeto tipo = Circulo);
    void desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window, int modoP) const override;
    void transformar(const Matriz& transformacao) override;
    Ponto3D getPontoReferencia() const override;

    // Métodos adicionais para círculo
    QPoint getCentro() const;
    int getRaio() const;
    void setCentro(const QPoint& centro);
    void setRaio(int raio);

protected:
    QVector<QPoint>ajustarPontos(const Viewport &vp,const ObjWindow &window,bool &desenhar) const override;
};

#endif // OBJCIRCULO_H
