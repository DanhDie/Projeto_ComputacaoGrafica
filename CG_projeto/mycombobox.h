#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QComboBox>
#include <QVector>

//"Fowarding Declaration" eu realmente não sei explicar, vocês não tem ideia de quão frustrante é não entender C++
class Objeto;

class MyComboBox : public QComboBox
{
    Q_OBJECT
public:
    explicit MyComboBox(QWidget *parent = nullptr);

    void addObjeto(Objeto* o);
    void addObjeto(const QVector <Objeto*>&objetos); //Sobrecarga de método
    Objeto * currentObjeto() const;// Quer ver esse "const" dar problema de novo?
};

#endif // MYCOMBOBOX_H
