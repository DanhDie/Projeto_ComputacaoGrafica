#include "objcirculo.h"
#include "ponto.h"

ObjCirculo::ObjCirculo(QString nome, int cenX, int cenY, int raio, TipoObjeto tipo)
    : Objeto (nome, tipo){
        adicionarPonto(Ponto(cenX, cenY)); //Ponto central
        adicionarPonto(Ponto(raio, 0));    //Raio do circulo
}

void ObjCirculo::transformar(const Matriz& transformacao) {
    // Para detectar se há escala na transformação
    double escalaX = std::sqrt(transformacao[0][0] * transformacao[0][0] + transformacao[1][0] * transformacao[1][0]);
    double escalaY = std::sqrt(transformacao[0][1] * transformacao[0][1] + transformacao[1][1] * transformacao[1][1]);

    // Transforma o centro
    Ponto centro = pontos[0];
    Matriz centroTransformado = transformacao * centro;
    pontos[0].setX(centroTransformado[0][0]);
    pontos[0].setY(centroTransformado[1][0]);

    // Ajusta o raio se houver escala (usa a média das escalas X e Y)
    if (std::abs(escalaX - 1.0) > 0.001 || std::abs(escalaY - 1.0) > 0.001) {
        double escalaMedia = (escalaX + escalaY) / 2.0;
        int novoRaio = static_cast<int>(std::round(getRaio() * escalaMedia));
        setRaio(novoRaio);
    }
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
