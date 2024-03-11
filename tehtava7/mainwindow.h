#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int player1RemainingTime;
    int player2RemainingTime;

private slots:
    void updateProgressBar();

    void setGameInfoText(QString);

    void on_Startgame_clicked();

    void on_Stopgame_clicked();

    void on_time120_clicked();

    void on_time_5min_clicked();

    void on_SwitchtoPlayer2_clicked();

    void on_SwitchtoPlayer1_clicked();

private:
    Ui::MainWindow *ui;
    QTimer * player1Timer;
    QTimer * player2Timer;
    QTimer * progressUpdateTimer;
    int player1Time;
    int player2Time;

};
#endif // MAINWINDOW_H
