


#include "sol.h"
#include "ponto3d.h"

Sol::Sol(QString nome, int x, int y, int z, TipoObjeto tipo)
    : Objeto(nome, tipo)
{
    // Criar pontos 3D para os objetos
    Ponto3D centro(x + 550, y + 350, z);
    Ponto3D p1(x + 550, y + 450, z), p2(x + 560, y + 410, z), p3(x + 540, y + 410, z);
    Ponto3D p4(x + 500, y + 437, z), p5(x + 529, y + 407, z), p6(x + 511, y + 397, z);
    Ponto3D p7(x + 463, y + 400, z), p8(x + 503, y + 389, z), p9(x + 493, y + 371, z);
    Ponto3D p10(x + 450, y + 350, z), p11(x + 490, y + 360, z), p12(x + 490, y + 340, z);
    Ponto3D p13(x + 463, y + 300, z), p14(x + 493, y + 329, z), p15(x + 503, y + 311, z);
    Ponto3D p16(x + 500, y + 263, z), p17(x + 511, y + 303, z), p18(x + 529, y + 293, z);
    Ponto3D p19(x + 550, y + 250, z), p20(x + 540, y + 290, z), p21(x + 560, y + 290, z);
    Ponto3D p22(x + 600, y + 263, z), p23(x + 571, y + 293, z), p24(x + 589, y + 303, z);
    Ponto3D p25(x + 637, y + 300, z), p26(x + 597, y + 311, z), p27(x + 607, y + 329, z);
    Ponto3D p28(x + 650, y + 350, z), p29(x + 610, y + 340, z), p30(x + 610, y + 360, z);
    Ponto3D p31(x + 637, y + 400, z), p32(x + 607, y + 371, z), p33(x + 597, y + 389, z);
    Ponto3D p34(x + 600, y + 437, z), p35(x + 589, y + 397, z), p36(x + 571, y + 407, z);

    // Instanciando objetos com pontos 3D
    objPrimitivos.append(new ObjCirculo("solin", centro, 50));

    objPrimitivos.append(new ObjTriangulo("ray1", p1, p2, p3));
    objPrimitivos.append(new ObjTriangulo("ray2", p4, p5, p6));
    objPrimitivos.append(new ObjTriangulo("ray3", p7, p8, p9));
    objPrimitivos.append(new ObjTriangulo("ray4", p10, p11, p12));
    objPrimitivos.append(new ObjTriangulo("ray5", p13, p14, p15));
    objPrimitivos.append(new ObjTriangulo("ray6", p16, p17, p18));
    objPrimitivos.append(new ObjTriangulo("ray7", p19, p20, p21));
    objPrimitivos.append(new ObjTriangulo("ray8", p22, p23, p24));
    objPrimitivos.append(new ObjTriangulo("ray9", p25, p26, p27));
    objPrimitivos.append(new ObjTriangulo("ray10", p28, p29, p30));
    objPrimitivos.append(new ObjTriangulo("ray11", p31, p32, p33));
    objPrimitivos.append(new ObjTriangulo("ray12", p34, p35, p36));
}

Sol::Sol(QString nome) : Sol(nome, 0, 0, 0) {}

Sol::~Sol()
{
    for(Objeto *obj : objPrimitivos) {
        delete obj;
    }
    objPrimitivos.clear();
}

const QVector<Objeto*> Sol::getObjetos() const
{
    return objPrimitivos;
}

void Sol::desenhar(QPainter *painter, const Viewport &vp, const ObjWindow &window) const
{
    for (Objeto* obj : objPrimitivos) {
        obj->desenhar(painter, vp, window);
    }
}

void Sol::transformar(const Matriz& transformacao)
{
    for (Objeto* obj : objPrimitivos) {
        obj->transformar(transformacao);
    }
}

Ponto3D Sol::getPontoReferencia() const
{
    QVector<Objeto*> subs = this->getObjetos();
    if (subs.isEmpty()) {
        return Ponto3D(0, 0, 0);
    }

    double somaX = 0.0, somaY = 0.0, somaZ = 0.0;
    for (Objeto* sub : subs) {
        Ponto3D refSub = sub->getPontoReferencia();
        somaX += refSub.x();
        somaY += refSub.y();
        somaZ += refSub.z();
    }
    return Ponto3D(somaX / subs.size(), somaY / subs.size(), somaZ / subs.size());
}

