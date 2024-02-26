#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler(){
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    //qDebug() << "Button name: " << name;
    QString number1;
    number1 = number1 + name.last(1);
    //qDebug() << number1;
}


void MainWindow::on_n1_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_n2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_n3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_n4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_n5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_n6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_n7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_n8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_n9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_n0_clicked()
{
    numberClickedHandler();
}

