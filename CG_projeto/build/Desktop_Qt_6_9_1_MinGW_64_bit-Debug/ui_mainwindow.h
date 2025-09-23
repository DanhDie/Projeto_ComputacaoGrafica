/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <mycombobox.h>
#include "mydoublespinbox.h"
#include "myframe.h"
#include "mypushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    MyFrame *frame;
    MyComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    MyDoubleSpinBox *doubleSpinBox_R;
    MyDoubleSpinBox *doubleSpinBox_El;
    MyPushButton *pushButton;
    MyDoubleSpinBox *doubleSpinBox_Rx;
    MyDoubleSpinBox *doubleSpinBox_Ry;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    MyDoubleSpinBox *doubleSpinBox_Ty;
    QLabel *label_9;
    MyDoubleSpinBox *doubleSpinBox_Tx;
    MyDoubleSpinBox *doubleSpinBox_Ea;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_10;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(961, 569);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new MyFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 711, 501));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        comboBox = new MyComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(740, 10, 201, 28));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(800, 60, 121, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(800, 160, 121, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(810, 330, 121, 20));
        doubleSpinBox_R = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_R->setObjectName("doubleSpinBox_R");
        doubleSpinBox_R->setGeometry(QRect(790, 180, 81, 29));
        doubleSpinBox_R->setDecimals(2);
        doubleSpinBox_R->setMinimum(-999999999.000000000000000);
        doubleSpinBox_R->setMaximum(99999999.000000000000000);
        doubleSpinBox_R->setSingleStep(10.000000000000000);
        doubleSpinBox_El = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_El->setObjectName("doubleSpinBox_El");
        doubleSpinBox_El->setGeometry(QRect(750, 370, 81, 29));
        doubleSpinBox_El->setDecimals(2);
        doubleSpinBox_El->setMinimum(0.000000000000000);
        doubleSpinBox_El->setMaximum(99999999.000000000000000);
        doubleSpinBox_El->setSingleStep(0.200000000000000);
        pushButton = new MyPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(750, 440, 171, 31));
        doubleSpinBox_Rx = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Rx->setObjectName("doubleSpinBox_Rx");
        doubleSpinBox_Rx->setGeometry(QRect(750, 260, 81, 29));
        doubleSpinBox_Rx->setDecimals(2);
        doubleSpinBox_Rx->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Rx->setMaximum(99999999.000000000000000);
        doubleSpinBox_Rx->setSingleStep(10.000000000000000);
        doubleSpinBox_Ry = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Ry->setObjectName("doubleSpinBox_Ry");
        doubleSpinBox_Ry->setGeometry(QRect(840, 260, 81, 29));
        doubleSpinBox_Ry->setDecimals(2);
        doubleSpinBox_Ry->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Ry->setMaximum(99999999.000000000000000);
        doubleSpinBox_Ry->setSingleStep(10.000000000000000);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(770, 240, 63, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(860, 240, 63, 20));
        label_7->setTextFormat(Qt::TextFormat::MarkdownText);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(780, 80, 63, 20));
        doubleSpinBox_Ty = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Ty->setObjectName("doubleSpinBox_Ty");
        doubleSpinBox_Ty->setGeometry(QRect(850, 100, 81, 29));
        doubleSpinBox_Ty->setDecimals(2);
        doubleSpinBox_Ty->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Ty->setMaximum(99999999.000000000000000);
        doubleSpinBox_Ty->setSingleStep(10.000000000000000);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(870, 80, 63, 20));
        label_9->setTextFormat(Qt::TextFormat::MarkdownText);
        doubleSpinBox_Tx = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Tx->setObjectName("doubleSpinBox_Tx");
        doubleSpinBox_Tx->setGeometry(QRect(760, 100, 81, 29));
        doubleSpinBox_Tx->setDecimals(2);
        doubleSpinBox_Tx->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Tx->setMaximum(99999999.000000000000000);
        doubleSpinBox_Tx->setSingleStep(10.000000000000000);
        doubleSpinBox_Ea = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Ea->setObjectName("doubleSpinBox_Ea");
        doubleSpinBox_Ea->setGeometry(QRect(840, 370, 81, 29));
        doubleSpinBox_Ea->setDecimals(2);
        doubleSpinBox_Ea->setMinimum(0.000000000000000);
        doubleSpinBox_Ea->setMaximum(99999999.000000000000000);
        doubleSpinBox_Ea->setSingleStep(0.200000000000000);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(760, 350, 63, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(850, 350, 63, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(780, 220, 111, 20));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(720, 140, 241, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(720, 310, 241, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(720, 410, 241, 20));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(720, 40, 241, 20));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 961, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Selecione um objeto", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Transla\303\247\303\243o", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Rota\303\247\303\243o", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Escala", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Aplicar Transforma\303\247\303\265es", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Largura", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Altura", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Ponto do eixo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
