#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string.h>
    using namespace std;

class Car

{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(string brand1,string model1,int yearModel1);
    void printData();
    ~Car();
};

#endif // CAR_H
