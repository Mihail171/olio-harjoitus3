#ifndef CAR_H
#define CAR_H
#include <iostream>
#include<string>
using namespace std;
class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car();
    void setBrand(const string &newBrand);
    void setModel(const string &newModel);
    void setYearModel(int newYearModel);
    void printData(){
        cout<<"\nbrand : "<<brand<<"\nmodel :"<<model<<"\nyearModel : "<<yearModel<<endl;
    }

};

#endif // CAR_H
