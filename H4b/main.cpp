#include <iostream>
#include <engine.h>
using namespace std;
#include "wheel.h"
#include"car.h"
int main()
{

    // Engine engine(5,15);
    // engine.printMoottori();
    // Wheel wheel(15,"kesa");
    Car car("Toyota", "Corolla");


    car.setEngine(150, 2.0);
    car.setWheels(17, "kesarengas");
    car.printDetails();

    car.setWheels(18,"talvirenkkaat");
    car.printDetails();

}
