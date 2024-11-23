#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include<iostream>
using namespace std;
#include<string>
#include <vector>


class Car
{
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    Wheel *objWheel5;
     string model;
      string brand;
public:
    Car();
    ~Car();
    Car(string,string);

    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);

    void printAuto();
    void printDetails();

};

#endif // CAR_H
