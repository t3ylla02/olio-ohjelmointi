#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->progressBar->setMaximum(100);
    ui->progressBar->setMinimum(0);

    ui->progressBar_2->setMaximum(100);
    ui->progressBar_2->setMinimum(0);

    player1Timer = new QTimer(this);
    player1Timer->setSingleShot(false);

    player2Timer = new QTimer(this);
    player2Timer->setSingleShot(false);

    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateProgressBar()
{
    if (player1Timer->isActive())
    {
        player1RemainingTime = player1Timer->remainingTime();
        double player1Percentage = static_cast<double>(player1RemainingTime) / player1Time * 100.0;
        ui->progressBar->setValue(static_cast<int>(player1Percentage));
    }
    if (player2Timer->isActive())
    {
        player2RemainingTime = player2Timer->remainingTime();
        double player2Percentage = static_cast<double>(player2RemainingTime) / player2Time * 100.0;
        ui->progressBar_2->setValue(static_cast<int>(player2Percentage));
    }
    if(ui->progressBar->value() == 0){
        setGameInfoText("Player 2 won!!");
        player1Timer->stop();
        player2Timer->stop();
        progressUpdateTimer->stop();
        QTimer::singleShot(2000, this, [this]() {
            setGameInfoText("New game via start button");
        });
    }
    if(ui->progressBar_2->value() == 0){
        setGameInfoText("Player 1 won!!");
        player1Timer->stop();
        player2Timer->stop();
        progressUpdateTimer->stop();
        QTimer::singleShot(2000, this, [this]() {
        setGameInfoText("New game via start button");
        });
    }
}


void MainWindow::on_Startgame_clicked()
{
    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);

    setGameInfoText("Game ongoing");

    player1Timer->start(player1Time);

    progressUpdateTimer = new QTimer(this);
    connect(progressUpdateTimer, &QTimer::timeout, this, &MainWindow::updateProgressBar);
    progressUpdateTimer->start(100);
}


void MainWindow::on_Stopgame_clicked()
{
    setGameInfoText("New game via start button");
    player1Timer->stop();
    player2Timer->stop();
    progressUpdateTimer->stop();
}


void MainWindow::on_time120_clicked()
{
    setGameInfoText("ready to play");
    player1Time = 120000;
    player2Time = 120000;

    player2RemainingTime = 120000;

    player1Timer->setInterval(player1Time);
    player2Timer->setInterval(player2Time);
}


void MainWindow::on_time_5min_clicked()
{
    setGameInfoText("ready to play");
    player1Time = 300000;
    player2Time = 300000;

    player2RemainingTime = 300000;

    player1Timer->setInterval(player1Time);
    player2Timer->setInterval(player2Time);
}



void MainWindow::on_SwitchtoPlayer2_clicked()
{
    player1Timer->stop();
    player2Timer->start(player2RemainingTime);
    updateProgressBar();
}


void MainWindow::on_SwitchtoPlayer1_clicked()
{
    player2Timer->stop();
    player1Timer->start(player1RemainingTime);
    updateProgressBar();
}

void MainWindow::setGameInfoText(QString a)
{
    short b = 19;
    QFont font;
    font.setPointSize(b);
    ui->label->setFont(font);
    ui->label->setText(a);
}
