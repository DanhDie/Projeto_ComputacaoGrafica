#include "Objeto.h"

Objeto::Objeto(QString nome, TipoObjeto tipo)
    : nome(nome), tipo(tipo) {}

void Objeto::adicionarPonto(const QPoint& p) {
    pontos.append(p);
}

QString Objeto::getNome() const {
    return nome;
}

TipoObjeto Objeto::getTipo() const {
    return tipo;
}

QVector<QPoint> Objeto::getPontos() const {
    return pontos;
}
void Objeto :: autorretrato(QPainter *painter) const{}
