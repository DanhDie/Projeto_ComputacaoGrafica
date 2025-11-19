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
    Matriz I(4, 4);                                 // Trocado de (3,3) para (4,4)
    for (int i = 0; i < 4; i++) I[i][i] = 1.0;      // for vai de 0 a 3 (4 unidades, pra uma matrizes 4x4)
    return I;
}

Matriz Matriz::translacao(double dx, double dy, double dz) {   // Parâmetro adicionado: dz
    Matriz T = identidade();
    T[0][3] = dx;
    T[1][3] = dy;
    T[2][3] = dz;   // Nova linha
    return T;
}

Matriz Matriz::escala(double sx, double sy, double sz) {       // Parâmetro adicionado: sz
    Matriz S = identidade();
    S[0][0] = sx;
    S[1][1] = sy;
    S[2][2] = sz;   // Nova linha
    return S;
}

/*
    Rotacao se separa em 3:
        1. Em torno de Z(O que já existia antes)
        2. Em torno de X
        3. Em torno de Y

    Depois, vai ser necessário separar via input do usuário QUAL das rotações ele quer
*/
Matriz Matriz::rotacaoZ(double anguloGraus) {        // Rotação em torno de Z
    double rad = anguloGraus * M_PI / 180.0;
    Matriz R = identidade();
    R[0][0] = cos(rad);  R[0][1] = -sin(rad);
    R[1][0] = sin(rad);  R[1][1] = cos(rad);
    return R;
}
Matriz Matriz::rotacaoX(double anguloGraus){         // Rotacao em torno de X
    double rad = anguloGraus * M_PI / 180.0;
    Matriz R = identidade();
    R[1][1] = cos(rad);  R[1][2] = -sin(rad);
    R[2][1] = sin(rad);  R[2][2] = cos(rad);
    return R;
}
Matriz Matriz::rotacaoY(double anguloGraus){         // Rotacao em torno de Y
    double rad = anguloGraus * M_PI / 180.0;
    Matriz R = identidade();
    R[0][0] = cos(rad);  R[0][2] = sin(rad);
    R[2][0] = -sin(rad);  R[2][2] = cos(rad);
    return R;
}
Matriz Matriz::inversa() const{
    if (getLinhas() != getColunas()) {
        throw std::invalid_argument("Inversa só definida para matrizes quadradas");
    }

    int n = getLinhas();
    // cria matriz aumentada n x 2n
    std::vector<std::vector<double>> a(n, std::vector<double>(2 * n, 0.0));

    // copia a matriz original para a parte esquerda e identidade na direita
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = dados[i][j];
        }
        a[i][n + i] = 1.0;
    }

    const double EPS = 1e-12;

    // Gauss-Jordan
    for (int col = 0; col < n; ++col) {
        // encontra pivot (linha com maior valor absoluto na coluna 'col')
        int pivotRow = col;
        double maxVal = std::fabs(a[col][col]);
        for (int r = col + 1; r < n; ++r) {
            double v = std::fabs(a[r][col]);
            if (v > maxVal) {
                maxVal = v;
                pivotRow = r;
            }
        }

        if (maxVal < EPS) {
            throw std::runtime_error("Matriz singular ou quase singular (não possui inversa)");
        }

        // troca a linha atual com a pivotRow, se necessário
        if (pivotRow != col) {
            std::swap(a[pivotRow], a[col]);
        }

        // normaliza a linha do pivot (faz pivot = 1)
        double pivot = a[col][col];
        for (int j = 0; j < 2 * n; ++j) {
            a[col][j] /= pivot;
        }

        // elimina outras linhas na coluna 'col'
        for (int r = 0; r < n; ++r) {
            if (r == col) continue;
            double factor = a[r][col];
            if (std::fabs(factor) < EPS) continue;
            for (int j = 0; j < 2 * n; ++j) {
                a[r][j] -= factor * a[col][j];
            }
        }
    }

    // extrai a parte direita (inversa)
    Matriz inv(n, n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            inv[i][j] = a[i][n + j];
        }
    }

    return inv;
}

Matriz Matriz::escalaPonto(double sx, double sy, double sz, double px, double py, double pz) {
    // Corrigindo a ordem das operações (multiplicação de matrizes)
    return translacao(px, py, pz) * escala(sx, sy, sz) * translacao(-px, -py, -pz);
}

Matriz Matriz::rotacaoPonto(double anguloGraus, double px, double py, double pz, char r) {
    // Corrigindo a ordem das operações
        // Devemos receber um input do usuário sobre qual rotação usar
    if(r=='z'){return translacao(px, py, pz) * rotacaoZ(anguloGraus) * translacao(-px, -py, -pz);}
    if(r=='x'){return translacao(px, py, pz) * rotacaoX(anguloGraus) * translacao(-px, -py, -pz);}
    if(r=='y'){return translacao(px, py, pz) * rotacaoY(anguloGraus) * translacao(-px, -py, -pz);}
}
