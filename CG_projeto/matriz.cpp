#include "matriz.h"

Matriz::Matriz(int l, int c) : linhas(l), colunas(c) {
    dados = std::vector<std::vector<double>>(l, std::vector<double>(c, 0.0));
}

int Matriz::getLinhas() const { return linhas; }
int Matriz::getColunas() const { return colunas; }

std::vector<double>& Matriz::operator[](int i) {
    return dados[i];
}

const std::vector<double>& Matriz::operator[](int i) const {
    return dados[i];
}

Matriz Matriz::operator*(const Matriz& m) const {
    if (colunas != m.linhas)
        throw std::invalid_argument("Dimensões incompatíveis para multiplicação");

    Matriz result(linhas, m.colunas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < m.colunas; j++) {
            for (int k = 0; k < colunas; k++) {
                result[i][j] += dados[i][k] * m[k][j];
            }
        }
    }
    return result;
}

Matriz Matriz::identidade() {
    Matriz I(3, 3);
    for (int i = 0; i < 3; i++) I[i][i] = 1.0;
    return I;
}

Matriz Matriz::translacao(double dx, double dy) {
    Matriz T = identidade();
    T[0][2] = dx;
    T[1][2] = dy;
    return T;
}

Matriz Matriz::escala(double sx, double sy) {
    Matriz S = identidade();
    S[0][0] = sx;
    S[1][1] = sy;
    return S;
}

Matriz Matriz::rotacao(double anguloGraus) {
    double rad = anguloGraus * M_PI / 180.0;
    Matriz R = identidade();
    R[0][0] = cos(rad);  R[0][1] = -sin(rad);
    R[1][0] = sin(rad);  R[1][1] = cos(rad);
    return R;
}

Matriz Matriz::escalaPonto(double sx, double sy, double px, double py) {
    // Translada o ponto ao centro, escala, e volta
    return translacao(px, py) * escala(sx, sy) * translacao(-px, -py);
}

Matriz Matriz::rotacaoPonto(double anguloGraus, double px, double py) {
    // Translada o ponto ao centro, rotaciona, e volta
    return translacao(px, py) * rotacao(anguloGraus) * translacao(-px, -py);
}
