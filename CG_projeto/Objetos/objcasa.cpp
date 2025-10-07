/*
#include "objcasa.h"

ObjCasa::ObjCasa(DisplayFile *df) {

    // Telhado - triângulo
    ObjTriangulo telhado("Telhado", 175, 400, 225, 400, 200, 360);
    df->adicionarObjeto(telhado);

    // Corpo - retângulo (polígono de 4 pontos)

    Ponto pontosCorpo[] = {
        Ponto(175, 400),
        Ponto(175, 460),
        Ponto(225, 460),
        QPoint(225, 400)
    };

    ObjPoligono corpoCasa("Corpo", pontosCorpo, 4, Poligono);
    df->adicionarObjeto(corpoCasa);

    // Janela - círculo
    ObjCirculo janela("Janela", 200, 386, 6);
    df->adicionarObjeto(janela);

    // Porta - retângulo (polígono de 4 pontos)

    Ponto pontosPorta[] = {
        Ponto(185, 425),
        Ponto(185, 460),
        Ponto(205, 460),
        Ponto(205, 425)
    };

    ObjPoligono porta("Porta", pontosPorta, 4, Poligono);
    df->adicionarObjeto(porta);

    // Maçaneta - círculo
    ObjCirculo macaneta("Macaneta", 190, 445, 3);
    df->adicionarObjeto(macaneta);

}
*/



#include "objcasa.h"
#include "ponto.h"

ObjCasa::ObjCasa(QString nome, int x, int y, TipoObjeto tipo)
    : Objeto(nome, tipo){

    // Instanciando

    //* Telhado (triângulo) *//
    objPrimitivos.append(new ObjTriangulo("Telhado", x+175, y+400, x+225, y+400, x+200, y+360));

    //* Corpo - retângulo (polígono de 4 pontos) *//

    Ponto pontosCorpo[] = {
        Ponto(x+175, y+400),
        Ponto(x+175, y+460),
        Ponto(x+225, y+460),
        Ponto(x+225, y+400)
    };

    objPrimitivos.append(new ObjPoligono ("Corpo", pontosCorpo, 4, Poligono));

    //* Janela - círculo *//
    objPrimitivos.append(new ObjCirculo ("Janela", x+200, y+386, 6));

    //* Porta - retângulo (polígono de 4 pontos) *//

    Ponto pontosPorta[] = {
        Ponto(x+185, y+425),
        Ponto(x+185, y+460),
        Ponto(x+205, y+460),
        Ponto(x+205, y+425)
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

const QVector<Objeto*> ObjCasa::getObjetos() const {
    return objPrimitivos;
}

//Para se auto desenhar
void ObjCasa :: desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const{
    for (const Objeto* obj : getObjetos()) {
        obj->desenhar(painter,vp,window);
    }
}

void ObjCasa::transformar(const Matriz& transformacao) {
    for (Objeto* obj : objPrimitivos) {
        obj->transformar(transformacao);
    }
}

Ponto ObjCasa::getPontoReferencia() const {
    QVector<Objeto*> subs = this->getObjetos();
    if (subs.isEmpty()) {
        return Ponto(0, 0);
    }

    double somaX = 0.0, somaY = 0.0;
    for (Objeto* sub : subs) {
        Ponto refSub = sub->getPontoReferencia(); // Chama a função virtual recursivamente!
        somaX += refSub.x();
        somaY += refSub.y();
    }
    return Ponto(somaX / subs.size(), somaY / subs.size());
}
