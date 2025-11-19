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
    static Matriz translacao(double dx, double dy, double dz);
    static Matriz escala(double sx, double sy, double sz);
    static Matriz rotacaoZ(double anguloGraus);
    static Matriz rotacaoX(double anguloGraus);
    static Matriz rotacaoY(double anguloGraus);
    Matriz inversa() const;

    // Escalonamento em torno de um ponto
    static Matriz escalaPonto(double sx, double sy, double sz, double px, double py, double pz);

    // Rotação em torno de um ponto
    static Matriz rotacaoPonto(double anguloGraus, double px, double py, double pz, char r);
};

#endif // MATRIZ_H
