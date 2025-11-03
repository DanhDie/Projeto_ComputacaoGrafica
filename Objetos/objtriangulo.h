#ifndef OBJTRIANGULO_H
#define OBJTRIANGULO_H

#include "objeto.h"
#include "ponto3d.h"
#include "viewport.h"
#include "objwindow.h"

class ObjTriangulo : public Objeto
{
public:
    // Construtor: recebe 3 pontos 3D
    ObjTriangulo(QString nome,
                 const Ponto3D& p1, const Ponto3D& p2, const Ponto3D& p3,
                 TipoObjeto tipo = TipoObjeto::Poligono);

    // Desenha o triângulo (projetando 3D -> 2D)
    void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const override;

    // Ajusta os pontos para a viewport (projeção 3D -> 2D)
    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const;

    // Retorna ponto de referência (centro da caixa delimitadora 3D)
    Ponto3D getPontoReferencia() const override;
};

#endif // OBJTRIANGULO_H
