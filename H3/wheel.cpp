#include "wheel.h"

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}

void Wheel::printWheel()
{
    cout<<"Rengas : "<<size<<" tuumaa,"<<type<<endl;
}

Wheel::Wheel() {}

Wheel::Wheel(int a , string b)
{
    this ->size=a;
    this->type=b;
}
