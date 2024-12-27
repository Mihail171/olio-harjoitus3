#include "dialog.h"
#include "ui_dialog.h"
#include "fourform.h"
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
    SecondForm *sf=new SecondForm("Mihail",this);
    sf->open();
}


void Dialog::on_btnThirdForm_clicked()
{
    ThirdForm *tf=new ThirdForm("Niklas",this);
    tf->open();
}


void Dialog::on_btnFourForm_clicked()
{
    FourForm *objectFourForm=new FourForm(this);
    objectFourForm->setNameFromMain("Mikael");
    objectFourForm->show();
}

