#ifndef DIALOG_H
#define DIALOG_H
#include "form1.h"
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
    void on_btnData1_clicked();

    void on_btnData2_clicked();
    void data1Slot();
    void data2Slot(QString);

private:
    Ui::Dialog *ui;
    Form1 *objectForm1;
};
#endif // DIALOG_H
