#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include <QPainter>
#include "DisplayFile.h"

class MyFrame : public QFrame {
    Q_OBJECT
public:
    explicit MyFrame(QWidget *parent = nullptr);

    void adicionarObjeto(Objeto* obj);
    void setDisplayFile(DisplayFile* df);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    DisplayFile* displayFile;  // referência ao display file
};

#endif // MYFRAME_H
