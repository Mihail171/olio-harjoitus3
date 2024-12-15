#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "login.h"
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

private slots:
    void on_btnlogin_2_clicked();
    void getUSerFromLogin();

private:
    Ui::MainWindow *ui;
    Login* objLogin;
    QString username;
};
#endif // MAINWINDOW_H
