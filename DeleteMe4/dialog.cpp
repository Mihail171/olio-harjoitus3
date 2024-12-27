#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->lblInfo->clear();
    ui->rb_1_month->setChecked(true);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    float rate;
    if (ui->rb_1_month->isChecked()){
        rate=6.7;
    }
    else if (ui->rb_6_month->isChecked())
        {
        rate=9.5;
    }
    else if (ui->rb_12_month->isChecked())
    {
        rate=12.9;
    }
    ui->lblInfo->setText("процентная ставка "+QString::number(rate)+"%godovix");
}

