#ifndef OBJNATHGHOSTKILLER_H
#define OBJNATHGHOSTKILLER_H

#include <QVector>
#include <QPainter>

#include "displayfile.h"
#include "objlinha.h"
#include "objcirculo.h"
#include "ponto3d.h"

class ObjNathGhostKiller : public Objeto // herda Objeto para poder se encaixar no DisplayFile
{
public:
    ObjNathGhostKiller(QString nome, double x, double y, double z = 0.0, TipoObjeto tipo = Complexo);
    // Construtor principal em 3D

    ObjNathGhostKiller(QString nome);
    // Sobrecarga de método: construtor sem parâmetros de posição usa (0, 0, 0)

    ~ObjNathGhostKiller();
    // Destrutor, porque DE ACORDO COM IA precisa

    const QVector<Objeto*> getObjetos() const;
    // método para pegar os objetos para desenhar

    void desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const override;
    // método que desenha o objeto e seus componentes

    void transformar(const Matriz& transformacao) override;
    // aplica transformações (translação, rotação, escala) em todos os sub-objetos

    Ponto3D getPontoReferencia() const override;
    // retorna o ponto médio entre os pontos de referência dos objetos primitivos

    QVector<QPoint> ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const;
    // agora em 3D → ainda retorna QPoint pois a Viewport projeta 3D → 2D para desenhar

private:
    QVector<Objeto*> objPrimitivos;
    // Vetor dos objetos primitivos contidos dentro desse objeto
};

#endif // OBJNATHGHOSTKILLER_H
