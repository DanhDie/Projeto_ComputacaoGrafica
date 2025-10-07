#include "objtriangulo.h"
#include "ponto.h"
#include <QPainter>
#include <limits>

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
    QVector<QPoint>pontosTela=ajustarPontos(vp,window);

    if(pontosTela.size() >= 3)painter->drawPolygon(pontosTela);
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
