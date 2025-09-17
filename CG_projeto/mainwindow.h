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

    void setDisplayFile(DisplayFile *displayFile);
    Ponto refPonto(Objeto* obj);
    void defaultSpinBox();

private slots:
    void onComboBoxChanged();
    void onBtEsquerdoPress(QPointF p);
    void onAplicarTransformacao();

private:
    Ui::MainWindow *ui;
    DisplayFile* df=nullptr;
    int indexTrans = -1;
};
#endif // MAINWINDOW_H
