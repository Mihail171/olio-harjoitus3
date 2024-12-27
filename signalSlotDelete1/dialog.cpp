#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    objectForm1=new Form1(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnData1_clicked()
{
    connect(objectForm1, SIGNAL(mySignal1()), this, SLOT(data1Slot()));
    objectForm1->open();
}


void Dialog::on_btnData2_clicked()
{
    connect(objectForm1, SIGNAL(mySignal2(QString)), this, SLOT(data2Slot(QString)));
    objectForm1->open();
}

void Dialog::data1Slot()
{
    QString data1=objectForm1->getFname();
    qDebug() << data1;


}

void Dialog::data2Slot(QString data2)
{
    qDebug() << data2;
}

