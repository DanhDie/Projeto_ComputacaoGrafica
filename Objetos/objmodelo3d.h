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
#include <Objetos/ponto.h>
#include <QPolygon>

class ObjModelo3D : public Objeto {
    int modoP = 0; // 0 = ortogonal, 1 = perspectiva
public:
    ObjModelo3D(QString nome, const QString& caminhoOBJ, TipoObjeto tipo = Modelo3D);

    void desenhar(QPainter* painter, const Viewport& vp, const ObjWindow& window, int modoP) const override;
    void transformar(const Matriz& transformacao) override;
    Ponto3D getPontoReferencia() const override;

    bool carregarModelo(const QString& caminhoOBJ);

private:
    QVector<Ponto3D> vertices;
    QVector<LeitorOBJ::Face> faces;
    LeitorOBJ leitor;

    // Infelizmente, devido à implementação de objetos 3D, a ajustarPontos retorna um valor incompatível
    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool& desenhar) const;
    QVector<QPolygon> processarPontos(const Viewport &vp, const ObjWindow &window, bool& desenhar, int modoP) const;
};

#endif // OBJMODELO3D_H
