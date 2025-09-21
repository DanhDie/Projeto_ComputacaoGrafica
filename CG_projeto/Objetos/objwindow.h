#ifndef OBJWINDOW_H
#define OBJWINDOW_H

#include "objeto.h"

class ObjWindow : public Objeto {
public:
    ObjWindow(QString nome, double xmin, double ymin, double xmax, double ymax);

    // Atualiza os limites (caso a janela seja transformada)
    void atualizarLimites(double xmin, double ymin, double xmax, double ymax);

    Ponto normalizar(const Ponto& p, const ObjWindow* window);
    Ponto desnormalizar(const Ponto& p);

    // Retorna limites da Window
    double getXmin() const;
    double getYmin() const;
    double getXmax() const;
    double getYmax() const;
};

#endif // OBJWINDOW_H
