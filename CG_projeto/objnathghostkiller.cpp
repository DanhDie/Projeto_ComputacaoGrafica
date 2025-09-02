#include "objnathghostkiller.h"

ObjNathGhostKiller::ObjNathGhostKiller(DisplayFile *df) {
    ObjCirculo circulo("cabeca", 350, 100, 70); //Instância de Objeto parte do desenho
    df->adicionarObjeto(circulo); //Adiciona o dito objeto ao DisplayFile

    ObjCirculo olho1("olhoesquerdo", 320, 80, 30);
    df->adicionarObjeto(olho1);

    ObjCirculo olho2("olhodireito", 380, 80, 30);
    df->adicionarObjeto(olho2);

    ObjCirculo pupila1("pupilaesquerda", 325, 80, 20);
    df->adicionarObjeto(pupila1);

    ObjCirculo pupila2("pupiladireita", 375, 80, 20);
    df->adicionarObjeto(pupila2);

    ObjLinha linha("bracoesquerdo", 170, 50, 300, 150);
    df->adicionarObjeto(linha);

    ObjLinha linha1("bracodireito", 525, 50, 400, 150);
    df->adicionarObjeto(linha1);

    ObjLinha boca("bocaladoesquerdo", 310, 130, 350, 150);
    df->adicionarObjeto(boca);

    ObjLinha boca1("bocaladodireito", 350, 150, 390, 130);
    df->adicionarObjeto(boca1);
}
