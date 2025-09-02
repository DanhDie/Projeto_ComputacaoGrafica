#include "objcirculo.h"

ObjCirculo::ObjCirculo(QString nome, int cenX, int cenY, int raio, TipoObjeto tipo)
    : Objeto (nome, tipo){
        adicionarPonto(QPoint(cenX, cenY)); //Ponto central
        adicionarPonto(QPoint(raio, 0));    //Raio do circulo
}
