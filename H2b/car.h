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
    Car(string,string,int);
    void printData();
};

#endif // CAR_H
