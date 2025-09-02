#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "DisplayFile.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //Declaração do método para ajeiar o DisplayFile
    void setDisplayFile(DisplayFile *ui); //Única coisa nova adicionada foi essa aqui

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
