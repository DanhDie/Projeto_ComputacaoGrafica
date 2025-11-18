#include "leitorobj.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>

bool LeitorOBJ::carregarArquivo(const QString& caminho) {
    vertices.clear();
    faces.clear();

    QFile arquivo(caminho);
    if (!arquivo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Erro ao abrir o arquivo OBJ:" << caminho;
        return false;
    }

    QTextStream entrada(&arquivo);
    while (!entrada.atEnd()) {
        QString linha = entrada.readLine().trimmed();

        // Ignora comentários e linhas vazias
        if (linha.isEmpty() || linha.startsWith('#'))
            continue;

        QStringList partes = linha.split(' ', Qt::SkipEmptyParts);

        if (partes[0] == "v" && partes.size() >= 4) {
            // Vértice 3D
            double x = partes[1].toDouble();
            double y = partes[2].toDouble();
            double z = partes[3].toDouble();
            int prp=20;
            vertices.append(Ponto3D(x*prp, -y*prp, z*prp));
        }
        else if (partes[0] == "f" && partes.size() >= 4) {
            // Face (pode ser triângulo, quadrado, etc.)
            Face f;
            for (int i = 1; i < partes.size(); ++i) {
                QString vertice = partes[i];
                QStringList valores = vertice.split('/');
                int indiceVertice = valores[0].toInt() - 1; // OBJ usa índices começando em 1
                if (indiceVertice >= 0 && indiceVertice < vertices.size())
                    f.indices.append(indiceVertice);
            }
            faces.append(f);
        }
    }

    arquivo.close();
    return !vertices.isEmpty() && !faces.isEmpty();
}

const QVector<Ponto3D>& LeitorOBJ::getVertices() const {
    return vertices;
}

const QVector<LeitorOBJ::Face>& LeitorOBJ::getFaces() const {
    return faces;
}
