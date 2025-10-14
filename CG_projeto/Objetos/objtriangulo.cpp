#include "objtriangulo.h"
#include "ponto.h"
#include <QPainter>
#include <limits>
#include "Objetos/objwindow.h"

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

void ObjTriangulo::desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const{
    bool desenhar;
    QVector<QPoint>pontosTela=ajustarPontos(vp,window,desenhar);

    if(pontosTela.size() >= 3)painter->drawPolygon(pontosTela);
}

QVector<QPoint>ObjTriangulo::ajustarPontos(const Viewport &vp,const ObjWindow &window,bool desenhar) const{
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

Ponto ObjTriangulo::getPontoReferencia() const {
    const QVector<Ponto>& vertices = this->getPontos();

    if (vertices.isEmpty()) {
        return Ponto(0, 0);
    }

    // Inicializa com os valores do primeiro ponto
    double minX = vertices[0].x();
    double maxX = vertices[0].x();
    double minY = vertices[0].y();
    double maxY = vertices[0].y();

    // Itera a partir do segundo ponto para encontrar os extremos
    for (int i = 1; i < vertices.size(); ++i) {
        const Ponto& p = vertices[i];
        if (p.x() < minX) minX = p.x();
        if (p.x() > maxX) maxX = p.x();
        if (p.y() < minY) minY = p.y();
        if (p.y() > maxY) maxY = p.y();
    }

    // Calcula o centro da caixa delimitadora
    double centroX = minX + (maxX - minX) / 2.0;
    double centroY = minY + (maxY - minY) / 2.0;

    return Ponto(centroX, centroY);
}
