#include <iostream>
using namespace std;

int main ()

{
    float lc,lu,p;
    cout<<"Ingresa la longitud del lado congruente: ";
    cin>>lc;
    cout<<"Ingresa la longitud del lado único: ";
    cin>>lu;
    p=(lc*2)+lu;
    cout<<"El perímetro del triángulo es: "<<p;
    return 0;
}
