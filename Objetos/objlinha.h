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

    void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const override;
    Ponto3D getPontoReferencia() const override;

protected:
    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const;

    // Função interna para retornar pontos 3D
    QVector<Ponto3D> getPontos3D() const { return pontos3D; }

private:
    QVector<Ponto3D> pontos3D; // Armazena os pontos da linha em 3D
};
#endif // OBJLINHA_H
