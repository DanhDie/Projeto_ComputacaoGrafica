#include "DisplayFile.h"

void DisplayFile::adicionarObjeto(const Objeto& obj) {
    objetos.append(obj);
}

const QVector<Objeto>& DisplayFile::getObjetos() const {
    return objetos;
}

void DisplayFile::limpar() {
    objetos.clear();
}
