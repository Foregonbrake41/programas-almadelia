#include <iostream>

using namespace std;

int main()
{
    int x,y;
    float prom;
    string resp;
    x=0; y=0;
    cout<<"¿Deseas realizar una captura? [si/no]: ";cin>>resp;
    while  (resp=="si")
    {
        cout<<"Ingrese promedio obtenido: ";cin>>prom;
        if (prom>=6)
        {
            x=x+1;
        }
        else
        {
            y=y+1;
        }
        cout<<"¿Deseas realizar una captura más? [si/no]: ";cin>>resp;
    }
    cout<<"Total de alumnos aprobados: "<<x<<"\n";
    cout<<"Total de alumnos reprobados: "<<y;
    return 0;
    }