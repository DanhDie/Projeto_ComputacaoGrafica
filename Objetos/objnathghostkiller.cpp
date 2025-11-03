#include "objnathghostkiller.h"
#include "ponto3d.h"
#include "objcirculo.h"
#include "objlinha.h"

// ----------------------------------------- Construtores e Destrutores -------------------------------------------

ObjNathGhostKiller::ObjNathGhostKiller(QString nome, double x, double y, double z, TipoObjeto tipo)
    : Objeto(nome, tipo)
{
    /*
    * O instanciamento mudou um pouco também, os objetos não requerem um nome de variável para serem declarados
    * Agora todos os pontos têm coordenadas 3D (x, y, z)
    */
    objPrimitivos.append(new ObjCirculo("cabeca", Ponto3D(x + 350, y + 100, z), 70));
    objPrimitivos.append(new ObjCirculo("olhoesquerdo", Ponto3D(x + 320, y + 80, z), 30));
    objPrimitivos.append(new ObjCirculo("olhodireito", Ponto3D(x + 380, y + 80, z), 30));
    objPrimitivos.append(new ObjCirculo("pupilaesquerda", Ponto3D(x + 325, y + 80, z), 20));
    objPrimitivos.append(new ObjCirculo("pupiladireita", Ponto3D(x + 375, y + 80, z), 20));
    objPrimitivos.append(new ObjLinha("bracoesquerdo", Ponto3D(x + 170, y + 50, z), Ponto3D(x + 300, y + 150, z)));
    objPrimitivos.append(new ObjLinha("bracodireito", Ponto3D(x + 525, y + 50, z), Ponto3D(x + 400, y + 150, z)));
    objPrimitivos.append(new ObjLinha("bocaladoesquerdo", Ponto3D(x + 310, y + 130, z), Ponto3D(x + 350, y + 150, z)));
    objPrimitivos.append(new ObjLinha("bocaladodireito", Ponto3D(x + 350, y + 150, z), Ponto3D(x + 390, y + 130, z)));
}

/*
* Esse "ObjNathGhostKiller(QString nome) : ObjNathGhostKiller(nome, 0,0,0)" é para ser o equivalente de "this(0,0,0);"
* Que a gente viu em Java
*/
ObjNathGhostKiller::ObjNathGhostKiller(QString nome)
    : ObjNathGhostKiller(nome, 0, 0, 0) {} // Construtor que delega para o principal


ObjNathGhostKiller::~ObjNathGhostKiller() { // Destrutor
    for (Objeto* obj : objPrimitivos) {
        delete obj;
    }
}


// ------------------------ Métodos principais --------------------------

const QVector<Objeto*> ObjNathGhostKiller::getObjetos() const {
    return objPrimitivos;
}

void ObjNathGhostKiller::desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const {
    for (const Objeto* obj : getObjetos()) {
        obj->desenhar(painter, vp, window);
    }
}

void ObjNathGhostKiller::transformar(const Matriz& transformacao) {
    for (Objeto* obj : objPrimitivos) {
        obj->transformar(transformacao);
    }
}

// Ajusta os pontos de todos os objetos para a viewport
QVector<QPoint> ObjNathGhostKiller::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const {
    QVector<QPoint> pontos;
    for (const Objeto* obj : objPrimitivos) {
        pontos += obj->projetar(vp, window, desenhar);
    }
    return pontos;
}

// Calcula o ponto de referência (média 3D dos subobjetos)
Ponto3D ObjNathGhostKiller::getPontoReferencia() const {
    if (objPrimitivos.isEmpty()) return Ponto3D(0, 0, 0);

    double somaX = 0.0, somaY = 0.0, somaZ = 0.0;
    for (Objeto* sub : objPrimitivos) {
        Ponto3D refSub = sub->getPontoReferencia(); // Chama recursivamente
        somaX += refSub.x();
        somaY += refSub.y();
        somaZ += refSub.z();
    }

    return Ponto3D(somaX / objPrimitivos.size(), somaY / objPrimitivos.size(), somaZ / objPrimitivos.size());
}
