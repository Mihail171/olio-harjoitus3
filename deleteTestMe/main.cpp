#include "mainwindow.h"
#include "hellobutton.h"
#include <QApplication>
#include"qpushbutton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();
    HelloButton btn;
    btn.show();
    a.connect(&btn, SLOT(clicked()),&a,SLOT(quit()));
    return a.exec();
}
