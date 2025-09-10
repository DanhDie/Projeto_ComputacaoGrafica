#include "objcirculo.h"
#include "ponto.h"

ObjCirculo::ObjCirculo(QString nome, int cenX, int cenY, int raio, TipoObjeto tipo)
    : Objeto (nome, tipo){
        adicionarPonto(Ponto(cenX, cenY)); //Ponto central
        adicionarPonto(Ponto(raio, 0));    //Raio do circulo
}
