#include <QCoreApplication>
#include"myclass.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyClass* objmyclass=new MyClass;
    objmyclass->raiseMySignal();
    delete objmyclass;
    objmyclass=nullptr;
    return a.exec();
}
