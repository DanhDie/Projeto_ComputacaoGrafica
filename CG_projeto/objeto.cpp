#include "Objeto.h"
#include "ponto.h"

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
void Objeto :: autorretrato(QPainter *painter) const{}

void Objeto::aplicarTransformacao(const Matriz& transformacao) {
    for (Ponto& ponto : pontos) {
        // Multiplica cada ponto pela matriz de transformação
        Matriz pontoTransformado = transformacao * ponto;
        ponto.setX(pontoTransformado[0][0]);
        ponto.setY(pontoTransformado[1][0]);
    }
}

void Objeto::transformar(const Matriz& transformacao) {
    aplicarTransformacao(transformacao);
}
