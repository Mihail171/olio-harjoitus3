#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    Car myCar;
    myCar.setBrand("Mitsubishi");
    myCar.setModel("Outlander");
    myCar.setYearModel(2016);

    myCar.printData();


}
