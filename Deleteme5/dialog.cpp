#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->clear();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnInformation_clicked()
{
    QMessageBox::information(this,"Информация","Для удаления файла нажмите DEl");
}


void Dialog::on_btnWarning_clicked()
{
    QMessageBox::warning(this,"Предупреждение","Фаил будет удален");
}


void Dialog::on_btnAboutProg_clicked()
{

QMessageBox::about(this,"О программе","Вы хотите удалить фаил");

}

void Dialog::on_btnQustion_clicked()
{
    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,"удаление файла","вы хотите удалить фаил",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        ui->label->setText("Вы удалили фаил");
    }
    else
    {
        ui->label->setText("Вы не удалили фаил");
    }


}

