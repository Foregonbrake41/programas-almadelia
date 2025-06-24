#include <iostream>

using namespace std;

int main()
{
    int x; float y,compra,prom; string resp; x=0; y=0;
    cout<<"¿Desea hacer una captura? [si/no]: ";cin>>resp;
    while (resp=="si")
    {
        x=x+1;
        cout<<"Teclea el precio de la compra: ";cin>>compra;
        y=y+compra;
        cout<<"\n¿Desea hacer otra captura? [si/no]: ";cin>>resp;
    }
    prom=y/x;
    cout<<"\nEl promedio de compras fue de: $"<<prom;
    return 0;
}