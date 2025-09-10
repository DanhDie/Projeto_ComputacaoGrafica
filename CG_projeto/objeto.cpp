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
