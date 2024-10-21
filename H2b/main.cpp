#include <iostream>
#include"car.h"

using namespace std;

int main()
{
    cout << "\n========Car========" << endl;

    Car cars[3]={
                  Car("Bmv","x5",1998),
        Car("Lada","1",1993),
        Car("Mers","S500",2001)
    };
    for(int i=0;i<3;i++){
        cout<<"\nCar "<<(i+1)<< endl;
        cars[i].printData();
    }

    return 0;
}
