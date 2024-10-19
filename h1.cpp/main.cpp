#include <iostream>
#include "functiot.h"

int main()
{
    int a,b;
    cout<<"enter your  a number : ";
    cin>>a;
    //cout<<endl;
    cout<<"enter your b number : ";

    cin>>b;
    cout<<"a = " << a <<"\n"<<"b = " <<b<< endl;
    calcSum(a,b);
    calcDiv(a,b);
    int sum=retSum(a,b);
    cout<<"sum = "<<sum<<endl;
    float div =retDiv(a,b);
    cout<<"div : "<<div<<endl;
    printResult(retSum,a,b);
   // printResult2(retDiv,a,b);

    return 0;
}

