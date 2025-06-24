#include <iostream>

using namespace std;

int main()
{
    int i;
    float x,exa,prac,tar,pexa,pprac,ptar,prom,promt;
    x=0;
    for (i=1;i<=3;i++)
    {
        cout<<"Calificación examen: ";cin>>exa;
        cout<<"Calificación prácticas: ";cin>>prac;
        cout<<"Calificación tareas: ";cin>>tar;
        pexa=exa*.6;
        pprac=prac*.2;
        ptar=tar*.2;
        prom=pexa+pprac+ptar;
        cout<<"El promedio individual es de: "<<prom;cout<<"\n\n";
        x=x+prom;
    }
    promt=x/3;
    cout<<"El promedio total es de: "<<promt;
    return 0;
}