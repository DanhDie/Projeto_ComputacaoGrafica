#ifndef OBJLINHA_H
#define OBJLINHA_H

#include "Objeto.h"
#include <QString>
#include <QPoint>
#include <QVector>
#include "ponto3d.h"

class ObjLinha : public Objeto
// Neste contexto, ":" indica herança da classe Objeto, para o ObjLinha
{
public:
    // Construtor recebe dois pontos 3D
    ObjLinha(QString nome, const Ponto3D& p1, const Ponto3D& p2);

    void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window, int modoP) const override;
    Ponto3D getPontoReferencia() const override;

protected:
    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const;
};
#endif // OBJLINHA_H
