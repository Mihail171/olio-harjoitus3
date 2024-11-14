#include "italialainenchef.h"





void ItalialainenChef::makePasta()
{
    cout<<"Italian Chef Anthony Bourdain makes pasta"<<endl;
}

string ItalialainenChef::getName()
{
    return name;
}

ItalialainenChef::ItalialainenChef(string namea) : Chef(namea) {
    name = namea;
    cout << "ItalianChef Anthony Bourdain konstruktor" << endl;
}

ItalialainenChef::~ItalialainenChef()
{
    cout<<"ItalianChef Aunthony Bourdain destruktori"<<endl;
}




