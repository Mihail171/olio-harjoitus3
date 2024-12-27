#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnSecondForm_clicked()
{
    SecondForm *sf=new SecondForm(this);
    sf->open();
}


void Dialog::on_btnThirdForm_clicked()
{
    ThirdForm *tf=new ThirdForm(this);
    tf->open();
}

