#ifndef DIALOG_H
#define DIALOG_H
#include<QMessageBox>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_btnInformation_clicked();

    void on_btnWarning_clicked();

    void on_btnAboutProg_clicked();

    void on_btnQustion_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
