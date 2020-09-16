#include <headers/mainwindow.h>
#include <headers/arguments.h>
#include "ui_mainwindow.h"
#include <QMessageBox>

const QString msgTitle = "Информация";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_getKBit_clicked()
{
    Arguments args(
                    ui->
                        text_Input->
                            toPlainText()
                   );

    QMessageBox().information(this, msgTitle, QString().number( args.value().getBit_h(args.k() ) ) );
}

void MainWindow::on_btn_setUnsetBit_clicked()
{
    Arguments args(
                    ui->
                        text_Input->
                            toPlainText()
                   );

    QMessageBox().information(this, msgTitle, QString().number( args.value().xorBit_h(args.k()).getValue(), 2));
}


void MainWindow::on_btn_swapBit_clicked()
{
    Arguments args(
                    ui->
                        text_Input->
                            toPlainText()
                   );

    QMessageBox().information(this, msgTitle, QString().number( args.value().swapBit_h(
                                                                        args.i(), args.j()).getValue(), 2 ));
}



void MainWindow::on_btn_zeroBits_clicked()
{
    Arguments args(
                    ui->
                        text_Input->
                            toPlainText()
                   );

    QMessageBox::information(this, msgTitle, QString().number( args.value().zeroBits_h(args.m()).getValue(), 2 ));
}
