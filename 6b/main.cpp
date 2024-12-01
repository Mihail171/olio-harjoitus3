#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass* objmyclass= new ExampleClass;
    objmyclass->startToWait();
    delete objmyclass;
    objmyclass =nullptr;

    return a.exec();
}
