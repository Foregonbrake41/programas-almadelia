#include <iostream>
using namespace std;
int main()
{
    string resp; int opc,s,e,i;
    s=0; e=0; i=0;
    cout<<"¿Deseas realizar una captura? [si/no]: "; cin>>resp;
    while (resp=="si")
    {
        cout<<"\nCarreras disponibles";
        cout<<"\n1) Ingeneria en sistemas";
        cout<<"\n2) Ingeneria electronica";
        cout<<"\n3) Ingeneria industrial";
        cout<<"\nTeclea la carrera a elegir: ";cin>>opc; 
        switch (opc)
        {
            case 1:
            s=s+1;
            break;
            
            case 2:
            e=e+1;
            break;
            
            case 3:
            i=i+1;
            break;
            
            default:
            cout<<"\nError. Selecciona una opción correcta.";
            resp="si";
            break;
        }
        cout<<"\n¿Deseas realizar otra captura? [si/no]: ";cin>>resp;
    }
    cout<<"\nAlumnos inscritos en ingeneria en sistemas: "<<s;
    cout<<"\nAlumnos inscritos en ingeneria electronica: "<<e;
    cout<<"\nAlumnos inscritos en ingeneria industrial: "<<i;
    return 0; 
}  