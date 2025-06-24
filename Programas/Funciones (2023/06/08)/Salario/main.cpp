#include <iostream>
using namespace std;

float SALARIO(int,float);

int main()
{
    int dt; float sd,salario;
    cout<<"Teclea los días trabajados: ";cin>>dt;
    cout<<"Teclea el salario diario: ";cin>>sd;
    salario=SALARIO(dt,sd);
    cout<<"El salario total es de: $"<<salario;
}

float SALARIO(int dt,float sd)
{
    float salario;
    salario=dt*sd;
    return salario;
}