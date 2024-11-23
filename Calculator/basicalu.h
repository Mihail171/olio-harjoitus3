#ifndef BASICALU_H
#define BASICALU_H

class BasicALU
{
public:
    BasicALU();
    double sum(double a,double b)
    {
        return a+b;
    }
    double sub(double a,double b)
    {
        return a-b;
    }
    double mul(double a,double b)
    {
        return a*b;
    }
    double div(double a,double b)
    {
        return a/b;
    }

};

#endif // BASICALU_H
