#include <iostream>

using namespace std;

int main()
{
    float c,p,t,tp;
    string s;
    cout<<"Ingresa la cantidad de zapatos: ";
    cin>>c;
    cout<<"Teclea el precio de los zapatos: ";
    cin>>p;
    cout<<"Teclea el sexo del menor: ";
    cin>>s;
    t=p*c;
    if (s=="niño")
    {
        tp=t*.95;
    }
    else (s=="niña");
    {
        tp=t*.9;
    }
    cout<<"\nZapaterías Fred";
    cout<<"\nTotal a pagar: $"<<tp;
    cout<<"\n¡Felíz día del niño!";
    return 0;
}