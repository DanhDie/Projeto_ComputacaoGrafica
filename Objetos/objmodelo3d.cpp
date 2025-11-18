#include "objmodelo3d.h"
#include <cmath>
#include <QDebug>
#include "clippingutil.h"

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

QVector<QPolygon>ObjModelo3D::processarPontos(const Viewport &vp, const ObjWindow &window, bool& desenhar, int modoP) const{


    QVector<QPolygon> poligonosDeTela;

    // Configuração de projeção
    // 🔹 0 = ortogonal | 1 = perspectiva
    //int modoP = 1;      // O certo pelo certo isso aqui tem que vir da interface
    double d = 700.0;   // distância focal - Quanto maior menos efeito de perspectiva (se for muito pequeno da pra ver nada)

    Matriz Mpersp = Matriz::identidade();   // Matriz de projeção perspectiva
    Mpersp[3][2] = -1.0 / d;                // linha w = -z/d

    desenhar = false; // Começa como falso

    // Itera sobre cada face
    for (const LeitorOBJ::Face& f : faces) {
        if (f.indices.size() < 3) continue;


        bool faceTemVerticeAtras = false;
        for (int index : f.indices) {
            if (index < 0 || index >= vertices.size()) {
                faceTemVerticeAtras = true; // Índice inválido, descarta
                break;
            }

            const Ponto3D& v = vertices[index];
            Ponto3D pNorm = window.normalizar(v);
            double w = 1.0 - (pNorm.z() / d);

            // Se w for zero ou negativo, o vértice está atrás ou no plano
            if (w <= 1e-6) { // 1e-6 é sua margem de segurança
                faceTemVerticeAtras = true;
                break; // Se um vértice está atrás, não precisamos checar os outros
            }
        }

        // 2. Se a face tocou o "plano da morte", PULA ELA INTEIRA.
        if (faceTemVerticeAtras) {
            continue; // Vai para a próxima face
        }

        QVector<Ponto3D> faceProjetada;
        QVector<Ponto3D> faceClipada2D;
        QPolygon poligonoTelaFinal; // Usando QPolygonF

        bool faceValida = true;

        // Normaliza e projeta os pontos da face
        for (int index : f.indices) {
            if (index < 0 || index >= vertices.size()) {
                faceValida = false;
                break;
            }

            const Ponto3D& v = vertices[index];
            Ponto3D pNorm = window.normalizar(v);
            Ponto3D projetado;

            // Tratamento de projeção ortogonal
            if (modoP == 0) {
                projetado = pNorm;
            }
            // Tratamento de projeção em perspectiva
            else {
                double w = 1.0 - (pNorm.z() / d);

                if (fabs(w) < 1e-6) w = 1e-6;   // Evita divisão por zero

                Matriz pM = Mpersp * pNorm;     // normaliza pela profundidade
                double x = pM[0][0] / w;
                double y = pM[1][0] / w;
                double z = pM[2][0] / w;
                projetado = Ponto3D(x, y, z);
            }

            faceProjetada.append(projetado);
        }

        if (!faceValida) continue;

        // Aplica o clipping
        if (Clipping::clipPoligono(faceProjetada, faceClipada2D)) {

            // Mapeia os pontos resultantes
            for(const Ponto3D& pClip : faceClipada2D){
                Ponto3D pTela = vp.mapear(pClip);
                poligonoTelaFinal.append(pTela.toQPoint());
            }

            if (poligonoTelaFinal.size() >= 3) {
                poligonosDeTela.append(poligonoTelaFinal);
                desenhar = true; // Temos algo para desenhar!
            }
        }
    }

    return poligonosDeTela;
}
QVector<QPoint> ObjModelo3D::ajustarPontos(const Viewport& vp, const ObjWindow& window, bool& desenhar) const {
    // Eu vou chorar de ter que deixar isso aqui vazio, mas acontece.
}

void ObjModelo3D::desenhar(QPainter* painter, const Viewport& vp, const ObjWindow& window, int modoP) const {
    if (vertices.isEmpty() || faces.isEmpty()) return;

    bool desenhar=true;
    QVector<QPolygon> poligonosTela = processarPontos(vp, window, desenhar, modoP);

    if (!desenhar) return; // Se não há polígonos, não faz nada

    QPen pen(Qt::black);
    pen.setWidth(1);
    painter->setPen(pen);

    //  Desenha cada face poligono clippado
    for (const QPolygonF& poligono : poligonosTela) {
        // painter->drawPolygon() desenha as arestas do polígono
        painter->drawPolygon(poligono);
    }
}
