#include <iostream>
#include "car.h"
#include "rectangle.h"
using namespace std;

int main()
{
    Car myCar;
    myCar.setBrand("Mitsubishi");
    myCar.setModel("Outlander");
    myCar.setYearModel(2016);

    myCar.printData();
    cout<<" seuraava luokka "<<endl;
    Rectangle myRectangle;
    myRectangle.setHeight(15);
    myRectangle.setWidth(5);
    cout<<"Area : "<<myRectangle.getArea()<<
        "\nCircum : "<<myRectangle.getCircum()<<endl;


}
