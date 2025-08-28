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

    MyFrame* frame = qobject_cast<MyFrame*>(ui->frame);
    if (frame) {
        frame->setDisplayFile(&df);

        // Triângulo
        Objeto triangulo("Triangulo", Poligono);
        triangulo.adicionarPonto(QPoint(50, 50));
        triangulo.adicionarPonto(QPoint(150, 50));
        triangulo.adicionarPonto(QPoint(100, 150));
        df.adicionarObjeto(triangulo);

        // Linhas
        Objeto linha("braco1", Linha);
        linha.adicionarPonto(QPoint(170, 50));
        linha.adicionarPonto(QPoint(300, 150));
        df.adicionarObjeto(linha);

        Objeto linha1("braco2", Linha);
        linha1.adicionarPonto(QPoint(525, 50));
        linha1.adicionarPonto(QPoint(400, 150));
        df.adicionarObjeto(linha1);

        Objeto boca("boca", Linha);
        boca.adicionarPonto(QPoint(310, 130));
        boca.adicionarPonto(QPoint(350, 150));
        df.adicionarObjeto(boca);
        Objeto boca1("boca1", Linha);
        boca1.adicionarPonto(QPoint(350, 150));
        boca1.adicionarPonto(QPoint(390, 130));
        df.adicionarObjeto(boca1);

        // Círculos
        Objeto circulo("cabeca", Circulo);
        //ponto central
        circulo.adicionarPonto(QPoint(350, 100));
        //raio do circulo
        circulo.adicionarPonto(QPoint(70, 0));
        df.adicionarObjeto(circulo);

        Objeto olho1("olho1", Circulo);
        olho1.adicionarPonto(QPoint(320,80));
        olho1.adicionarPonto(QPoint(30,0));
        df.adicionarObjeto(olho1);

        Objeto olho2("olho1", Circulo);
        olho2.adicionarPonto(QPoint(380,80));
        olho2.adicionarPonto(QPoint(30,0));
        df.adicionarObjeto(olho2);

        Objeto pupila1("pupila1", Circulo);
        pupila1.adicionarPonto(QPoint(325,80));
        pupila1.adicionarPonto(QPoint(20,0));
        df.adicionarObjeto(pupila1);

        Objeto pupila2("pupila1", Circulo);
        pupila2.adicionarPonto(QPoint(375,80));
        pupila2.adicionarPonto(QPoint(20,0));
        df.adicionarObjeto(pupila2);


        frame->update();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
