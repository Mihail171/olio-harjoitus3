#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //  ui->lblGreeting->clear();
    // // ui->lblName->clear();
    // // ui->txtName->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// void MainWindow::on_btnOk_clicked()
// {
//     QString name=ui->txtName->text();
//     if(name.isEmpty()){

//         ui->lblGreeting->setText("Heello tuntematon");

//     }
//     else
//     {
//         ui->lblOut->setText("privet ," +name+"!");
//     }

// }

