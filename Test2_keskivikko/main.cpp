#include <iostream>

using namespace std;
int kertoma(int);

int main()
{
    cout<<"\nfunktio kertoma"<<endl;
    int result =kertoma(5);
     cout<< result<<endl;

    return 0;
}
int kertoma(int n){

    if(n<0){
        return -1;
    }
    else{
        int ker=1;
        for (int i= 1; i <= n; i++) {

            ker=i*ker;

        }
        return ker;

    }



}
