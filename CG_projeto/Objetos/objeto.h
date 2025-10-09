#ifndef OBJETO_H
#define OBJETO_H

#include <QString>
#include <QPoint>
#include <QVector>
#include "ponto.h"
#include "viewport.h"

//Fowarding declaration
//#include : informa que ESTE arquivo tem que incluir o .h e .cpp inteirinho dos arquivos citados
//Gasto desnecessário de memória quando você só tá referenciando um tipo, e não usando ele e seus métodos diretamente.
class QPainter;


enum TipoObjeto {
    Linha,
    Poligono,
    Circulo,
    Complexo
};

class ObjWindow;
class QPainter;

class Objeto {
public:
    Objeto(QString nome, TipoObjeto tipo);

    virtual ~Objeto() = default;
    void adicionarPonto(const Ponto& p);
    QString getNome() const;
    TipoObjeto getTipo() const;
    QVector<Ponto> getPontos() const;
    virtual Ponto getPontoReferencia() const;
    virtual const QVector<Objeto*> getObjetos() const;

    virtual void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const =0;
    virtual void transformar(const Matriz& transformacao);
    void clipping(Ponto *p, ObjWindow &window);

private:
    QString nome;
    TipoObjeto tipo;
protected:
    QVector<Ponto> pontos;  // para círculos: pontos[0] = centro, pontos[1].x() = raio

    QVector<QPoint>ajustarPontos(const Viewport &vp,const ObjWindow &window) const;
};

#endif // OBJETO_H
