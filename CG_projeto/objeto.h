#ifndef OBJETO_H
#define OBJETO_H

#include <QString>
#include <QPoint>
#include <QVector>

enum TipoObjeto {
    Linha,
    Poligono,
    Circulo
};

class Objeto {
public:
    Objeto(QString nome, TipoObjeto tipo);

    void adicionarPonto(const QPoint& p);
    QString getNome() const;
    TipoObjeto getTipo() const;
    QVector<QPoint> getPontos() const;

private:
    QString nome;
    TipoObjeto tipo;
    QVector<QPoint> pontos;  // para círculos: pontos[0] = centro, pontos[1].x() = raio
};

#endif // OBJETO_H
