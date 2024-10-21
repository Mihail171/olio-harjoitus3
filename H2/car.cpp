#include "car.h"



void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}



Car::Car() {
    cout<<"\nmuodostinta kutsuttu"<<endl;
}
