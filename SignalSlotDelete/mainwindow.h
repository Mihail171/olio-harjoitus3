#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "form1.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString getFname() const;
    void setFname(const QString &newFname);

private slots:
    void on_btnData1_clicked();

    void on_btnData2_clicked();
    void data1Slot();
    void data2Slot(QString);

private:
    Ui::MainWindow *ui;
    QString fname;
    void mySignal1();
    void mySignal2(QString);
    Form1 *objectForm1;
};
#endif // MAINWINDOW_H
