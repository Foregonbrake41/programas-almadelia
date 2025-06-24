#include <iostream>

using namespace std;

int main()
{
    int opc;
    cout<<"Peajes por Vehículo";
    cout<<"\n1) Vehículo particular";
    cout<<"\n2) Autobus";
    cout<<"\n3) Microbus";
    cout<<"\n4) Motocicleta";
    cout<<"\n5) Taxi";
    cout<<"\n6) Trailer";
    cout<<"\n\nTeclea el número correspondiente al tipo de vehículo: ";
    cin>>opc;
    switch (opc)
    {
        case 1:
            cout<<"\n\nPuente Tampico";
            cout<<"\nVehículo particular";
            cout<<"\nUsted debe pagar: $80";
            cout<<"\nGracias. Buen viaje.";
        break;
        
        case 2:
            cout<<"\n\nPuente Tampico";
            cout<<"\nAutobus";
            cout<<"\nUsted debe pagar: $60";
            cout<<"\nGracias. Buen viaje.";
        break;
        
        case 3:
            cout<<"\n\nPuente Tampico";
            cout<<"\nMicrobus";
            cout<<"\nUsted debe pagar: $50";
            cout<<"\nGracias. Buen viaje.";
        break;
        
        case 4:
            cout<<"\n\nPuente Tampico";
            cout<<"\nMotocicleta";
            cout<<"\nUsted debe pagar: $30";
            cout<<"\nGracias. Buen viaje.";
        break;
        
        case 5:
            cout<<"\n\nPuente Tampico";
            cout<<"\nTaxi";
            cout<<"\nUsted debe pagar: $60";
            cout<<"\nGracias. Buen viaje.";
        break;
        
        case 6:
            cout<<"\n\nPuente Tampico";
            cout<<"\nTrailer";
            cout<<"\nUsted debe pagar: $120";
            cout<<"\nGracias. Buen viaje.";
        break;
        
        default:
            cout<<"Error. Teclea un número válido.";
        break;
    }
    return 0;
}