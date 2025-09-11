#include "objtriangulo.h"
#include "ponto.h"

ObjTriangulo::ObjTriangulo(QString nome, int priX, int priY, int segX, int segY, int terX, int terY, TipoObjeto tipo)
    : Objeto (nome, tipo){
        /*
         * Dependendo dos pontos que você coloca a orientação do triângulo muda,
         * brinque a vontade com isso;
        */
        adicionarPonto(Ponto(priX,priY));
        adicionarPonto(Ponto(segX,segY));
        adicionarPonto(Ponto(terX,terY));
}
