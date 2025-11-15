#ifndef OBJETO_H
#define OBJETO_H

#include <QString>
#include <QPoint>
#include <QVector>
#include "viewport.h"
#include "ponto3d.h"

//Fowarding declaration
//#include : informa que ESTE arquivo tem que incluir o .h e .cpp inteirinho dos arquivos citados
//Gasto desnecessário de memória quando você só tá referenciando um tipo, e não usando ele e seus métodos diretamente.
class QPainter;


enum TipoObjeto {
    Linha,
    Poligono,
    Circulo,
    Complexo,
    Modelo3D
};

class ObjWindow;
class QPainter;

class Objeto {
public:
    Objeto(QString nome, TipoObjeto tipo);

    virtual ~Objeto() = default;
    void adicionarPonto(const Ponto3D& p);
    QString getNome() const;
    TipoObjeto getTipo() const;
    QVector<Ponto3D> getPontos() const;
    virtual Ponto3D getPontoReferencia() const;
    virtual const QVector<Objeto*> getObjetos() const;

    virtual void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window, int modoP) const =0;
    virtual void transformar(const Matriz& transformacao);


    QVector<QPoint> projetar(const Viewport &vp, const ObjWindow &window, bool &desenhar) const {
        return ajustarPontos(vp, window, desenhar);
    }


private:
    QString nome;

protected:
    TipoObjeto tipo;
    QVector<Ponto3D> pontos;  // para círculos: pontos[0] = centro, pontos[1].x() = raio

    virtual QVector<QPoint>ajustarPontos(const Viewport &vp,const ObjWindow &window,bool &desenhar) const = 0;
};

#endif // OBJETO_H
