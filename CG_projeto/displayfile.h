#ifndef DISPLAYFILE_H
#define DISPLAYFILE_H

#include <QVector>
#include "Objeto.h"

class DisplayFile {
public:
    void adicionarObjeto(Objeto* obj);
    const QVector<Objeto*>& getObjetos() const;
    void limpar();

private:
    QVector<Objeto*> objetos;
};

#endif // DISPLAYFILE_H
