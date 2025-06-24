 #include <iostream>

using namespace std;

int main()
{
    int x; string resp;
    float casa,totalind,y;
    cout<<"¿Deseas hacer una captura? [si/no]: ";cin>>resp;
    x=0; y=0;
    while (resp=="si")
    {
        x=x+1;
        cout<<"Teclea el precio del inmueble: ";cin>>casa;
        totalind=casa*0.28;
        y=y+totalind;
        cout<<"El costo del impuesto predial es de: $"<<totalind;
        cout<<"\n¿Desea hacer otra captura? [si/no]: ";cin>>resp;
    }
    cout<<"\nMunicipio de Altamira.";
    cout<<"\nNúmero de contribuyentes: "<<x;
    cout<<"\nGanancia total: $"<<y;
    return 0;
}