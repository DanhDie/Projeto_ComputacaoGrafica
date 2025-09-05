#include "objnathghostkiller.h"

/*
*   Na teoria tá tudo baseado em x e y, e se não tem parâmetro, inicializa na origem 0
*/
ObjNathGhostKiller::ObjNathGhostKiller(QString nome, int x, int y, TipoObjeto tipo)
    : Objeto(nome, tipo){ // Contrutor principal
    ObjCirculo circulo("cabeca", x+350, y+100, 70); //Instância de Objeto parte do desenho
    objPrimitivos.append(circulo); //Adiciona o dito objeto ao vetor do ObjNathGhostKiller

    ObjCirculo olho1("olhoesquerdo", x+320, y+80, 30);
    objPrimitivos.append(olho1);

    ObjCirculo olho2("olhodireito", x+380, y+80, 30);
    objPrimitivos.append(olho2);

    ObjCirculo pupila1("pupilaesquerda", x+325, y+80, 20);
    objPrimitivos.append(pupila1);

    ObjCirculo pupila2("pupiladireita", x+375, y+80, 20);
    objPrimitivos.append(pupila2);

    ObjLinha linha("bracoesquerdo", x+170, y+50, x+300, y+150);
    objPrimitivos.append(linha);

    ObjLinha linha1("bracodireito", x+525, y+50, x+400, y+150);
    objPrimitivos.append(linha1);

    ObjLinha boca("bocaladoesquerdo", x+310, y+130, x+350, y+150);
    objPrimitivos.append(boca);

    ObjLinha boca1("bocaladodireito", x+350, y+150, x+390, y+130);
    objPrimitivos.append(boca1);


}

/*
* Esse "ObjNathGhostKiller() : ObjNathGhostKiller(0,0)" é para ser o equivalente de "this(0,0);"
* Que a gente viu em java
*/
ObjNathGhostKiller::ObjNathGhostKiller(QString nome) : ObjNathGhostKiller(nome, 0, 0) {
    //Construtor que delega para o principal
}

const QVector<Objeto>& ObjNathGhostKiller::getObjetos() const {
    return objPrimitivos;
}

void ObjNathGhostKiller :: autoRetrato(QPainter* painter) const{
    for (const Objeto& obj : getObjetos()) {
        if (obj.getTipo() == Linha) {
            //if (obj.getPontos().size() >= 2) {
            painter->drawLine(obj.getPontos()[0], obj.getPontos()[1]);
            //}
        }
        else if (obj.getTipo() == Poligono) {
            //if (obj.getPontos().size() >= 3) {
            painter->drawPolygon(obj.getPontos());
            //}
        }
        else if (obj.getTipo() == Circulo) {
            //if (obj.getPontos().size() >= 2) {
            QPoint centro = obj.getPontos()[0];
            int raio = obj.getPontos()[1].x();
            painter->drawEllipse(centro, raio, raio);
            //}
        }
    }
}

