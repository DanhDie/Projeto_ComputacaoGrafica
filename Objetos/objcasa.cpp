#include "objcasa.h"
#include <QPainter>

// Construtor principal
ObjCasa::ObjCasa(QString nome, double x, double y, TipoObjeto tipo)
    : Objeto(nome, tipo)
{
    // 🔹 Telhado (triângulo)
    objPrimitivos.append(new ObjTriangulo(
        "Telhado",
        Ponto3D(x + 175, y + 400, 0),
        Ponto3D(x + 225, y + 400, 0),
        Ponto3D(x + 200, y + 360, 0)
        ));

    // 🔹 Corpo da casa (polígono de 4 pontos)
    Ponto3D pontosCorpo[] = {
        Ponto3D(x + 175, y + 400, 0),
        Ponto3D(x + 175, y + 460, 0),
        Ponto3D(x + 225, y + 460, 0),
        Ponto3D(x + 225, y + 400, 0)
    };
    objPrimitivos.append(new ObjPoligono("Corpo", pontosCorpo, 4));

    // 🔹 Janela (círculo)
    objPrimitivos.append(new ObjCirculo("Janela", Ponto3D(x + 200, y + 386, 0), 6));

    // 🔹 Porta (polígono de 4 pontos)
    Ponto3D pontosPorta[] = {
        Ponto3D(x + 185, y + 425, 0),
        Ponto3D(x + 185, y + 460, 0),
        Ponto3D(x + 205, y + 460, 0),
        Ponto3D(x + 205, y + 425, 0)
    };
    objPrimitivos.append(new ObjPoligono("Porta", pontosPorta, 4));

    // 🔹 Maçaneta (círculo)
    objPrimitivos.append(new ObjCirculo("Macaneta", Ponto3D(x + 190, y + 445, 0), 3));
}

// Destrutor
ObjCasa::~ObjCasa() {
    for (Objeto* obj : objPrimitivos) {
        delete obj;
    }
}

// Retorna os objetos internos
const QVector<Objeto*> ObjCasa::getObjetos() const {
    return objPrimitivos;
}

// Desenha toda a casa
void ObjCasa::desenhar(QPainter* painter, const Viewport &vp, const ObjWindow &window) const {
    for (const Objeto* obj : objPrimitivos) {
        obj->desenhar(painter, vp, window);
    }
}

// Aplica transformação em todos os objetos
void ObjCasa::transformar(const Matriz& transformacao) {
    for (Objeto* obj : objPrimitivos) {
        obj->transformar(transformacao);
    }
}

// Ajusta os pontos de todos os objetos para a viewport
QVector<QPoint> ObjCasa::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool &desenhar) const {
    QVector<QPoint> pontos;
    for (const Objeto* obj : objPrimitivos) {
        pontos += obj->projetar(vp, window, desenhar);

    }
    return pontos;
}

// Calcula o ponto de referência da casa (média de todos os objetos)
Ponto3D ObjCasa::getPontoReferencia() const {
    if (objPrimitivos.isEmpty()) return Ponto3D(0, 0, 0);

    double somaX = 0, somaY = 0, somaZ = 0;
    int count = 0;

    for (const Objeto* obj : objPrimitivos) {
        Ponto3D ref = obj->getPontoReferencia();
        somaX += ref.x();
        somaY += ref.y();
        somaZ += ref.z();
        count++;
    }

    return Ponto3D(somaX / count, somaY / count, somaZ / count);
}
