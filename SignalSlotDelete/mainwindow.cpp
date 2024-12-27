#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     objectForm1=new Form1(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::getFname() const
{
    return fname;
}

void MainWindow::setFname(const QString &newFname)
{
    fname = newFname;
}

void MainWindow::mySignal1()
{

}

void MainWindow::mySignal2(QString)
{

}

void MainWindow::on_btnData1_clicked()
{
    connect(objectForm1, SIGNAL(mySignal1()), this, SLOT(data1Slot()));
    objectForm1->open();
}


void MainWindow::on_btnData2_clicked()
{
    connect(objectForm1, SIGNAL(mySignal2(QString)), this, SLOT(data2Slot(QString)));
    objectForm1->open();
}

void MainWindow::data1Slot()
{
    QString data1=objectForm1->getFname();
    qDebug() << data1;
}

void MainWindow::data2Slot(QString data2)
{
     qDebug() << data2;
}

