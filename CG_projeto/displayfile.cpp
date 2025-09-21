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

void DisplayFile::aplicarTransformacao(const QString& nomeObjeto, const Matriz& transformacao) {
    for (Objeto* obj : objetos) {
        if (obj->getNome() == nomeObjeto) {
            obj->transformar(transformacao);
            break;
        }
    }
}


Objeto* DisplayFile::getObjeto(const QString &nome) const{
    for (Objeto* obj : objetos){
        if(obj->getNome() == nome){
            return obj;
        }
    }
    return nullptr;
}
