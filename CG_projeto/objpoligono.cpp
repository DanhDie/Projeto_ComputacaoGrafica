#include "objpoligono.h"

ObjPoligono::ObjPoligono(QString nome, const QPoint* pontos, int quantidade, TipoObjeto tipo)
    : Objeto(nome, tipo)
{
    for (int i = 0; i < quantidade; ++i) {
        adicionarPonto(pontos[i]);
    }
}
