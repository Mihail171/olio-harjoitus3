#ifndef FUNCTIOT_H
#define FUNCTIOT_H
#include <iostream>
using namespace std;



void calcSum(float a,float b);
void calcDiv(float a,float b);
int retSum(int ,int );
void printResult(int(*func)(int,int),int x,int y);
void printResult2(float(*func)(int,int),int x,int y);
float retDiv(int,int);

#endif // FUNCTIOT_H
