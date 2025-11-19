#include "Objeto.h"
#include "ponto3d.h"
#include "Objetos/objwindow.h"

Objeto::Objeto(QString nome, TipoObjeto tipo)
    : nome(nome), tipo(tipo) {}

void Objeto::adicionarPonto(const Ponto3D& p) {
    pontos.append(p);
}

QString Objeto::getNome() const {
    return nome;
}

TipoObjeto Objeto::getTipo() const {
    return tipo;
}

//Retorna QVector<Pontos>
QVector<Ponto3D> Objeto::getPontos() const {
    return pontos;
}

void Objeto::transformar(const Matriz& transformacao) {
    for (Ponto3D& ponto : pontos) {
        // Representa o ponto como vetor coluna homogêneo [x, y, z, 1]^T
        Matriz pontoMatriz(4, 1);
        pontoMatriz[0][0] = ponto.x();
        pontoMatriz[1][0] = ponto.y();
        pontoMatriz[2][0] = ponto.z();
        pontoMatriz[3][0] = 1.0;

        // Multiplica pela matriz de transformação 4x4
        Matriz resultado = transformacao * pontoMatriz;

        //vetor de pontos temp
        ponto.setX(resultado[0][0]);
        ponto.setY(resultado[1][0]);
        ponto.setZ(resultado[2][0]);
    }
}


Ponto3D Objeto::getPontoReferencia() const {
    // Implementação padrão: calcula o centroide (lógica da sua função original)
    if (pontos.isEmpty()) {
        return Ponto3D(0, 0, 0);
    }
    double somaX = 0.0, somaY = 0.0, somaZ = 0.0;
    for (const Ponto3D &p : pontos) {
        somaX += p.x(); // Usando .x() e .y() para mais clareza
        somaY += p.y();
        somaZ += p.z();
    }
    return Ponto3D(somaX / pontos.size(), somaY / pontos.size(), somaZ / pontos.size());
}

const QVector<Objeto*> Objeto::getObjetos() const{
    return {};
}
