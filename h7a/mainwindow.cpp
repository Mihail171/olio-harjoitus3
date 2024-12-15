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

void MainWindow::on_btnlogin_2_clicked()
{
    objLogin=new Login(this);
    objLogin->show();
}

void MainWindow::getUSerFromLogin()
{

}

