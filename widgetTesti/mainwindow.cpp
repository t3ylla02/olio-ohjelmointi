#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->numberLine = new QLineEdit(this);
    ui->numberLine->setReadOnly(true); // Make QLineEdit non-editable
}

MainWindow::~MainWindow()
{
    delete ui;
}

int number = 0;

void MainWindow::on_Count_clicked()
{

    number++;
    qDebug() << number;
    ui->numberLine->setText(QString::number(number));
}


void MainWindow::on_Reset_clicked()
{
    number = 0;
    ui->numberLine->setText(QString::number(number));
}

