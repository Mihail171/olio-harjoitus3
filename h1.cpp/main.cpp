#include <iostream>
#include "functiot.h"

int main()
{
    float a,b;
    cout<<"enter your  a number : ";
    cin>>a;
    //cout<<endl;
    cout<<"enter your b number : ";

    cin>>b;
    cout<<"a = " << a <<"\n"<<"b = " <<b<< endl;
    calcSum(a,b);
    calcDiv(a,b);
    return 0;
}

