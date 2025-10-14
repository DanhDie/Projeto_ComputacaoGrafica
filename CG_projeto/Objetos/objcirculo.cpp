#include "objcirculo.h"
#include "ponto.h"
#include "Objetos/objwindow.h"
#include <QPainter>
#include <cmath>

ObjCirculo::ObjCirculo(QString nome, int cenX, int cenY, int raio, TipoObjeto tipo)
    : Objeto (nome, tipo){
    adicionarPonto(Ponto(cenX, cenY)); //Ponto central
    adicionarPonto(Ponto(raio, 0));    //Raio do circulo
}

void ObjCirculo::desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const{
    bool desenhar;
    QVector<QPoint> pontosTela=ajustarPontos(vp, window,desenhar);

    // centro já mapeado para viewport
    QPoint centro = pontosTela[0];

    // Ponto do raio no mundo
    const Ponto pontoRaioMundo = (this->getPontos()).at(1);

    // Distância (raio) no mundo
    double raioMundo = std::hypot(pontoRaioMundo.x(), pontoRaioMundo.y());

    // Escala da window para a viewport
    double escalaX = (vp.getVxmax() - vp.getVxmin()) / (window.getXmax() - window.getXmin());
    double escalaY = (vp.getVymax() - vp.getVymin()) / (window.getYmax() - window.getYmin());

    double escalaMedia = (escalaX + escalaY) / 2.0;

    int raioPixel = static_cast<int>(std::round(raioMundo * escalaMedia));

    painter->drawEllipse(centro, raioPixel, raioPixel);
}

QVector<QPoint>ObjCirculo::ajustarPontos(const Viewport &vp,const ObjWindow &window,bool desenhar) const{
    QVector<QPoint> pontosTela;
    const QVector<Ponto> pts = this->getPontos(); //Para fins de performance

    for (const Ponto& pOriginal : pts) {
        Ponto p=pOriginal; //Cópia do ponto

        // normaliza em relação à window
        Ponto pNorm = window.normalizar(p);

        //"antes da transformada da viewport", portanto o clipping vai entrar aqui
        //clipping(&pNorm,window); //Resolvedor de clipping

        // mapeia para a viewport
        Ponto pTela = vp.mapear(pNorm);

        pontosTela.append(pTela.toQPoint());
    }
    return pontosTela;
}

void ObjCirculo::transformar(const Matriz& transformacao) {
    // 1. Calcular os fatores de escala com base na matriz de transformação.
    // Isso é feito calculando o comprimento dos vetores base da matriz.
    double escalaX = std::sqrt(transformacao[0][0] * transformacao[0][0] + transformacao[1][0] * transformacao[1][0]);
    double escalaY = std::sqrt(transformacao[0][1] * transformacao[0][1] + transformacao[1][1] * transformacao[1][1]);

    // 2. Transformar o ponto central do objeto.
    // Esta parte permanece a mesma.
    Ponto centroAntigo = pontos[0];
    Matriz centroNovoMatriz = transformacao * centroAntigo;
    pontos[0].setX(centroNovoMatriz[0][0]);
    pontos[0].setY(centroNovoMatriz[1][0]);

    // 3. Calcular a escala combinada usando a média geométrica para preservar a área.
    // Esta é a principal melhoria em relação à média aritmética.
    double escalaCombinada = std::sqrt(escalaX * escalaY);

    // Se por algum motivo uma das escalas for zero, a raiz pode dar NaN ou 0.
    // Um tratamento simples é verificar se o valor é válido.
    if (std::isnan(escalaCombinada)) {
        escalaCombinada = 0.0;
    }

    // 4. Aplicar a escala combinada ao raio único do círculo.
    double novoRaio = getRaio() * escalaCombinada;
    setRaio(static_cast<int>(std::round(novoRaio)));
}

Ponto ObjCirculo::getPontoReferencia() const{
    return pontos[0]; //O centro é um ponto
}
QPoint ObjCirculo::getCentro() const {
    return pontos[0].toQPoint();
}

int ObjCirculo::getRaio() const {
    return (int)std::round(pontos[1].x());
}

void ObjCirculo::setCentro(const QPoint& centro) {
    pontos[0].setX(centro.x());
    pontos[0].setY(centro.y());
}

void ObjCirculo::setRaio(int raio) {
    pontos[1].setX(raio);
}
