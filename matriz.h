#ifndef MATRIZ_H
#define MATRIZ_H

#include <vector>
#include <stdexcept>
#include <cmath>

class Matriz {
private:
    std::vector<std::vector<double>> dados;
    int linhas, colunas;

public:
    Matriz(int l, int c);

    int getLinhas() const;
    int getColunas() const;

    std::vector<double>& operator[](int i);
    const std::vector<double>& operator[](int i) const;

    // Operador de multiplicação
    Matriz operator*(const Matriz& m) const;

    // Fábricas de matrizes de transformação
    static Matriz identidade();
    static Matriz translacao(double dx, double dy);
    static Matriz escala(double sx, double sy);
    static Matriz rotacao(double anguloGraus);

    // Escalonamento em torno de um ponto
    static Matriz escalaPonto(double sx, double sy, double px, double py);

    // Rotação em torno de um ponto
    static Matriz rotacaoPonto(double anguloGraus, double px, double py);
};

#endif // MATRIZ_H
