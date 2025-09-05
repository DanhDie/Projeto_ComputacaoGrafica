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
#include "Sol.h"
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

    /*
    * Tome nota do novo padrão de instanciamento de objetos . . .
    * Dava para fazer em duas linhas separadas, claro, mas deu preguiça
    */
    df.adicionarObjeto(new ObjTriangulo ("Triangulo", 50, 50, 150, 50, 100, 150));

    df.adicionarObjeto(new ObjNathGhostKiller ("natalia kikuti"));

    df.adicionarObjeto(new ObjCasa("casa"));

    df.adicionarObjeto(new Sol("sol"));

    MainWindow w; //Pelo que eu entendi, MainWindow é a tela que vai aparecer no computador
    w.setDisplayFile(&df); //Chama setDisplayFile para fazer a arrumação das coisas na tela
    w.show(); //Isso aqui diz para mostrar as coisas para você
    return a.exec();
}
