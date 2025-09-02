#include "mainwindow.h"
#include <QApplication>

/*
 * ------------- Lista de objetos --------------
*/
#include "Objeto.h"
#include "ObjLinha.h"
#include "ObjCirculo.h"
#include "ObjTriangulo.h"
#include "ObjNathGhostKiller.h"
#include "objcasa.h"
/*
 * ---------------------------------------------
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DisplayFile df; //Declara o DisplayFile

    /*
     * Cheque as .h individuais de cada Objeto especifico para entender a passagem de parâmetros
     * Mas em geral, a ordem é X do Primeiro Ponto, Y do Primeiro Ponto, X do Segundo Ponto ... etc etc
    */

    //Triangulozinho
    ObjTriangulo triangulo("Triangulo", 50, 50, 150, 50, 100, 150);
    df.adicionarObjeto(triangulo);

    /*
     * Para desenhos complexos (Que envolvem diversas Linhas, Circulos e Poligonos) siga o exemplo do arquivo
     * ObjNathGhostKiller.h
     * Em suma, você precisa passar o endereço do DisplayFile como parâmetro para o construtor da classe do objeto
     * E dentro do construtor você instancia cada parte do desenho e adiciona ao DisplayFile (Como demonstrado em
     * ObjNathGhostKiller.cpp)
     *
     * Aqui, na main.cpp, basta dar instanciar um objeto da classe do seu desenho, mantendo o código simples e limpo
    */
    ObjNathGhostKiller nathGhostKiller(&df);

    ObjCasa casa(&df);



    MainWindow w; //Pelo que eu entendi, MainWindow é a tela que vai aparecer no computador
    w.setDisplayFile(&df); //Chama setDisplayFile para fazer a arrumação das coisas na tela
    w.show(); //Isso aqui diz para mostrar as coisas para você
    return a.exec();
}
