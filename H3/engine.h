#ifndef ENGINE_H
#define ENGINE_H
#include<iostream>
using namespace std;


class Engine
{
    int horsepower;
    double displacement;
public:
    Engine();
     Engine(int, double);


     int getHorsepower() const;
     void setHorsepower(int newHorsepower);
     double getDisplacement() const;
     void setDisplacement(double newDisplacement);
     void printMo0ttori();
};

#endif // ENGINE_H
