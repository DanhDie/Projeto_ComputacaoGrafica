/*
#include "sol.h"

Sol::Sol(DisplayFile *df) {
    ObjCirculo circulob("solin", 550, 350, 50); //Instância de Objeto parte do desenho
    df->adicionarObjeto(circulob); //Adiciona o dito objeto ao DisplayFile

    ObjTriangulo raio1("ray1", 550, 450, 560, 410, 540, 410);
    df->adicionarObjeto(raio1);

    ObjTriangulo raio2("ray2", 500, 437, 529, 407, 511, 397);
    df->adicionarObjeto(raio2);

    ObjTriangulo raio3("ray3", 463, 400, 503, 389, 493, 371);
    df->adicionarObjeto(raio3);

    ObjTriangulo raio4("ray4", 450, 350, 490, 360, 490, 340);
    df->adicionarObjeto(raio4);

    ObjTriangulo raio5("ray5", 463, 300, 493, 329, 503, 311);
    df->adicionarObjeto(raio5);

    ObjTriangulo raio6("ray6", 500, 263, 511, 303, 529, 293);
    df->adicionarObjeto(raio6);

    ObjTriangulo raio7("ray7", 550, 250, 540, 290, 560, 290);
    df->adicionarObjeto(raio7);

    ObjTriangulo raio8("ray8", 600, 263, 571, 293, 589, 303);
    df->adicionarObjeto(raio8);

    ObjTriangulo raio9("ray9", 637, 300, 597, 311, 607, 329);
    df->adicionarObjeto(raio9);

    ObjTriangulo raio10("ray10", 650, 350, 610, 340, 610, 360);
    df->adicionarObjeto(raio10);

    ObjTriangulo raio11("ray11", 637, 400, 607, 371, 597, 389);
    df->adicionarObjeto(raio11);

    ObjTriangulo raio12("ray12", 600, 437, 589, 397, 571, 407);
    df->adicionarObjeto(raio12);
}
*/



#include "sol.h"

Sol::Sol(QString nome, int x, int y, TipoObjeto tipo) //construtor
    : Objeto(nome, tipo){

    //Instanciando

    objPrimitivos.append(new ObjCirculo("solin", x+550, y+350, 50));

    objPrimitivos.append(new ObjTriangulo("ray1", x+550, y+450, x+560, y+410, x+540, y+410));
    objPrimitivos.append(new ObjTriangulo("ray2", x+500, y+437, x+529, y+407, x+511, y+397));
    objPrimitivos.append(new ObjTriangulo("ray3", x+463, y+400, x+503, y+389, x+493, y+371));
    objPrimitivos.append(new ObjTriangulo("ray4", x+450, y+350, x+490, y+360, x+490, y+340));
    objPrimitivos.append(new ObjTriangulo("ray5", x+463, y+300, x+493, y+329, x+503, y+311));
    objPrimitivos.append(new ObjTriangulo("ray6", x+500, y+263, x+511, y+303, x+529, y+293));
    objPrimitivos.append(new ObjTriangulo("ray7", x+550, y+250, x+540, y+290, x+560, y+290));
    objPrimitivos.append(new ObjTriangulo("ray8", x+600, y+263, x+571, y+293, x+589, y+303));
    objPrimitivos.append(new ObjTriangulo("ray9", x+637, y+300, x+597, y+311, x+607, y+329));
    objPrimitivos.append(new ObjTriangulo("ray10", x+650, y+350, x+610, y+340, x+610, y+360));
    objPrimitivos.append(new ObjTriangulo("ray11", x+637, y+400, x+607, y+371, x+597, y+389));
    objPrimitivos.append(new ObjTriangulo("ray12", x+600, y+437, x+589, y+397, x+571, y+407));

}

Sol::Sol(QString nome) : Sol(nome, 0, 0){} //construtor

Sol::~Sol(){ //Destrutor
    for(Objeto *obj: objPrimitivos){
        delete obj;
    }
}

const QVector<Objeto*>& Sol::getObjetos() const {
    return objPrimitivos;
}


void Sol :: autorretrato(QPainter* painter) const{
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
