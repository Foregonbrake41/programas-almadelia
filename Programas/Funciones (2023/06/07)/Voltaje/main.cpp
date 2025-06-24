#include <iostream>
using namespace std;

double voltaje(double);
int main()
{   
    double f;
    double voltios=voltaje(f);
    cout<<"El voltaje total de los 3 focos es de: "<<voltios<<" kilovoltios.";
}

double voltaje(double f)
{
    double voltios;
    voltios=3*120;
    return voltios;
}

