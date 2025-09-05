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
