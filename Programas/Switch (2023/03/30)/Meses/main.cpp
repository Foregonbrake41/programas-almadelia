#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Menú de opciones. Meses.\n";
    cout<<"\n1) Enero.";
    cout<<"\n2) Febrero.";
    cout<<"\n3) Marzo.";
    cout<<"\n4) Abril.";
    cout<<"\n5) Mayo.";
    cout<<"\n6) Junio.";
    cout<<"\n7) Julio.";
    cout<<"\n8) Agosto.";
    cout<<"\n9) Septiembre.";
    cout<<"\n10) Octubre.";
    cout<<"\n11) Noviembre.";
    cout<<"\n12) Diciembre.";
    cout<<"\n\nTeclea un número del 1 al 12: ";
    cin>>num;
    switch (num)
    {
        case 1:
        cout<<"\nEnero tiene 31 días.";
        break;
        
        case 2:
        cout<<"\nFebrero tiene 28 días (y en años bisiestos 29).";
        break;
        
        case 3:
        cout<<"\nMarzo tiene 31 días.";
        break;
        
        case 4:
        cout<<"\nAbril tiene 30 días.";
        break;
        
        case 5:
        cout<<"\nMayo tiene 31 días.";
        break;
        
        case 6:
        cout<<"\nJunio tiene 30 días.";
        break;
        
        case 7:
        cout<<"\nJulio tiene 31 días.";
        break;
        
        case 8:
        cout<<"\nAgosto tiene 31 días.";
        break;
        
        case 9:
        cout<<"Septiembre tiene 30 días.";
        break;
        
        case 10:
        cout<<"Octubre tiene 31 días.";
        break;
        
        case 11:
        cout<<"Noviembre tiene 30 días.";
        break;
        
        case 12:
        cout<<"Diciembre tiene 31 días.";
        break;
        
        default:
        cout<<"Error. Ingresa un número válido.";
        break;
    }
    return 0;
}
