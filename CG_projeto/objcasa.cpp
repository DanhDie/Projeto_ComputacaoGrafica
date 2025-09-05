/*
#include "objcasa.h"

ObjCasa::ObjCasa(DisplayFile *df) {

    // Telhado - triângulo
    ObjTriangulo telhado("Telhado", 175, 400, 225, 400, 200, 360);
    df->adicionarObjeto(telhado);

    // Corpo - retângulo (polígono de 4 pontos)

    QPoint pontosCorpo[] = {
        QPoint(175, 400),
        QPoint(175, 460),
        QPoint(225, 460),
        QPoint(225, 400)
    };

    ObjPoligono corpoCasa("Corpo", pontosCorpo, 4, Poligono);
    df->adicionarObjeto(corpoCasa);

    // Janela - círculo
    ObjCirculo janela("Janela", 200, 386, 6);
    df->adicionarObjeto(janela);

    // Porta - retângulo (polígono de 4 pontos)

    QPoint pontosPorta[] = {
        QPoint(185, 425),
        QPoint(185, 460),
        QPoint(205, 460),
        QPoint(205, 425)
    };

    ObjPoligono porta("Porta", pontosPorta, 4, Poligono);
    df->adicionarObjeto(porta);

    // Maçaneta - círculo
    ObjCirculo macaneta("Macaneta", 190, 445, 3);
    df->adicionarObjeto(macaneta);

}
*/



#include "objcasa.h"

ObjCasa::ObjCasa(QString nome, int x, int y, TipoObjeto tipo)
    : Objeto(nome, tipo){

    // Instanciando

    //* Telhado (triângulo) *//
    objPrimitivos.append(new ObjTriangulo("Telhado", x+175, y+400, x+225, y+400, x+200, y+360));

    //* Corpo - retângulo (polígono de 4 pontos) *//

    QPoint pontosCorpo[] = {
        QPoint(x+175, y+400),
        QPoint(x+175, y+460),
        QPoint(x+225, y+460),
        QPoint(x+225, y+400)
    };

    objPrimitivos.append(new ObjPoligono ("Corpo", pontosCorpo, 4, Poligono));

    //* Janela - círculo *//
    objPrimitivos.append(new ObjCirculo ("Janela", x+200, y+386, 6));

    //* Porta - retângulo (polígono de 4 pontos) *//

    QPoint pontosPorta[] = {
        QPoint(x+185, y+425),
        QPoint(x+185, y+460),
        QPoint(x+205, y+460),
        QPoint(x+205, y+425)
    };

    objPrimitivos.append(new ObjPoligono ("Porta", pontosPorta, 4, Poligono));

    //* Maçaneta - círculo *//
    objPrimitivos.append(new ObjCirculo ("Macaneta", x+190, y+445, 3));

}

ObjCasa::ObjCasa(QString nome) : ObjCasa(nome, 0, 0){} //Construtor

ObjCasa::~ObjCasa(){ //Destrutor
    for(Objeto *obj: objPrimitivos){
        delete obj;
    }
}

const QVector<Objeto*>& ObjCasa::getObjetos() const {
    return objPrimitivos;
}

//Para se auto desenhar
void ObjCasa :: autorretrato(QPainter* painter) const{
    for (const Objeto* obj : getObjetos()) {
        if (obj->getTipo() == Linha) {
            painter->drawLine(obj->getPontos()[0], obj->getPontos()[1]);
        }
        else if (obj->getTipo() == Poligono) {
            painter->drawPolygon(obj->getPontos());
        }
        else if (obj->getTipo() == Circulo) {
            QPoint centro = obj->getPontos()[0];
            int raio = obj->getPontos()[1].x();
            painter->drawEllipse(centro, raio, raio);
        }
    }
}
