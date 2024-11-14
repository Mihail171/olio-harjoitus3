#include "chef.h"








Chef::Chef(string namea) {
    name=namea;
    cout<<"Chef Gordon Ramsay konstruktori"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef Gordon Ramsay destruktori"<<endl;

}


void Chef::makeSalad(){
    cout<<"Chef Gordon Ramsay makes salad"<<endl;
}

void Chef::makeSoup(){
    cout<<"Chef Gordon Ramsay makes soup"<<endl;
}
