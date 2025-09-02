#include "objtriangulo.h"

ObjTriangulo::ObjTriangulo(QString nome, int priX, int priY, int segX, int segY, int terX, int terY, TipoObjeto tipo)
    : Objeto (nome, tipo){
        /*
         * Dependendo dos pontos que você coloca a orientação do triângulo muda,
         * brinque a vontade com isso;
        */
        adicionarPonto(QPoint(priX,priY));
        adicionarPonto(QPoint(segX,segY));
        adicionarPonto(QPoint(terX,terY));
}
