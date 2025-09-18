#include "mycombobox.h"
#include "objeto.h"

MyComboBox::MyComboBox(QWidget *parent)
    : QComboBox(parent){}


void MyComboBox::addObjeto(Objeto *o){
    //addItem() é um método específico de QComboBox que toma como parâmetros: (String, Absolutamentequalquercoisa)
    this->addItem(o->getNome(), QVariant::fromValue((void*)o)); //QValue::fromValue((void*)o) diz: ponteiro para qualquer coisa
}

void MyComboBox::addObjeto(const QVector <Objeto*>&objetos){ //Sobrecarga de método
    for(Objeto* o : objetos){
        addObjeto(o);
    }
}

Objeto* MyComboBox::currentObjeto() const{
    QVariant v = this->currentData(); //currentData() é método de QComboBox que pega o objeto selecionado
    return static_cast<Objeto*>(v.value<void*>()); //Esse cast é porque é feito cast em void* em cima, e aqui isso é desfeito
}
