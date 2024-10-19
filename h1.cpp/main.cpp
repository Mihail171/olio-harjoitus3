#include <iostream>

using namespace std;
void calcSum(float a,float b);
void calcDiv(float a,float b);
int main()
{
    float a,b;
    cout<<"enter your  a number : ";
    cin>>a;
    //cout<<endl;
    cout<<"enter your b number : ";
    cout<<"b number entered";
    cin>>b;
    cout<<"a = " << a <<"\n"<<"b = " <<b<< endl;
    calcSum(a,b);
    calcDiv(a,b);
    return 0;
}
void calcSum(float a,float b){
    int sum=a+b;
    cout<<"sum : "<<sum<<endl;
}
void calcDiv(float a,float b){

    if(a>0){
        float div=a/b;
    cout<<"div : "<<div<<endl;
    }
    else {
        cout<<"virhe";
    }

}
