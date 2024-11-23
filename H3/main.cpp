#include "car.h"
#include "engine.h"
#include <iostream>

using namespace std;

int main()
{

    Car car;
    car.setBrand("Mitsubishi");
    car.setModel("Outlander");

    car.printAuto();
    car.printDetails();

    return 0;
}
