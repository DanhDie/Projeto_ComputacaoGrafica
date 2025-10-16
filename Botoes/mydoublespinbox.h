#ifndef MYDOUBLESPINBOX_H
#define MYDOUBLESPINBOX_H

#include <QDoubleSpinBox>
#include <QObject>

class MyDoubleSpinBox : public QDoubleSpinBox
{
    Q_OBJECT
public:
    explicit MyDoubleSpinBox(QWidget *parent = nullptr);
};

#endif // MYDOUBLESPINBOX_H
