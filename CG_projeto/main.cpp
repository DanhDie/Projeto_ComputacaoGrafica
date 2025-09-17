#include "mainwindow.h"
#include <QApplication>

/*
 * ------------- Lista de objetos --------------
*/
#include "Objetos/Objeto.h"
#include "Objetos/ObjLinha.h"
#include "Objetos/ObjCirculo.h"
#include "Objetos/ObjTriangulo.h"
#include "Objetos/ObjNathGhostKiller.h"
#include "Objetos/objcasa.h"
#include "Objetos/Sol.h"
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

/*alguns testes q fiz de exemplo aplicando algumas transformações, pode descomentar e testar p ver como funciona
    // Aplicar transformação de translação
    Matriz translacao = Matriz::translacao(100, 50); // valores + move p direita - p esquerda, + p baixo - p cima
    df.aplicarTransformacao("Triangulo", translacao);

    // Aplicar rotação em torno do ponto (100, 100)
    Matriz rotacao = Matriz::rotacaoPonto(45, 100, 100); // Rotaciona 45 graus
    df.aplicarTransformacao("Triangulo", rotacao);

    // Aplicar transformação de translação
    Matriz translacao = Matriz::translacao(-200, 10);
    df.aplicarTransformacao("casa", translacao);

    // Aplicar rotação em torno do ponto (200,360)
    Matriz rotacao = Matriz::rotacaoPonto(90, 200, 360); // Rotaciona 90 graus
    df.aplicarTransformacao("casa", rotacao);

    Matriz escala = Matriz::escala(2.0, 2.0); //(1.0, 1.0) fica do tam normal, (2.0, 2.0) dobra o tam, (0.5, 0.5) metade do tam, etc
    df.aplicarTransformacao("casa", escala);

    Matriz translacao = Matriz::translacao(-200, 0);
    df.aplicarTransformacao("sol", translacao);

    Matriz escala = Matriz::escala(0.5, 0.5);
    df.aplicarTransformacao("sol", escala);

    Matriz rotacao = Matriz::rotacaoPonto(180, 350, 100);
    df.aplicarTransformacao("natalia kikuti", rotacao);
*/
    MainWindow w; //Pelo que eu entendi, MainWindow é a tela que vai aparecer no computador
    w.setDisplayFile(&df); //Chama setDisplayFile para fazer a arrumação das coisas na tela
    w.show(); //Isso aqui diz para mostrar as coisas para você
    return a.exec();
}
