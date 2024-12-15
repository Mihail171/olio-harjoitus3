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




// void MainWindow::on_pushButton_3_clicked()
// {
//     ui->label->setText("nappi painettu");
// }


// void MainWindow::on_pushButton_clicked()
// {
//         ui->label->setText("nappi painettu");

// }


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply; QMessageBox::question(this, "otsikko","vain tekst",
                          QMessageBox::  Yes|QMessageBox:: No);
    if (reply==QMessageBox::Yes){
        QApplication::quit();
    }    else {
        qDebug()<<"nappi ei ollut painettu";
    }


}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->setPlainText("hello world Miha");
}

