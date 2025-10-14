#ifndef OBJNATHGHOSTKILLER_H
#define OBJNATHGHOSTKILLER_H

#include <QVector>
#include <QPainter>

#include "displayfile.h"
#include "objlinha.h"
#include "objcirculo.h"

class ObjNathGhostKiller : public Objeto //herda Objeto para poder se encaixar no DisplayFile
{
public:
    ObjNathGhostKiller(QString nome, int x, int y, TipoObjeto tipo = Complexo); //Construtor principal
    ObjNathGhostKiller(QString nome); //Sobrecarga de método, construtor sem parâmetro para (x,y) usa (0,0)
    ~ObjNathGhostKiller();

    const QVector<Objeto*> getObjetos() const; //método para pegar os objetos para desenhar
    void desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const override;
    void transformar(const Matriz& transformacao) override;
    Ponto getPontoReferencia() const override;

protected:
    QVector<QPoint>ajustarPontos(const Viewport &vp,const ObjWindow &window,bool desenhar) const override;

private:
    QVector<Objeto*> objPrimitivos; //Vetor dos objetos primitivos contidos dentro desse objeto
};

#endif // OBJNATHGHOSTKILLER_H
