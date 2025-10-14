#include "clippingutil.h"

void Clipping::cohenSutherland(Ponto& p1, Ponto& p2, ObjWindow& window){
    int RC[4]={0}; //Region Codes do algoritmo Cohen-Sutherland, todas as casas inicializam com 0

    if(p1->y()<window.getYmin()) RC[0]=1; //Borda superior, minY porque y é invertido
    if(p1->y()>window.getYmax()) RC[1]=1; //Borda inferior, maxY porque y é invertido

    if(p1->x()>window.getXmax()) RC[2]=1; //Borda Direita
    if(p1->x()<window.getXmin()) RC[3]=1; //Borda Esquerda
    //RC completo, agora basta calcular clipping


    //CASO todos RC == 0 : Nada a fazer
    if(!RC[0] && !RC[1] && !RC[2] && !RC[3]) return;

    //Se não caiu no caso anterior, então alguma casa de RC == 1. Qual?
    //Começa calculando o coeficiente angular
    double m = (p2.y() - p1.y()) / (p2.x() - p1.x());
    double x,y; //Variaveis para armazenar o resultado

    if(RC[0]){ // Borda superior
        x = p1.x() + ((1/m) * (window.getYmin() - p1.y()));
    }
    if(RC[1]){// Borda inferior
        x = p1.x() + ((1/m) * (window.getYmax() - p1.y()));
    }
    if(RC[2]){ // Borda direita
        y = (m * (window.getXmax() - p1.x())) + p1.y();
    }
    if(RC[3]){ // Borda esquerda
        y = (m * (window.getXmin() - p1.x())) + p1.y();
    }
    //Aplica a equação de clipping DE ACORDO com a sua respectiva casa do RC
    //Atribui valor
    //return
}

bool Clipping::comparaResultado(double resultado, double min, double max){
    if(resultado>min && resultado<max){
        return true;
    }
    else{
        return false;
    }
}
