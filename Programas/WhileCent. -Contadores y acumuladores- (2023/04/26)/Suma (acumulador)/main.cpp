#include <iostream>

using namespace std;

int main()
{
    string resp;
    float num,x;
    cout<<"¿Deseas realizar una captura? [si/no]: ";cin>>resp;
    x=0;
    while (resp=="si")
    {
        cout<<"Ingresa el número: ";cin>>num;
        x=x+num;
        cout<<"¿Deseas realizar otra captura? [si/no]: ";cin>>resp;
    }
    cout<<"La suma total de todos los números es: "<<x;
    return 0;
}
    