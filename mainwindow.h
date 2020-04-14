#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

   // void on_RB_priority_clicked();

    //void on_RB_sjf_2_clicked();

    //void on_RB_sjf_4_clicked();

//    void on_RB_rr_clicked();

    void on_NewOperation_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
