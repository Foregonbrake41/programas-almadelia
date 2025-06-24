#include <iostream>

using namespace std;

int main()
{
    float e1,e2,e3,prom,colorg,colfin;
    string nom;
    cout<<"Ingresa tu nombre completo: ";
    getline(cin,nom);
    cout<<"Teclea la calificación obtenida en el examen 1: ";
    cin>>e1;
    cout<<"Teclea la calificación obtenida en el examen 2: ";
    cin>>e2;
    cout<<"Teclea la calificación obtenida en el examen 3: ";
    cin>>e3;
    prom=(e1+e2+e3)/3;
    cout<<"Teclea cuánto estás pagando de colegiatura: ";
    cin>>colorg;
    if (prom>=8)
    {
        colfin=colorg-(colorg*.10);
        cout<<"\nNombre: "<<nom;
        cout<<"\nAsignatura: Química";
        cout<<"\n¡Felicitaciones! Eres acreedor a una beca.";
        cout<<"\nAhora tu colegiatura será de: $"<<colfin;
        return 0;
    }
    else
    {
        cout<<"\nNombre: "<<nom;
        cout<<"\nAsignatura: Química";
        cout<<"\nNo eres acreedor a una beca. Esfuerzate más para la próxima.";
        cout<<"\nTu colegiatura sigue siendo de $"<<colorg;
        return 0;
    }
}
