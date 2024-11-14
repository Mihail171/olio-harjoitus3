#include <iostream>
#include "chef.h"
#include "italialainenchef.h"

int main()
{
    cout << "Hello World!" << endl;
    Chef chef("Ramzay");
    chef.makeSalad();
    chef.makeSoup();
    cout<<"toinen objekti kutsutaan"<<endl;
    ItalialainenChef  chef2("Bourdain Authony");
    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();
    cout<<"name of the Italian Chef  "<<chef2.getName()<<endl;


    return 0;
}
