#include "car.h"

//Car::Car() {}



Car::Car(string brand1, string model1, int yearModel1){
    brand=brand1;
    model=model1;
    yearModel=yearModel1;
}

void Car::  printData()
{
    cout<<"brand : "<<brand<<"\nmodel : "<<model<<"\nyear model : "<<yearModel<<endl;
}

Car::~Car()
{
    cout<<"tuhoaja kutsuttu"<<endl;
}
