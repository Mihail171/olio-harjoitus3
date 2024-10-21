#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;

int main()
{
    cout<<"\n=========luokka Car===============";
    Car myCar;
    myCar.setBrand("Mitsubishi");
    myCar.setModel("Outlander");
    myCar.setYearModel(2016);

    myCar.printData();
    cout<<"==========  luokka Rectangle ========== "<<endl;
    Rectangle myRectangle;
    myRectangle.setHeight(15);
    myRectangle.setWidth(5);
    cout<<"Area : "<<myRectangle.getArea()<<
        "\nCircum : "<<myRectangle.getCircum()<<endl;
    cout<<"=========== luokka studen======== "<<endl;
    Student *objectStudent2;
    objectStudent2 =new Student();
    objectStudent2->setName("Mihail");
    objectStudent2->setStudentNumber(20);
    objectStudent2->setAverage(5);
    cout<<objectStudent2->getName()<<endl;
    cout<<objectStudent2->getStudentNumber()<<endl;
    cout<<objectStudent2->getAverage()<<endl;
    //delete objectStudent2;
   // objectStudent2=nullptr;
    return 0;
}
