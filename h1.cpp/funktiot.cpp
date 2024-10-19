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
