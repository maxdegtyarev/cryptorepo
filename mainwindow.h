#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btn_getKBit_clicked();

    void on_btn_setUnsetBit_clicked();



    void on_btn_swapBit_clicked();



    void on_btn_zeroBits_clicked();

private:
    Ui::MainWindow *ui;
    
    
};

#endif // MAINWINDOW_H
