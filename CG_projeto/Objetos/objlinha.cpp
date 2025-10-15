#include "ObjLinha.h"
#include "objwindow.h"
#include "ponto.h"
#include <QPainter>
#include "clippingutil.h"

// ":" Neste contexto significa inicialização; O ObjLinha inicializa a si mesmo e instância um Objeto
// para guardar seu nome e pontos
ObjLinha::ObjLinha(QString nome, int priX, int priY, int segX, int segY, TipoObjeto tipo)
    : Objeto(nome, tipo){
        adicionarPonto(Ponto(priX, priY));
        adicionarPonto(Ponto(segX, segY));
}

void ObjLinha::desenhar(QPainter*painter,const Viewport &vp,const ObjWindow&window)const{
    bool desenhar=true;
    QVector<QPoint>pontosTela=ajustarPontos(vp,window,desenhar);

    if(!desenhar) return;
    if (pontosTela.size() >= 2) painter->drawLine(pontosTela[0], pontosTela[1]);
}

QVector<QPoint>ObjLinha::ajustarPontos(const Viewport &vp,const ObjWindow &window, bool desenhar) const{
    QVector<QPoint> pontosTela;
    const QVector<Ponto> pts = this->getPontos();

    // Cópia dos pontos
    Ponto p1 = pts[0];
    Ponto p2 = pts[1];

    // Normalização das cópias
    Ponto p1Norm = window.normalizar(p1);
    Ponto p2Norm = window.normalizar(p2);

    //CohenSutherland
    desenhar = Clipping::cohenSutherland(p1Norm, p2Norm);
    if(!desenhar) return pontosTela;

    // Mapeamento dos pontos
    Ponto p1Tela = vp.mapear(p1Norm);
    Ponto p2Tela = vp.mapear(p2Norm);

    // Atribuição final
    pontosTela.append(p1Tela.toQPoint());
    pontosTela.append(p2Tela.toQPoint());

    // Retorno dos pontos processados para desenho
    return pontosTela;
}

Ponto ObjLinha::getPontoReferencia() const {
    // Para uma linha, pode ser o ponto médio.
    const Ponto& p1 = pontos[0];
    const Ponto& p2 = pontos[1];
    double midX = (p1.x() + p2.x()) / 2.0;
    double midY = (p1.y() + p2.y()) / 2.0;
    return Ponto(midX, midY);
}
