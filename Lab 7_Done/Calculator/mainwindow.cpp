#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QDebug>
double firstNum;
bool userIsTypingSecondNumber = false;

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_PlusMinus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_Percent,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

connect(ui->pushButton_Add,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
connect(ui->pushButton_Subtract,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
connect(ui->pushButton_Mult,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
connect(ui->pushButton_Divide,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

ui->pushButton_Add->setCheckable(true);
ui->pushButton_Subtract->setCheckable(true);
ui->pushButton_Mult->setCheckable(true);
ui->pushButton_Divide->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed(){
//qDebug() << "test";

    QPushButton * button = (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    if((ui -> pushButton_Add ->isChecked() || ui ->pushButton_Subtract->isChecked() ||ui ->pushButton_Mult->isChecked() ||ui ->pushButton_Divide->isChecked()) && (!userIsTypingSecondNumber) ){
       labelNumber=button->text().toDouble();
       userIsTypingSecondNumber = true;
         newLabel=QString::number(labelNumber,'g',15);
    }

    else{
        if(ui->label->text().contains('.') && button->text() == "0"){
            newLabel = ui -> label->text()+ button->text();
        }
        else{
            labelNumber=(ui->label->text()+button->text()).toDouble();
            newLabel=QString::number(labelNumber,'g',15);

        }
    }

    ui->label->setText(newLabel);
}


void MainWindow::on_pushButton_Decimal_released()
{
    ui ->label->setText(ui->label->text() + "."); //puts found decimal and puts in text

}

void MainWindow:: unary_operation_pressed(){
QPushButton*button = (QPushButton*)sender();
double labelNumber;
QString newLabel;

    if (button->text() == "+/-"){
        labelNumber=ui->label->text().toDouble();
        labelNumber = labelNumber* -1;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }

    if (button->text() == "%"){
        labelNumber=ui->label->text().toDouble();
        labelNumber = labelNumber* 0.01;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }

}

void MainWindow::on_pushButton_Clear_released(){
    ui-> pushButton_Add->setChecked(false);
    ui-> pushButton_Subtract->setChecked(false);
    ui-> pushButton_Mult->setChecked(false);
    ui-> pushButton_Divide->setChecked(false);

    userIsTypingSecondNumber = false;
    ui->label->setText("0");
}

void MainWindow::on_pushButton_Equal_released(){

    double labelNumber, secondNum;
    QString newLabel;

    secondNum = ui->label->text().toDouble();

    if(ui->pushButton_Add->isChecked()){
        labelNumber = firstNum +secondNum;
        newLabel = QString::number(labelNumber, 'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_Add->setChecked(false);
    }

    else if(ui->pushButton_Subtract->isChecked()){

        labelNumber = firstNum -secondNum;
        newLabel = QString::number(labelNumber, 'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_Subtract->setChecked(false);
    }
    else if(ui->pushButton_Mult->isChecked()){
        labelNumber = firstNum *secondNum;
        newLabel = QString::number(labelNumber, 'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_Mult->setChecked(false);
    }
    else if(ui->pushButton_Divide->isChecked()){
        labelNumber = firstNum /secondNum;
        newLabel = QString::number(labelNumber, 'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_Divide->setChecked(false);
    }
    userIsTypingSecondNumber = false;
}

void MainWindow::binary_operation_pressed(){
     QPushButton * button = (QPushButton*)sender();

     firstNum = ui->label->text().toDouble();
     button->setChecked(true); //whatever buttonis pressed its checked

}

