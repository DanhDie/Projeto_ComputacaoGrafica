#include "objwindow.h"
#include <QDebug>

ObjWindow::ObjWindow(QString nome, double xmin, double ymin, double xmax, double ymax)
    : Objeto(nome, Poligono)
{
    // Retângulo representando a window
    pontos.append(Ponto(xmin, ymin));
    pontos.append(Ponto(xmax, ymin));
    pontos.append(Ponto(xmax, ymax));
    pontos.append(Ponto(xmin, ymax));
}

void ObjWindow::atualizarLimites(double xmin, double ymin, double xmax, double ymax) {
    pontos[0] = Ponto(xmin, ymin);
    pontos[1] = Ponto(xmax, ymin);
    pontos[2] = Ponto(xmax, ymax);
    pontos[3] = Ponto(xmin, ymax);
}

Ponto ObjWindow::normalizar(const Ponto& p) const {
    // Aplicando rotação inversa à janela (simular o espaço local da window)
    double anguloRad = -this->getRotacao() * M_PI / 180.0;  // negativo = inversa

    // Centro da this
    double cx = (this->getXmin() + this->getXmax()) / 2.0;
    double cy = (this->getYmin() + this->getYmax()) / 2.0;

    // Transladar ponto para a origem da rotação
    double x = p.x() - cx;
    double y = p.y() - cy;

    // Aplicando rotação inversa
    double xr = x * cos(anguloRad) - y * sin(anguloRad);
    double yr = x * sin(anguloRad) + y * cos(anguloRad);

    // Transladar de volta para o centro da this
    xr += cx;
    yr += cy;

    // Normalizar
    double xn = (xr - this->getXmin()) / (this->getXmax() - this->getXmin());
    double yn = (yr - this->getYmin()) / (this->getYmax() - this->getYmin());

    return Ponto(xn, yn);
}


Ponto ObjWindow::desnormalizar(const Ponto& p) {
    // Desnormaliza as coordenadas
    double x = p.x() * (getXmax() - getXmin()) + getXmin();
    double y = p.y() * (getYmax() - getYmin()) + getYmin();

    // Centro da window
    double cx = (getXmin() + getXmax()) / 2.0;
    double cy = (getYmin() + getYmax()) / 2.0;

    // Translada para origem
    double xt = x - cx;
    double yt = y - cy;

    // Aplica rotação da window - ângulo positivo
    double anguloRad = anguloRotacao * M_PI / 180.0;

    double xr = xt * cos(anguloRad) - yt * sin(anguloRad);
    double yr = xt * sin(anguloRad) + yt * cos(anguloRad);

    // Translada de volta
    xr += cx;
    yr += cy;

    return Ponto(xr, yr);
}

double ObjWindow::getXmin() const { return pontos[0].x(); }
double ObjWindow::getYmin() const { return pontos[0].y(); }
double ObjWindow::getXmax() const { return pontos[2].x(); }
double ObjWindow::getYmax() const { return pontos[2].y(); }

// pan - deslogar os pontos da window
void ObjWindow::pan(double dx, double dy){
    for(int i = 0; i < pontos.size(); i++){
        pontos[i] = Ponto(pontos[i].x() + dx, pontos[i].y() + dy);
    }
}

// zoom na window
void ObjWindow::zoom(double fator){
    // Descobrir o centro atual
    double cx = (getXmin() + getXmax()) / 2.0;
    double cy = (getYmin() + getYmax()) / 2.0;


    // Descobrir largura e altura atuais
    double largura = (getXmax() - getXmin()) * fator;
    double altura = (getYmax() - getYmin()) * fator;

    // Calcular os novos limites
    double xmin = cx - largura / 2.0;
    double xmax = cx + largura / 2.0;
    double ymin = cy - altura / 2.0;
    double ymax = cy + altura / 2.0;

    // Atualizar a janela
    atualizarLimites(xmin, ymin, xmax, ymax);
}

void ObjWindow::setRotacao(double angulo) {
    anguloRotacao = angulo;
}

double ObjWindow::getRotacao() const {
    return anguloRotacao;
}

void ObjWindow::desenhar(QPainter *painter,const Viewport &vp, const ObjWindow &window) const{}
QVector<QPoint>ObjWindow::ajustarPontos(const Viewport &vp,const ObjWindow &window,bool desenhar) const{}

