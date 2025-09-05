#include "DisplayFile.h"

void DisplayFile::adicionarObjeto(Objeto* obj) {
    objetos.append(obj);
}

const QVector<Objeto*>& DisplayFile::getObjetos() const {
    return objetos;
}

void DisplayFile::limpar() {
    for (Objeto* obj: objetos){
        delete obj;
    }
    objetos.clear();
}
