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

Car::Car() {}
Car::Car(string a,string b){
    this->model=a;
    this->brand=b;
    this->objwheels=vector<Wheel>(4);
    // for (int i = 0; i < 4; ++i) {
    //     objwheels[i] = Wheel();
}

void Car::setEngine(int horsepower, double displacement)
{
    engine.setHorsepower(horsepower);
    engine.setDisplacement(displacement);
}

void Car::setWheels(int size,const string& type)
{
    for(auto& wheel :objwheels){
        wheel.setSize(size);
        wheel.setType(type);
    }

}
void Car::printDetails()
{
    cout<<" \n Auto : "<<brand<<"  " <<model<<"\nMoottori :"<<engine.getHorsepower()<<" hp\t"<<engine.getDisplacement()<<" L"<<endl;
    for (size_t i = 0; i < objwheels.size(); ++i) {
        cout << "  Rengas " << i + 1 << ": "
             << objwheels[i].getSize() << " tuumaa, "
             << objwheels[i].getType() << "\n";
    }
}



