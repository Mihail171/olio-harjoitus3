#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H
#include <QThread>
#include <QObject>
#include <QCoreApplication>
#include <QDebug>
class ExampleClass : public QObject
{
    Q_OBJECT
public:
    explicit ExampleClass(QObject *parent = nullptr);
    ~ExampleClass();
    void startToWait();
signals:
    void readyToSay();
public slots:
    void sayHelloSlot();

};

#endif // EXAMPLECLASS_H
