#include "clippingutil.h"
#include "QWidget"

void Clipping::calcularRC(const Ponto& p, int RC[4]){
    const double Xmin = 0.0, Xmax = 1.0;
    const double Ymin = 0.0, Ymax = 1.0;
    if(p.y()<Ymin) RC[0]=1; //Borda superior, minY porque y é invertido
    if(p.y()>Ymax) RC[1]=1; //Borda inferior, maxY porque y é invertido

    if(p.x()>Xmax) RC[2]=1; //Borda Direita
    if(p.x()<Xmin) RC[3]=1; //Borda Esquerda

    return;
}

void Clipping::calcularClipping(Ponto &p, double m, int RC[4]){
    const double Xmin = 0.0, Xmax = 1.0;
    const double Ymin = 0.0, Ymax = 1.0;
    //Variaveis para armazenar o resultado
    double x=p.x();
    double y=p.y();

    if(RC[0]){ // Borda superior
        y = Ymin;
        x = p.x() + ((1/m) * (y - p.y()));
    }
    if(RC[1]){// Borda inferior
        y = Ymax;
        x = p.x() + ((1/m) * (y - p.y()));
    }
    if(RC[2]){ // Borda direita
        x = Xmax;
        y = (m * (x - p.x())) + p.y();
    }
    if(RC[3]){ // Borda esquerda
        x = Xmin;
        y = (m * (x - p.x())) + p.y();
    }

    p.setX(x);
    p.setY(y);

    return;
}

bool Clipping::cohenSutherland(Ponto& p1, Ponto& p2){
    //Region Codes do algoritmo Cohen-Sutherland, todas as casas inicializam com 0
    int RC1[4]={0};
    int RC2[4]={0};

    // Cálculo para os dois pontos
    calcularRC(p1,RC1);
    calcularRC(p2,RC2);
    //RC completo, agora basta calcular clipping


    //CASO todos RC == 0 : Nada a fazer
    bool p1Dentro = (RC1[0]==0 && RC1[1]==0 && RC1[2]==0 && RC1[3]==0);
    bool p2Dentro = (RC2[0]==0 && RC2[1]==0 && RC2[2]==0 && RC2[3]==0);

    if (p1Dentro && p2Dentro) {
        return true;
    }

    //CASO todos RC == 1 : Não desenhar
    bool rejeitar = true;
    for (int i = 0; i < 4; ++i) {
        if (!(RC1[i] && RC2[i])) {
            rejeitar = false;
            break;
        }
    }
    if (rejeitar) return false;


    //Se não caiu no caso anterior, então alguma casa de RC == 1. Qual?
    //Começa calculando o coeficiente angular
    double m = (p2.y() - p1.y()) / (p2.x() - p1.x());

    calcularClipping(p1,m,RC1);
    calcularClipping(p2,m,RC2);

    return true;
}

// Implementação do clipping de polígonos usando Sutherland-Hodgman
bool Clipping::clipPoligono(const QVector<Ponto>& poligonoEntrada, QVector<Ponto>& poligonoSaida) {
    if (poligonoEntrada.size() < 3) {
        return false; // Polígono inválido
    }

    QVector<Ponto> listaAtual = poligonoEntrada;
    QVector<Ponto> listaProxima;

    // Clipping contra as 4 bordas da window normalizada (-1 a 1)
    // Borda esquerda (x = -1)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 1, -1.0, true); // ESQUERDA = 1
    listaAtual = listaProxima;
    listaProxima.clear();

    if (listaAtual.size() < 3) return false;

    // Borda direita (x = 1)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 2, 1.0, true); // DIREITA = 2
    listaAtual = listaProxima;
    listaProxima.clear();

    if (listaAtual.size() < 3) return false;

    // Borda inferior (y = -1)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 4, -1.0, false); // ABAIXO = 4
    listaAtual = listaProxima;
    listaProxima.clear();

    if (listaAtual.size() < 3) return false;

    // Borda superior (y = 1)
    PolygonClip::clipAgainstEdge(listaAtual, listaProxima, 8, 1.0, false); // ACIMA = 8

    poligonoSaida = listaProxima;

    // Retorna true se o polígono resultante tiver pelo menos 3 vértices
    return poligonoSaida.size() >= 3;
}

// Função auxiliar para clipping contra uma borda específica
void Clipping::PolygonClip::clipAgainstEdge(const QVector<Ponto>& entrada, QVector<Ponto>& saida,
                                            int edge, double clipValue, bool isVertical) {
    if (entrada.empty()) return;

    Ponto pontoAnterior = entrada.last();
    bool anteriorDentro = false;

    // Verifica se o último ponto está dentro em relação à borda atual
    if (isVertical) {
        // Borda vertical (esquerda/direita) - verifica coordenada x
        anteriorDentro = (edge == 1) ? (pontoAnterior.x() >= clipValue) : (pontoAnterior.x() <= clipValue); // ESQUERDA=1, DIREITA=2
    } else {
        // Borda horizontal (acima/abaixo) - verifica coordenada y
        anteriorDentro = (edge == 4) ? (pontoAnterior.y() >= clipValue) : (pontoAnterior.y() <= clipValue); // ABAIXO=4, ACIMA=8
    }

    for (const Ponto& pontoAtual : entrada) {
        bool atualDentro = false;

        // Verifica se o ponto atual está dentro em relação à borda atual
        if (isVertical) {
            // Borda vertical
            atualDentro = (edge == 1) ? (pontoAtual.x() >= clipValue) : (pontoAtual.x() <= clipValue);
        } else {
            // Borda horizontal
            atualDentro = (edge == 4) ? (pontoAtual.y() >= clipValue) : (pontoAtual.y() <= clipValue);
        }

        if (atualDentro) {
            // Ponto atual está DENTRO
            if (!anteriorDentro) {
                // Ponto anterior estava FORA -> adiciona interseção
                Ponto interseccao = calcularInterseccao(pontoAnterior, pontoAtual, edge, clipValue, isVertical);
                saida.append(interseccao);
            }
            // Adiciona ponto atual
            saida.append(pontoAtual);
        } else if (anteriorDentro) {
            // Ponto atual está FORA, ponto anterior estava DENTRO -> adiciona interseção
            Ponto interseccao = calcularInterseccao(pontoAnterior, pontoAtual, edge, clipValue, isVertical);
            saida.append(interseccao);
        }

        pontoAnterior = pontoAtual;
        anteriorDentro = atualDentro;
    }
}

// Função para calcular interseção entre dois pontos com uma borda
Ponto Clipping::PolygonClip::calcularInterseccao(const Ponto& p1, const Ponto& p2, int edge, double clipValue, bool isVertical) {
    double x, y;

    if (isVertical) {
        // Borda vertical (x = clipValue)
        x = clipValue;
        // Interpola y
        double t = (clipValue - p1.x()) / (p2.x() - p1.x());
        y = p1.y() + t * (p2.y() - p1.y());
    } else {
        // Borda horizontal (y = clipValue)
        y = clipValue;
        // Interpola x
        double t = (clipValue - p1.y()) / (p2.y() - p1.y());
        x = p1.x() + t * (p2.x() - p1.x());
    }

    return Ponto(x, y);
}

// Função para calcular código de região (pode ser útil)
int Clipping::PolygonClip::calcularCodigoRegiao(double x, double y) {
    int codigo = 0; // DENTRO

    if (x < -1.0)       codigo |= 1; // ESQUERDA
    else if (x > 1.0)   codigo |= 2; // DIREITA
    if (y < -1.0)       codigo |= 4; // ABAIXO
    else if (y > 1.0)   codigo |= 8; // ACIMA

    return codigo;
}
