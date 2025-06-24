#include <iostream>
using namespace std;

double calcula_media(double,double);

int main ()
{
    double num1,num2;
    cout<<"Introduzca el primer número: ";cin>>num1;
    cout<<"Introduzca el segundo número: ";cin>>num2;
    double resultado=calcula_media(num1,num2);
    cout<<"La media de "<<num1<<" y "<<num2<<" es "<<resultado<<".\n";
}

double calcula_media(double num1, double num2)
{
    double media;
    media=(num1+num2)/2;
    return media;
}