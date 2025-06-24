#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Teclea un número del 1 al 7: ";
    cin>>num;
    switch (num)
    {
        case 1:
        cout<<"Lunes es el día número 1";
        break;
        
        case 2:
        cout<<"Martes es el día número 2";
        break;
        
        case 3:
        cout<<"Miércoles es el día número 3";
        break;
        
        case 4:
        cout<<"Jueves es el día número 4";
        break;
        
        case 5:
        cout<<"Viernes es el día número 5";
        break;
        
        case 6:
        cout<<"Sábado es el día número 6";
        break;
        
        case 7:
        cout<<"Domingo es el día número 7";
        break;
        
        default:
        cout<<"Error. Ingresa un número válido.";
        break;
    }
    return 0;
}