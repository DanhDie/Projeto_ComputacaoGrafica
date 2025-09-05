#ifndef OBJETO_H
#define OBJETO_H

#include <QPainter>
#include <QString>
#include <QPoint>
#include <QVector>

enum TipoObjeto {
    Linha,
    Poligono,
    Circulo,
    Complexo
};

class Objeto {
public:
    Objeto(QString nome, TipoObjeto tipo);

    void adicionarPonto(const QPoint& p);
    QString getNome() const;
    TipoObjeto getTipo() const;
    QVector<QPoint> getPontos() const;
    virtual void autoRetrato(QPainter *painter) const;
    /*
     * Essa VIADAGEM de "const" no final serve para informar ao compilador BURRO que não sabe que a função não muda nada que
     * ADIVINHA? ELA NÃO MUDA NADA
     */
private:
    QString nome;
    TipoObjeto tipo;
    QVector<QPoint> pontos;  // para círculos: pontos[0] = centro, pontos[1].x() = raio
};

#endif // OBJETO_H
