#include "objnathghostkiller.h"
#include "ponto.h"

// ----------------------------------------- Construtores e Destrutores -------------------------------------------
ObjNathGhostKiller::ObjNathGhostKiller(QString nome, int x, int y, TipoObjeto tipo) // Contrutor principal
    : Objeto(nome, tipo){
    /*
    * O instancimaneto mudou um pouco também, os objetos não requerem um nome de variável para serem declarados
    */
    objPrimitivos.append(new ObjCirculo ("cabeca", x+350, y+100, 70));
    objPrimitivos.append(new ObjCirculo ("olhoesquerdo", x+320, y+80, 30));
    objPrimitivos.append(new ObjCirculo ("olhodireito", x+380, y+80, 30));
    objPrimitivos.append(new ObjCirculo ("pupilaesquerda", x+325, y+80, 20));
    objPrimitivos.append(new ObjCirculo ("pupiladireita", x+375, y+80, 20));
    objPrimitivos.append(new ObjLinha ("bracoesquerdo", x+170, y+50, x+300, y+150));
    objPrimitivos.append(new ObjLinha ("bracodireito", x+525, y+50, x+400, y+150));
    objPrimitivos.append(new ObjLinha ("bocaladoesquerdo", x+310, y+130, x+350, y+150));
    objPrimitivos.append(new ObjLinha ("bocaladodireito", x+350, y+150, x+390, y+130));
}

/*
* Esse "ObjNathGhostKiller(QString nome) : ObjNathGhostKiller(nome, 0,0)" é para ser o equivalente de "this(0,0);"
* Que a gente viu em java
*/
ObjNathGhostKiller::ObjNathGhostKiller(QString nome) : ObjNathGhostKiller(nome, 0, 0){}//Construtor que delega para o principal

ObjNathGhostKiller::~ObjNathGhostKiller(){ //Destrutor, porque DE ACORDO COM IA precisa
    for(Objeto *obj: objPrimitivos){
        delete obj;
    }
}


// ------------------------ A partir daqui vemos os métodos--------------------------
const QVector<Objeto*>& ObjNathGhostKiller::getObjetos() const { //É importante cuidar da sintaxe, por causa dos "*"
    return objPrimitivos;
}

/*
* Método para o Objeto Complexo se auto desenhar
* O ObjNathGhostKiller não tem Polígonos, então esse teste de TipoObjeto == poligono não é necessario
* mas, como esse é um objeto para servir de base para os outros, eu vou deixar aqui para ajudar quem quer que tá lendo isso
*/
void ObjNathGhostKiller :: autorretrato(QPainter* painter) const{
    for (const Objeto* obj : getObjetos()) {
        if (obj->getTipo() == Linha) {
            painter->drawLine(obj->getPontos()[0].toQPoint(), obj->getPontos()[1].toQPoint());
        }
        else if (obj->getTipo() == Poligono) {
            QVector<QPoint> qpts;
            qpts.reserve(obj->getPontos().size());
            for (const Ponto &p : obj->getPontos()){
                qpts.append(p.toQPoint());
            }
            painter->drawPolygon(qpts);
        }
        else if (obj->getTipo() == Circulo) {
            QPoint centro = obj->getPontos()[0].toQPoint();
            int raio = (int)std::round(obj->getPontos()[1].x());
            painter->drawEllipse(centro, raio, raio);
        }
    }
}

