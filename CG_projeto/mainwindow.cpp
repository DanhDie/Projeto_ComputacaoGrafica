#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyFrame.h"
#include "DisplayFile.h"


DisplayFile df;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
* Esse aqui é o método para atualizar os frames que o Danh criou
* Ele costumava carregar junto (entre o setDisplayFile() e update()) a inicialização de todos os objetos
* Agora essa parte é feita integralmente pela main.cpp
*/
void MainWindow :: setDisplayFile(DisplayFile *df){
    MyFrame* frame = qobject_cast<MyFrame*>(ui->frame);
    if (frame) {
        //Pessoalmente me confundi nisso daqui, mas esse setDisplayFile embaixo é do MyFrame, e não do MainWindow
        //A gente ainda não estudou isso direito, mas é aquela coisa de polimorfismo de POO, i.e. podem existir métodos
        //de mesmo nome, contanto que eles sejam parte de classes diferentes (pelo que eu entendi)
        frame->setDisplayFile(df);
        frame->update();
    }

    /*
    * Talvez seja necessário consultar DisplayFile.h e MyComboBox.h para tirar a confusão, mas funciona assim:
    * "ui->" porque o QComboBox comboBox que a gente tá usando foi criado no Qt Designer
    * "comboBox->" é o nome da instância da classe QComboBox que foi criado ainda no Qt Designer
    * "addObjeto()" é um método declarado na MyComboBox.h/.cpp que coloca os nossos objetos na lista
    * "df" é o DisplayFile declarado ali em cima
    * "getObjetos()" é um método do DisplayFile para retornar todos o vetor de objetos que a gente tem
    */
    ui->comboBox->addObjeto(df->getObjetos());
}
