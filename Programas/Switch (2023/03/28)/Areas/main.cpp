#include <iostream>

using namespace std;

int main()
{
    char selec;
    string fig;
    float x,y,resp;
    cout<<"Menu de opciones. Áreas.\n";
    cout<<"\na) Cuadrado";
    cout<<"\nb) Círculo";
    cout<<"\nc) Rectángulo";
    cout<<"\nd) Triángulo";
    cout<<"\n\nSelecciona la operación a realizar tecleando la letra correspondiente del menu: ";
    cin>>selec;
    switch (selec)
    {
        case 'a': case 'A': //Cuadrado
        cout<<"\nTeclea el valor de un lado del cuadrado: ";
        cin>>x;
        resp=x*x;
        fig="cuadrado";
        break;
        
        case 'b': case 'B': //Círculo
        cout<<"\nTeclea el valor del radio: ";
        cin>>x;
        resp=3.1416*(x*x);
        fig="círculo";
        break;
        
        case 'c': case 'C': //rectángulo
        cout<<"\nTeclea el valor de la altura: ";
        cin>>x;
        cout<<"Teclea el valor de la base: ";
        cin>>y;
        resp=x*y;
        fig="rectángulo";
        break;
        
        case 'd': case 'D': //Triángulo
        cout<<"\nTeclea el valor de la altura: ";
        cin>>x;
        cout<<"Teclea el valor de la base: ";
        cin>>y;
        resp=(x*y)/2;
        fig="triángulo";
        break;
        
        default:
        cout<<"\nError en la selección. Utiliza la letra corecta";
        return 0;
    }
    cout<<"El área del "<<fig;
    cout<<" es de: "<<resp;
    return 0;
}
