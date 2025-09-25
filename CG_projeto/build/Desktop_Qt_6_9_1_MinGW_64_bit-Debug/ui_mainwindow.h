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
        MainWindow->resize(963, 530);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(32, 32, 32, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(218, 64, 98, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(40, 40, 40, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(16, 16, 16, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(21, 21, 21, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        QBrush brush6(QColor(217, 211, 191, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        QBrush brush7(QColor(75, 38, 46, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush7);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        QBrush brush8(QColor(74, 39, 46, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        QBrush brush9(QColor(146, 44, 58, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        QBrush brush11(QColor(0, 0, 0, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
        QBrush brush12(QColor(255, 255, 255, 127));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
        QBrush brush13(QColor(16, 16, 16, 127));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new MyFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 701, 501));
        QPalette palette1;
        QBrush brush14(QColor(254, 211, 221, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        frame->setPalette(palette1);
        frame->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        comboBox = new MyComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(740, 10, 201, 28));
        QPalette palette2;
        QBrush brush15(QColor(239, 220, 224, 255));
        brush15.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush15);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        QBrush brush16(QColor(39, 39, 39, 255));
        brush16.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        QBrush brush17(QColor(255, 170, 255, 255));
        brush17.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush17);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush17);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush15);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush17);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush17);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush15);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush17);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush17);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        comboBox->setPalette(palette2);
        comboBox->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";\n"
"selection-color: rgb(255, 170, 255);\n"
"selection-background-color: rgb(255, 170, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(800, 60, 91, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label->setPalette(palette3);
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(800, 160, 71, 20));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label_2->setPalette(palette4);
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(810, 330, 51, 20));
        label_3->setBaseSize(QSize(0, 0));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label_3->setPalette(palette5);
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_R = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_R->setObjectName("doubleSpinBox_R");
        doubleSpinBox_R->setGeometry(QRect(790, 180, 81, 29));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        doubleSpinBox_R->setPalette(palette6);
        doubleSpinBox_R->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_R->setDecimals(2);
        doubleSpinBox_R->setMinimum(-999999999.000000000000000);
        doubleSpinBox_R->setMaximum(99999999.000000000000000);
        doubleSpinBox_R->setSingleStep(10.000000000000000);
        doubleSpinBox_El = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_El->setObjectName("doubleSpinBox_El");
        doubleSpinBox_El->setGeometry(QRect(750, 370, 81, 29));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        doubleSpinBox_El->setPalette(palette7);
        doubleSpinBox_El->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_El->setDecimals(2);
        doubleSpinBox_El->setMinimum(0.000000000000000);
        doubleSpinBox_El->setMaximum(99999999.000000000000000);
        doubleSpinBox_El->setSingleStep(0.200000000000000);
        pushButton = new MyPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(730, 440, 211, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        pushButton->setPalette(palette8);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_Rx = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Rx->setObjectName("doubleSpinBox_Rx");
        doubleSpinBox_Rx->setGeometry(QRect(750, 260, 81, 29));
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        doubleSpinBox_Rx->setPalette(palette9);
        doubleSpinBox_Rx->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_Rx->setDecimals(2);
        doubleSpinBox_Rx->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Rx->setMaximum(99999999.000000000000000);
        doubleSpinBox_Rx->setSingleStep(10.000000000000000);
        doubleSpinBox_Ry = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Ry->setObjectName("doubleSpinBox_Ry");
        doubleSpinBox_Ry->setGeometry(QRect(840, 260, 81, 29));
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        doubleSpinBox_Ry->setPalette(palette10);
        doubleSpinBox_Ry->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_Ry->setDecimals(2);
        doubleSpinBox_Ry->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Ry->setMaximum(99999999.000000000000000);
        doubleSpinBox_Ry->setSingleStep(10.000000000000000);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(770, 240, 63, 20));
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label_6->setPalette(palette11);
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(860, 240, 63, 20));
        QPalette palette12;
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label_7->setPalette(palette12);
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        label_7->setTextFormat(Qt::TextFormat::MarkdownText);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(780, 80, 63, 20));
        QPalette palette13;
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label_8->setPalette(palette13);
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_Ty = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Ty->setObjectName("doubleSpinBox_Ty");
        doubleSpinBox_Ty->setGeometry(QRect(850, 100, 81, 29));
        QPalette palette14;
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        doubleSpinBox_Ty->setPalette(palette14);
        doubleSpinBox_Ty->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_Ty->setDecimals(2);
        doubleSpinBox_Ty->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Ty->setMaximum(99999999.000000000000000);
        doubleSpinBox_Ty->setSingleStep(10.000000000000000);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(870, 80, 63, 20));
        QPalette palette15;
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label_9->setPalette(palette15);
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        label_9->setTextFormat(Qt::TextFormat::MarkdownText);
        doubleSpinBox_Tx = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Tx->setObjectName("doubleSpinBox_Tx");
        doubleSpinBox_Tx->setGeometry(QRect(760, 100, 81, 29));
        QPalette palette16;
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        doubleSpinBox_Tx->setPalette(palette16);
        doubleSpinBox_Tx->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_Tx->setDecimals(2);
        doubleSpinBox_Tx->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Tx->setMaximum(99999999.000000000000000);
        doubleSpinBox_Tx->setSingleStep(10.000000000000000);
        doubleSpinBox_Ea = new MyDoubleSpinBox(centralwidget);
        doubleSpinBox_Ea->setObjectName("doubleSpinBox_Ea");
        doubleSpinBox_Ea->setGeometry(QRect(840, 370, 81, 29));
        QPalette palette17;
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        doubleSpinBox_Ea->setPalette(palette17);
        doubleSpinBox_Ea->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        doubleSpinBox_Ea->setDecimals(2);
        doubleSpinBox_Ea->setMinimum(0.000000000000000);
        doubleSpinBox_Ea->setMaximum(99999999.000000000000000);
        doubleSpinBox_Ea->setSingleStep(0.200000000000000);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(760, 350, 63, 20));
        QPalette palette18;
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label_4->setPalette(palette18);
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(850, 350, 63, 20));
        QPalette palette19;
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label_5->setPalette(palette19);
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(780, 220, 81, 20));
        QPalette palette20;
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette20.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette20.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette20.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        label_10->setPalette(palette20);
        label_10->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(720, 140, 231, 20));
        QPalette palette21;
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette21.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette21.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette21.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        line->setPalette(palette21);
        line->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(720, 310, 231, 20));
        QPalette palette22;
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette22.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette22.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette22.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        line_2->setPalette(palette22);
        line_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(720, 410, 231, 20));
        QPalette palette23;
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette23.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette23.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette23.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        line_3->setPalette(palette23);
        line_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(720, 40, 231, 20));
        QPalette palette24;
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush14);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush11);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush15);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush16);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush8);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush9);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush8);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush10);
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette24.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush14);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush11);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush15);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush16);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush8);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush9);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush8);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush10);
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette24.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush14);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush11);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush8);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush15);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush9);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush8);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush10);
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette24.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        line_4->setPalette(palette24);
        line_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Nirmala UI\";"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 963, 21));
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
