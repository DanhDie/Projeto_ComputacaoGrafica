#ifndef OBJETO_H
#define OBJETO_H

#include <QPainter>
#include <QString>
#include <QPoint>
#include <QVector>
#include "ponto.h"

enum TipoObjeto {
    Linha,
    Poligono,
    Circulo,
    Complexo
};

class Objeto {
public:
    Objeto(QString nome, TipoObjeto tipo);

    virtual ~Objeto() = default;
    void adicionarPonto(const Ponto& p);
    QString getNome() const;
    TipoObjeto getTipo() const;
    QVector<Ponto> getPontos() const;
    virtual void autorretrato(QPainter *painter) const;
    /*
     * Essa VIADAGEM de "const" no final serve para informar ao compilador BURRO que não sabe que a função não muda nada que
     * ADIVINHA? ELA NÃO MUDA NADA
     */

    void aplicarTransformacao(const Matriz& transformacao);
    virtual const QVector<Objeto*>& getObjetos() const;
    virtual void transformar(const Matriz& transformacao);

private:
    QString nome;
    TipoObjeto tipo;
protected:
    QVector<Ponto> pontos;  // para círculos: pontos[0] = centro, pontos[1].x() = raio
};

#endif // OBJETO_H
