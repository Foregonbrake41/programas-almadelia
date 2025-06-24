#include <iostream>

using namespace std;

int main()
{
    int x,y,edad;
    float suma,prom;
    string resp;
    cout<<"¿Deseas realizar una captura? [si/no]: ";cin>>resp;
    x=0; suma=0; y=0;
    while (resp=="si")
    {
        x=x+1;
        cout<<"Teclea la edad: ";cin>>edad;
        suma=suma+edad;
        if (edad>=18)
        {
            y=y+1;
        }
        cout<<"¿Deseas realizar otra captura? [si/no]: ";cin>>resp;
    }
    prom=suma/x;
    cout<<"\n"<<"El promedio de la edades fue de: "<<prom<<"\n";
    cout<<"La cantidad de personas mayores de edad fueron: "<<y;
    return 0;
}