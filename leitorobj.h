#ifndef LEITOROBJ_H
#define LEITOROBJ_H

#include <QString>
#include <QVector>
#include "ponto3d.h"

class LeitorOBJ {
public:
    struct Face {
        QVector<int> indices; // índices dos vértices que formam a face
    };

    LeitorOBJ() = default;

    bool carregarArquivo(const QString& caminho);

    const QVector<Ponto3D>& getVertices() const;
    const QVector<Face>& getFaces() const;

private:
    QVector<Ponto3D> vertices;
    QVector<Face> faces;
};

#endif // LEITOROBJ_H
