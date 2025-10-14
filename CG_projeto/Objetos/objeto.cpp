#include "Objeto.h"
#include "ponto.h"
#include "Objetos/objwindow.h"

Objeto::Objeto(QString nome, TipoObjeto tipo)
    : nome(nome), tipo(tipo) {}

void Objeto::adicionarPonto(const Ponto& p) {
    pontos.append(p);
}

QString Objeto::getNome() const {
    return nome;
}

TipoObjeto Objeto::getTipo() const {
    return tipo;
}

//Retorna QVector<Pontos>
QVector<Ponto> Objeto::getPontos() const {
    return pontos;
}

QVector<QPoint>Objeto::ajustarPontos(const Viewport &vp,const ObjWindow &window) const{
    QVector<QPoint> pontosTela;
    const QVector<Ponto> pts = this->getPontos(); //Para fins de performance
    return pontosTela;
}

void Objeto::transformar(const Matriz& transformacao) {
    for (Ponto& ponto : pontos) {
        // Multiplica cada ponto pela matriz de transformação
        Matriz pontoTransformado = transformacao * ponto;
        ponto.setX(pontoTransformado[0][0]);
        ponto.setY(pontoTransformado[1][0]);
    }
}

Ponto Objeto::getPontoReferencia() const {
    // Implementação padrão: calcula o centroide (lógica da sua função original)
    if (pontos.isEmpty()) {
        return Ponto(0, 0);
    }
    double somaX = 0.0, somaY = 0.0;
    for (const Ponto &p : pontos) {
        somaX += p.x(); // Usando .x() e .y() para mais clareza
        somaY += p.y();
    }
    return Ponto(somaX / pontos.size(), somaY / pontos.size());
}

const QVector<Objeto*> Objeto::getObjetos() const{
    return {};
}
