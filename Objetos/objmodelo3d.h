#ifndef OBJMODELO3D_H
#define OBJMODELO3D_H

#include "objeto.h"
#include "leitorobj.h"
#include "ponto3d.h"
#include "matriz.h"
#include "viewport.h"
#include "Objetos/objwindow.h"
#include <QPainter>
#include <QString>

class ObjModelo3D : public Objeto {
public:
    ObjModelo3D(QString nome, const QString& caminhoOBJ, TipoObjeto tipo = Modelo3D);

    void desenhar(QPainter* painter, const Viewport& vp, const ObjWindow& window) const override;
    void transformar(const Matriz& transformacao) override;
    Ponto getPontoReferencia() const override;

    bool carregarModelo(const QString& caminhoOBJ);

private:
    QVector<Ponto3D> vertices;
    QVector<LeitorOBJ::Face> faces;
    LeitorOBJ leitor;

    // implementação obrigatória (classe base tem =0)
    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool desenhar) const override;

    QVector<QPoint> projetarVertices2D(const Viewport& vp, const ObjWindow& window) const;
};

#endif // OBJMODELO3D_H
