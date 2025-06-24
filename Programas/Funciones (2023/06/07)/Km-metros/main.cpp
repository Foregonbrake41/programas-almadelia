#include <iostream>
using namespace std;

double distancia(double);
int main()
{
    double km;
    cout<<"Teclea la distancia en km: ";cin>>km;
    double metros=distancia(km);
    cout<<"\nLa distancia en metros es: "<<metros;
}

double distancia(double km)
{
    double metros;
    metros=km*1000;
    return metros;
}