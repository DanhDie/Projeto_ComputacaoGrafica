#ifndef DISPLAYFILE_H
#define DISPLAYFILE_H

#include <QVector>
#include "Objeto.h"

class DisplayFile {
public:
    void adicionarObjeto(Objeto* obj);
    const QVector<Objeto*>& getObjetos() const;
    void limpar();

    void aplicarTransformacao(const QString& nomeObjeto, const Matriz& transformacao);

private:
    QVector<Objeto*> objetos;
};

#endif // DISPLAYFILE_H
