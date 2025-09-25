#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyFrame.h"
#include "DisplayFile.h"
#include "matriz.h"
#include "Objetos/ponto.h"
#include "QVector"
#include <QKeyEvent>
#include <QWheelEvent>
#include "viewport.h"
#include "Objetos/objwindow.h"

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

    // Garante que a MainWindow capture os eventos do teclado
    setFocusPolicy(Qt::StrongFocus);

    // Também para o frame onde desenha (MyFrame)
    ui->frame->setFocusPolicy(Qt::StrongFocus);
    setWindowTitle("Skyrim 3 - NathGhostKiller strikes again!");
    setWindowIcon(QIcon(":/new/imagens/icon.ico"));


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
    QVector<Ponto> pontos;

    if (obj->getTipo() == Complexo) {
        // Se for um objeto composto, pega o primeiro subobjeto (ajuste se precisar)
        QVector<Objeto*> subs = obj->getObjetos();
        for (Objeto* sub : subs) {
            pontos += sub->getPontos(); // pega TODOS os pontos de TODOS os subobjetos
        }
    } else {
        pontos = obj->getPontos();
    }

    double somaX = 0.0, somaY = 0.0;
    for (const Ponto &p : pontos) {
        somaX += p[0][0];
        somaY += p[1][0];
    }

    double cx = somaX / pontos.size();
    double cy = somaY / pontos.size();

    return Ponto(cx, cy);
}
void MainWindow::defaultSpinBox(){
    if(!ui->comboBox->currentObjeto()) return;
    Ponto p=refPonto(ui->comboBox->currentObjeto());

    ui->doubleSpinBox_R->setValue(0);
    ui->doubleSpinBox_Rx->setValue(p[0][0]);
    ui->doubleSpinBox_Ry->setValue(p[1][0]);

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
    // Conversão do clique (viewport -> normalizado)
    Viewport vp(0, 0, ui->frame->width(), ui->frame->height());
    Ponto pNorm = vp.desmapear(p.toPoint());

    // Pega a janela de clipping (objeto window)
    ObjWindow* window = dynamic_cast<ObjWindow*>(df->getObjeto("janela"));
    if (!window) return;

    // Conversão do ponto normalizado -> coordenadas do mundo (window)
    Ponto pWindow = window->desnormalizar(pNorm);

    // Agora sim você usa o ponto real:
    ui->doubleSpinBox_Rx->setValue(pWindow[0][0]);
    ui->doubleSpinBox_Ry->setValue(pWindow[1][0]);

    if (!ui->comboBox->currentObjeto()) return;

    /*
    //Código que cálcula distância para translação do objeto ao clicar na tela
    Ponto pAux = refPonto(ui->comboBox->currentObjeto());

    ui->doubleSpinBox_Tx->setValue(pWindow[0][0] - pAux[0][0]);
    ui->doubleSpinBox_Ty->setValue(pWindow[1][0] - pAux[1][0]);
    */
}


void MainWindow::onAplicarTransformacao(){
    Objeto *obj=ui->comboBox->currentObjeto();
    if(!obj) return; //Nenhum objeto selecionado

    // Se for a janela, só atualiza a rotação e retorna
    if (obj->getNome() == "janela") {
        ObjWindow* window = dynamic_cast<ObjWindow*>(obj);
        if (window) {
            double angulo = window->getRotacao()+ui->doubleSpinBox_R->value();
            window->setRotacao(angulo);

            window->pan(ui->doubleSpinBox_Tx->value(),
                        ui->doubleSpinBox_Ty->value());

            window->zoom(sqrt(ui->doubleSpinBox_El->value()*ui->doubleSpinBox_Ea->value()));

            //Atualização dos frames
            ui->frame->update();
            defaultSpinBox();
        }

        return;
    }

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


//-------------IMPLEMENTANDO ZOOM E PAN NA WINDOW ----------------------------

void MainWindow::keyPressEvent(QKeyEvent *event){
    ObjWindow* window = dynamic_cast<ObjWindow*>(df->getObjeto("janela"));
    if (!window) return;

    switch (event->key()){
        // com as setas do teclado
    case Qt::Key_Left:
        window->pan(-10, 0); //move para a esquerda 10 unidades
        break;
    case Qt::Key_Right:
        window->pan(10, 0); //move para a direita 10 unidades
        break;
    case Qt::Key_Up:
        window->pan(0, -10); //move para cima 10 unidades
        break;
    case Qt::Key_Down:
        window->pan(0, 10); //move para baixo 10 unidades
        break;

    // zoom com + e -

    case Qt::Key_Plus:
    case Qt::Key_Equal: // "+", pode ser shift + "="
        window->zoom(0.9); // aproxima
        break;
    case Qt::Key_Minus:
        window->zoom(1.1); // afasta
        break;

    default:
        QWidget::keyPressEvent(event);
        return;

    }

    ui->frame->update(); // redesenha a window
}


void MainWindow::wheelEvent(QWheelEvent *event){
    ObjWindow* window = dynamic_cast<ObjWindow*>(df->getObjeto("janela"));
    if (!window) return;

    int delta = event->angleDelta().y();

    if (delta > 0)
        window->zoom(0.9); // aproxima
    else
        window->zoom(1.1); // afasta

    ui->frame->update();
}
