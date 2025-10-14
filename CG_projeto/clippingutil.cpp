#include "clippingutil.h"
#include "QWidget"
void Clipping::calcularRC(const Ponto& p, int RC[4], const ObjWindow& window){
    if(p.y()<window.getYmin()) RC[0]=1; //Borda superior, minY porque y é invertido
    if(p.y()>window.getYmax()) RC[1]=1; //Borda inferior, maxY porque y é invertido

    if(p.x()>window.getXmax()) RC[2]=1; //Borda Direita
    if(p.x()<window.getXmin()) RC[3]=1; //Borda Esquerda

    return;
}

void Clipping::calcularClipping(Ponto &p, double m, int RC[4], const ObjWindow& window){
    //Variaveis para armazenar o resultado
    double x=p.x();
    double y=p.y();

    if(RC[0]){ // Borda superior
        y = window.getYmin();
        x = p.x() + ((1/m) * (window.getYmin() - p.y()));
    }
    if(RC[1]){// Borda inferior
        y = window.getYmax();
        x = p.x() + ((1/m) * (window.getYmax() - p.y()));
    }
    if(RC[2]){ // Borda direita
        x = window.getXmax();
        y = (m * (window.getXmax() - p.x())) + p.y();
    }
    if(RC[3]){ // Borda esquerda
        x = window.getXmin();
        y = (m * (window.getXmin() - p.x())) + p.y();
    }

    p.setX(x);
    p.setY(y);

    return;
}

bool Clipping::cohenSutherland(Ponto& p1, Ponto& p2, const ObjWindow& window){
    //Region Codes do algoritmo Cohen-Sutherland, todas as casas inicializam com 0
    int RC1[4]={0};
    int RC2[4]={0};

    // Cálculo para os dois pontos
    calcularRC(p1,RC1,window);
    calcularRC(p2,RC2,window);
    //RC completo, agora basta calcular clipping


    //CASO todos RC == 0 : Nada a fazer
    bool p1Dentro = (RC1[0]==0 && RC1[1]==0 && RC1[2]==0 && RC1[3]==0);
    bool p2Dentro = (RC2[0]==0 && RC2[1]==0 && RC2[2]==0 && RC2[3]==0);

    if (p1Dentro && p2Dentro) {
        return true;
    }

    //CASO todos RC == 1 : Não desenhar
    for (int i = 0; i < 4; ++i) {
        if (RC1[i] == 1 && RC2[i] == 1) {
            return false;
        }
    }

    //Se não caiu no caso anterior, então alguma casa de RC == 1. Qual?
    //Começa calculando o coeficiente angular
    double m = (p2.y() - p1.y()) / (p2.x() - p1.x());

    calcularClipping(p1,m,RC1,window);
    calcularClipping(p2,m,RC2,window);

    return true;
}
