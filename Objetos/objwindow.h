#ifndef OBJWINDOW_H
#define OBJWINDOW_H

#include "objeto.h"

class ObjWindow : public Objeto {
public:
    ObjWindow(QString nome, double xmin, double ymin, double xmax, double ymax);

    // Atualiza os limites (caso a janela seja transformada)
    void atualizarLimites(double xmin, double ymin, double xmax, double ymax);

    Ponto normalizar(const Ponto& p) const;
    Ponto desnormalizar(const Ponto& p);

    // Retorna limites da Window
    double getXmin() const;
    double getYmin() const;
    double getXmax() const;
    double getYmax() const;


    void pan(double dx, double dy);
    void zoom(double fator);

    // Para funcionar a rotação da janela (window) - suporte
    void setRotacao(double angulo); //graus
    double getRotacao() const;

    void desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const override; //Cumprindo contrato

protected:
    QVector<QPoint>ajustarPontos(const Viewport &vp,const ObjWindow &window,bool desenhar) const override;

private:
    double anguloRotacao = 0.0; //graus
};

#endif // OBJWINDOW_H
