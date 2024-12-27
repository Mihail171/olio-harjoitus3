#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "secondform.h"
#include "thirdform.h"
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
    void on_btnSecondForm_clicked();

    void on_btnThirdForm_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
