#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private slots:

    void on_n1_clicked();

    void on_n2_clicked();

    void on_n3_clicked();

    void on_n4_clicked();

    void on_n5_clicked();

    void on_n6_clicked();

    void on_n7_clicked();

    void on_n8_clicked();

    void on_n9_clicked();

    void on_n0_clicked();

private:
    Ui::MainWindow *ui;
    QString number1,number2;
    int state;
    float result;
    short operand;

    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler;
    void resetLineEdits;
};
#endif // MAINWINDOW_H
