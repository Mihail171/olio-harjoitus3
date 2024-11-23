#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printAuto()
{
    cout<<" Auto : "<<model <<" "<< brand<<endl;
}

void Car::printDetails()
{
    objEngine.printMo0ttori();

    objWheel1.printWheel();
    objWheel2.printWheel();
    objWheel3.printWheel();
    objWheel4.printWheel();
    objWheel5->printWheel();
}

Car::Car() {
    objEngine=Engine(150,2);
    objWheel1=Wheel(14,"kesarengas");
     objWheel2=Wheel(16,"kesarengas");
     objWheel3=Wheel(18,"kesarengas");
     objWheel4=Wheel(21,"kesarengas");
     objWheel5=new Wheel(23,"talvirengas");

}

Car::~Car()
{
    delete objWheel5;
    objWheel5=nullptr;
}



Car::Car(string a, string b)
{
    this->brand=a;
    this->model=b;


}

