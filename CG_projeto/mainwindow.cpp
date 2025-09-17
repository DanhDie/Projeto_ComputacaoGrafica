#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyFrame.h"
#include "DisplayFile.h"
#include "matriz.h"
#include "Objetos/ponto.h"
#include "QVector"

//----------------------------------- CONSTRUTORES ------------------------------------
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //-----------AQUI PARA BAIXO TEM SLOTS!!!!!!!!!-----------
    //Esse aqui conecta o currentIndexChanged do QComboBox, para quando o usuário trocar a transformação
    QObject::connect(ui->comboBox, &MyComboBox::currentIndexChanged,this,&MainWindow::onComboBoxChanged);

    //Esse aqui conecta o mousePressEvent padrão do Qt com o nosso método para fazer o que precisa
    QObject::connect(ui->frame, &MyFrame::BtEsquerdoPress,this,&MainWindow::onBtEsquerdoPress);

    //Conecta o evento de clicar o botão de aplicar transformação no respectivo slot
    QObject::connect(ui->pushButton, &MyPushButton::clicked, this, &MainWindow::onAplicarTransformacao);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//----------------------------------------------------------------------------


// --------------------------------------- MÉTODOS -----------------------------------------
void MainWindow :: setDisplayFile(DisplayFile *displayFile){
    df=displayFile; //Isto é, ponteiro df da MainWindow recebe o endereço do df declarado na main
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
    //Ajeitando os botões do menu, 1 é a escala padrão
    ui->doubleSpinBox_El->setValue(1.0);
    ui->doubleSpinBox_Ea->setValue(1.0);
}

Ponto MainWindow::refPonto(Objeto *obj){
    QVector<Objeto*> v;
    QVector<Ponto> vPontos;

    if (obj->getTipo()==Complexo){
        v=obj->getObjetos();
        vPontos=v.first()->getPontos();
    }
    else{
        vPontos=obj->getPontos();
    }

    return vPontos.at(0);
}
void MainWindow::defaultSpinBox(){
    ui->doubleSpinBox_R->setValue(0);
    ui->doubleSpinBox_Rx->setValue(0);
    ui->doubleSpinBox_Ry->setValue(0);

    ui->doubleSpinBox_Tx->setValue(0);
    ui->doubleSpinBox_Ty->setValue(0);

    ui->doubleSpinBox_El->setValue(1.0);
    ui->doubleSpinBox_Ea->setValue(1.0);
}

//---------------------------------------------------------------------


// ------------------------ SLOTS ----------------------------

void MainWindow::onComboBoxChanged(){
    //Reset das transformações para zero
    defaultSpinBox();
}

void MainWindow::onBtEsquerdoPress(QPointF p){
    //Rotação recebe o ponto exato de onde o usuário clicou na tela
    ui->doubleSpinBox_Rx->setValue(p.x());
    ui->doubleSpinBox_Ry->setValue(p.y());

    //Translação não funciona informando o x e y de onde se deseje chegar, e sim passando deslocamento
    if(!ui->comboBox->currentObjeto()) return;

    Ponto pAux=refPonto(ui->comboBox->currentObjeto()); //1 dos pontos do objeto selecionado
    ui->doubleSpinBox_Tx->setValue(p.x() - pAux[0][0]); //Diferença x do Ponto clicado e o ponto do objeto
    ui->doubleSpinBox_Ty->setValue(p.y() - pAux[1][0]); // ^   ^   y   ^   ^   ^   ^   ^   ^   ^   ^
}

void MainWindow::onAplicarTransformacao(){
    Objeto *obj=ui->comboBox->currentObjeto();
    if(!obj) return; //Nenhum objeto selecionado

    Ponto p=refPonto(obj);

    //Matriz da Translação
    Matriz T = Matriz::translacao(ui->doubleSpinBox_Tx->value(),
                                  ui->doubleSpinBox_Ty->value());
    //Matriz da Rotação
    Matriz R = Matriz::rotacaoPonto(ui->doubleSpinBox_R->value(),
                                    ui->doubleSpinBox_Rx->value(),
                                    ui->doubleSpinBox_Ry->value());
    //Matriz da Escala
    Matriz E = Matriz::escalaPonto(ui->doubleSpinBox_El->value(),
                                   ui->doubleSpinBox_Ea->value(),
                                   p[0][0],p[1][0]);
    //Cálculo da Matriz final
    Matriz Final = T * R * E;
    df->aplicarTransformacao(obj->getNome(), Final);

    //Atualiza os frames para mostrar a transformação
    MyFrame* frame = qobject_cast<MyFrame*>(ui->frame);
    if(frame) frame->update();

    //Reset das transformações para zero
    defaultSpinBox();
}
//---------------------------------------------------------------------------
