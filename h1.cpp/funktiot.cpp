#include "functiot.h"

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
int retSum(int a,int b){
   //int ret=a+b;
    return a+b;
}
float retDiv(int a,int b){

    if(a!=0){
    //float div=a/b;
        return static_cast<float>(a/b);
    }
    else {
        return 0;
    }
}
void printResult(int(*func)(int,int),int x,int y){
    int result= func(x,y);
    cout<<"result : "<<result<<endl;
}
void printResult2(float(*func)(int,int),int x,int y){
    float result2= func(x,y);
    cout<<"result : "<<result2<<endl;
}

