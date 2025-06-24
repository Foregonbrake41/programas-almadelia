#include <iostream>
using namespace std;

int main ()

{
    float e1,e2,e3,pf,p;
    cout<<"Teclea la calificación del examen 1: ";
    cin>>e1;
    cout<<"Teclea la calificación del examen 2: ";
    cin>>e2;
    cout<<"Teclea la calificación del examen 3: ";
    cin>>e3;
    cout<<"Teclea la calificación del proyecto final: ";
    cin>>pf;
    p=(e1+e2+e3+pf)/4;
    cout<<"\nAlumno: Juan Pérez.\nAsignatura: Química.\n";
    cout<<"Promedio: "<<p;
    return 0;
}

