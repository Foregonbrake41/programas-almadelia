#include <iostream>

using namespace std;

int main()
{
    float c,d,f;
    cout<<"Teclea el precio del celular: ";
    cin>>c;
    d=c*.15;
    f=c-d;
    cout<<"\nEl precio original del celular era de: "<<c;
    cout<<"\nEl descuento fue de: "<<d;
    cout<<"\nEl precio final del celular junto al descuento es de: "<<f;
    return 0;
}
