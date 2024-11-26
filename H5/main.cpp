#include "aggregationa.h"
#include "assosiationa.h"

#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int b=10;
    cout<<"a :n arvo on: "<<a<< " , ja osoite on :  "<<&a<<endl;
    cout<<"b :n arvo on: "<<b<< " , ja osoite on :  "<<&b<<endl;
    int* myPointer =&a;
    cout<<"pointerin osoite: "<<myPointer<<"ja poitnerin arvo on: "<<*myPointer<<endl;

    myPointer=&b;
    cout<<"pointerin osoite: "<<myPointer<<"ja pointerin arvo on: "<<*myPointer<<endl;
    int &refA=a;
    cout<<"refA osoite: "<<&refA<<"ja refA arvo on: "<<refA<<endl;
    cout<<"ASSOSIATIO"<<endl;
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<"AGGREGATIO"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;
    return 0;
}
