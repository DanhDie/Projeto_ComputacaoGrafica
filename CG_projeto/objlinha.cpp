#include "ObjLinha.h"
#include "ponto.h"

// ":" Neste contexto significa inicialização; O ObjLinha inicializa a si mesmo e instância um Objeto
// para guardar seu nome e pontos
ObjLinha::ObjLinha(QString nome, int priX, int priY, int segX, int segY, TipoObjeto tipo)
    : Objeto(nome, tipo){
        adicionarPonto(Ponto(priX, priY));
        adicionarPonto(Ponto(segX, segY));
}
