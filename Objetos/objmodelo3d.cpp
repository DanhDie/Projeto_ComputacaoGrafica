#include "objmodelo3d.h"
#include <cmath>
#include <QDebug>

ObjModelo3D::ObjModelo3D(QString nome, const QString& caminhoOBJ, TipoObjeto tipo)
    : Objeto(nome, tipo) {
    carregarModelo(caminhoOBJ);
}

bool ObjModelo3D::carregarModelo(const QString& caminhoOBJ) {
    if (!leitor.carregarArquivo(caminhoOBJ)) {
        qWarning() << "Falha ao carregar modelo OBJ:" << caminhoOBJ;
        return false;
    }

    vertices = leitor.getVertices();
    faces = leitor.getFaces();
    return true;
}

void ObjModelo3D::transformar(const Matriz& transformacao) {
    for (Ponto3D& v : vertices) {
        Matriz novo = transformacao * v;
        v.setX(novo[0][0]);
        v.setY(novo[1][0]);
        v.setZ(novo[2][0]);
    }
}

Ponto3D ObjModelo3D::getPontoReferencia() const {
    // 1. Trata o caso de não haver vértices
    if (vertices.isEmpty()) {
        return Ponto3D(0, 0, 0);
    }

    // 2. Inicializa as somas das coordenadas
    // Usar double garante precisão na soma e na divisão
    double somaX = 0.0;
    double somaY = 0.0;
    double somaZ = 0.0;

    // 3. Itera por TODOS os vértices e soma suas coordenadas
    for (const Ponto3D& v : vertices) {
        somaX += v.x();
        somaY += v.y();
        somaZ += v.z();
    }

    // 4. Calcula a média dividindo a soma pelo número de vértices
    int numVertices = vertices.size();
    double centroX = somaX / numVertices;
    double centroY = somaY / numVertices;
    double centroZ = somaZ / numVertices;

    // 5. Retorna o novo Ponto3D que representa o centroide
    return Ponto3D(centroX, centroY, centroZ);
}

QVector<QPoint> ObjModelo3D::projetarVertices2D(const Viewport& vp, const ObjWindow& window) const {
    QVector<QPoint> resultado;
    resultado.reserve(vertices.size());

    for (const Ponto3D& v : vertices) {
        Ponto3D pNorm = window.normalizar(v);
        Ponto3D pTela = vp.mapear(pNorm);
        resultado.append(pTela.toQPoint());
    }

    return resultado;
}

void ObjModelo3D::desenhar(QPainter* painter, const Viewport& vp, const ObjWindow& window) const {
    if (vertices.isEmpty() || faces.isEmpty()) return;

    QVector<QPoint> pontosTela = projetarVertices2D(vp, window);

    QPen pen(Qt::black);
    pen.setWidth(1);
    painter->setPen(pen);

    for (const LeitorOBJ::Face& f : faces) {
        if (f.indices.size() < 2) continue;

        for (int i = 0; i < f.indices.size(); ++i) {
            int i1 = f.indices[i];
            int i2 = f.indices[(i + 1) % f.indices.size()];
            if (i1 >= 0 && i2 >= 0 && i1 < pontosTela.size() && i2 < pontosTela.size()) {
                painter->drawLine(pontosTela[i1], pontosTela[i2]);
            }
        }
    }
}

QVector<QPoint> ObjModelo3D::ajustarPontos(const Viewport &vp, const ObjWindow &window, bool& desenhar) const {
    // A classe 3D não usa isso diretamente, mas precisa implementar pois é virtual puro
    Q_UNUSED(vp);
    Q_UNUSED(window);
    Q_UNUSED(desenhar);
    return {};
}
