#include "objpoligono.h"
#include "ponto.h"

ObjPoligono::ObjPoligono(QString nome, const Ponto* pontos, int quantidade, TipoObjeto tipo)
    : Objeto(nome, tipo)
{
    for (int i = 0; i < quantidade; ++i) {
        adicionarPonto(pontos[i]);
    }
}
