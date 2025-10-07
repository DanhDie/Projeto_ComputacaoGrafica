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
    for (const Ponto& p : this->getPontos()) {
        // normaliza em relação à window
        Ponto pNorm = window.normalizar(p);

        // mapeia para a viewport
        Ponto pTela = vp.mapear(pNorm);

        pontosTela.append(pTela.toQPoint());
    }
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

const QVector<Objeto*> Objeto::getObjetos() const{
    return {};
}
