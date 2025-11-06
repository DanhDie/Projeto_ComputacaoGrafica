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
    if (vertices.isEmpty()) return Ponto3D(0, 0, 0);

    double somaX = 0.0, somaY = 0.0, somaZ = 0.0;
    for (const Ponto3D& v : vertices) {
        somaX += v.x();
        somaY += v.y();
        somaZ += v.z();
    }

    int n = vertices.size();
    return Ponto3D(somaX / n, somaY / n, somaZ / n);
}

/*
    ===========================================================
    Função de projeção com escolha entre ortogonal e perspectiva
    ===========================================================
*/
QVector<QPoint> ObjModelo3D::projetarVertices2D(const Viewport& vp, const ObjWindow& window) const {
    QVector<QPoint> resultado;
    resultado.reserve(vertices.size());

    // 🔹 0 = ortogonal | 1 = perspectiva
    int modoP = 1;
    double d = 700.0; // distância focal - Quanto maior menos efeito de perspectiva (se for muito pequeno da pra ver nada)

    // Matriz de projeção perspectiva
    Matriz Mpersp = Matriz::identidade();
    Mpersp[3][2] = -1.0 / d;  // linha w = -z/d

    for (const Ponto3D& v : vertices) {
        Ponto3D pNorm = window.normalizar(v);

        Ponto3D projetado;

        if (modoP == 0) {
            // 🔸 Projeção ortogonal
            projetado = pNorm;
        } else {
            // 🔹 Projeção perspectiva (usando matriz composta)
            Matriz pM = Mpersp * pNorm;
            double x = pM[0][0];
            double y = pM[1][0];
            double z = pM[2][0];
            double w = 1.0 - (pNorm.z() / d); // normaliza pela profundidade

            if (fabs(w) < 1e-6) w = 1e-6; // evita divisão por zero

            x /= w;
            y /= w;
            z /= w;

            projetado = Ponto3D(x, y, z);
        }

        // 🔸 Mapeia para a viewport 2D
        Ponto3D pTela = vp.mapear(projetado);
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
    Q_UNUSED(vp);
    Q_UNUSED(window);
    Q_UNUSED(desenhar);
    return {};
}
