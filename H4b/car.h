#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;
#include"engine.h"
#include "wheel.h"
#include <vector>


class Car
{
    Engine engine;
    vector<Wheel>objwheels;
    string model;
    string brand;
public:
    Car();
    Car(string , string );

    void setEngine(int,double);
    void setWheels(int,const string& type);



    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    void printDetails();
};

#endif // CAR_H
