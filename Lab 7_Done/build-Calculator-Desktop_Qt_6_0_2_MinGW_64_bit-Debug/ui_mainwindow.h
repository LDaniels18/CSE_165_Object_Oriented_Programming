/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_PlusMinus;
    QPushButton *pushButton_Percent;
    QPushButton *pushButton_Divide;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Mult;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_Subtract;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Decimal;
    QPushButton *pushButton_Equal;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(241, 360);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 241, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        pushButton_Clear = new QPushButton(centralwidget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(0, 60, 61, 61));
        pushButton_Clear->setFont(font);
        pushButton_Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE\342\200\213, stop: 1 #D7D7D7\342\200\213);\n"
"}"));
        pushButton_PlusMinus = new QPushButton(centralwidget);
        pushButton_PlusMinus->setObjectName(QString::fromUtf8("pushButton_PlusMinus"));
        pushButton_PlusMinus->setGeometry(QRect(60, 60, 61, 61));
        pushButton_PlusMinus->setFont(font);
        pushButton_PlusMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE\342\200\213, stop: 1 #D7D7D7\342\200\213);\n"
"}"));
        pushButton_Percent = new QPushButton(centralwidget);
        pushButton_Percent->setObjectName(QString::fromUtf8("pushButton_Percent"));
        pushButton_Percent->setGeometry(QRect(120, 60, 61, 61));
        pushButton_Percent->setFont(font);
        pushButton_Percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE\342\200\213, stop: 1 #D7D7D7\342\200\213);\n"
"}"));
        pushButton_Divide = new QPushButton(centralwidget);
        pushButton_Divide->setObjectName(QString::fromUtf8("pushButton_Divide"));
        pushButton_Divide->setGeometry(QRect(180, 60, 61, 61));
        pushButton_Divide->setFont(font);
        pushButton_Divide->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832\342\200\213, stop: 1 #FF9739\342\200\213);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 120, 61, 61));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 120, 61, 61));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 120, 61, 61));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_Mult = new QPushButton(centralwidget);
        pushButton_Mult->setObjectName(QString::fromUtf8("pushButton_Mult"));
        pushButton_Mult->setGeometry(QRect(180, 120, 61, 61));
        pushButton_Mult->setFont(font);
        pushButton_Mult->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832\342\200\213, stop: 1 #FF9739\342\200\213);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 180, 61, 61));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 180, 61, 61));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 180, 61, 61));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_Subtract = new QPushButton(centralwidget);
        pushButton_Subtract->setObjectName(QString::fromUtf8("pushButton_Subtract"));
        pushButton_Subtract->setGeometry(QRect(180, 180, 61, 61));
        pushButton_Subtract->setFont(font);
        pushButton_Subtract->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832\342\200\213, stop: 1 #FF9739\342\200\213);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 240, 61, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 240, 61, 61));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 240, 61, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_Add = new QPushButton(centralwidget);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));
        pushButton_Add->setGeometry(QRect(180, 240, 61, 61));
        pushButton_Add->setFont(font);
        pushButton_Add->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832\342\200\213, stop: 1 #FF9739\342\200\213);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 300, 121, 61));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"  background-color: rgb(103, 103, 103);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde\342\200\213, stop: 1 #f6f7fa\342\200\213);\n"
"}"));
        pushButton_Decimal = new QPushButton(centralwidget);
        pushButton_Decimal->setObjectName(QString::fromUtf8("pushButton_Decimal"));
        pushButton_Decimal->setGeometry(QRect(120, 300, 61, 61));
        pushButton_Decimal->setFont(font);
        pushButton_Decimal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE\342\200\213, stop: 1 #D7D7D7\342\200\213);\n"
"}"));
        pushButton_Equal = new QPushButton(centralwidget);
        pushButton_Equal->setObjectName(QString::fromUtf8("pushButton_Equal"));
        pushButton_Equal->setGeometry(QRect(180, 300, 61, 61));
        pushButton_Equal->setFont(font);
        pushButton_Equal->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832\342\200\213, stop: 1 #FF9739\342\200\213);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_PlusMinus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_Percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_Divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_Mult->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_Equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
