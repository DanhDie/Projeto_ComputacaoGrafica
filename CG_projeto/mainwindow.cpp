#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyFrame.h"
#include "DisplayFile.h"
#include "matriz.h"

DisplayFile df;

//----------------------------------- CONSTRUTORES ------------------------------------
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Slot!!! Esse aqui conecta o currentIndexChanged do QComboBox, para quando o usuário trocar a transformação
    QObject::connect(ui->comboBox, &MyComboBox::currentIndexChanged,this,&MainWindow::onComboBoxChanged);
    QObject::connect(ui->comboBoxTrans, &MyComboBox::currentIndexChanged,this,&MainWindow::onComboBoxTransChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//----------------------------------------------------------------------------


// --------------------------------------- MÉTODOS -----------------------------------------
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

    ui->comboBoxTrans->addItems({"Transalação","Escala","Rotação"}); //Caixa de trasnformações para proof of concept
}

void MainWindow::aplicarTransformacao(int index, Objeto* obj){
    if(!obj || index ==-1) return; //Nenhum objeto selecionado || nenhuma trasnformacao selecionada

    switch(index){
        case 0:{
            Matriz T = Matriz::translacao(10,20);
            //Código
            qDebug() << "Aplicando Translação";
            break;
        }
        case 1:{
            Matriz S = Matriz::escala(2,2);
            //Código
            qDebug() << "Aplicando escala";
            break;
        }
        case 2:{
            Matriz R = Matriz::rotacao(45);
            //Código
            qDebug() << "Aplicando Rotação";
            break;
        }
    }
}

//---------------------------------------------------------------------


// ------------------------ SLOTS ----------------------------
void MainWindow::onComboBoxTransChanged(int index){
    indexTrans = index; //Caso o usuário troque a trasnformacao antes do objeto
    aplicarTransformacao(index, ui->comboBox->currentObjeto());
}

void MainWindow::onComboBoxChanged(int index){
    aplicarTransformacao(indexTrans, ui->comboBox->currentObjeto());
}
//---------------------------------------------------------------------------
