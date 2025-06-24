#include <iostream>
using namespace std;

float MI(float);

int main()
{
    float mi,metros;
    cout<<"Teclea cuántas millas nautcas son: ";cin>>mi;
    metros=MI(mi);
    cout<<"Son: "<<metros<<" metro(s).";
}

float MI(float mi)
{
    float metros;
    metros=mi*1852;
    return metros;
}