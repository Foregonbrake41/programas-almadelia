#include <iostream>

using namespace std;

int main()
{
    int x;
    string resp;
    float num;
    cout<<"¿Deseas realizar una captura? [si/no]: ";cin>>resp;
    x=0;
    while (resp=="si")
    {
        cout<<"Teclea el número: ";cin>>num;
        num=num%2;
        if (num==0)
        {
            x=x+1;
        }
        cout<<"¿Deseas realizar otra captura? [si/no]: ";cin>>resp;
    }
    cout<<"La cantidad de números positivos ingresados fueron: "<<x;
    return 0;
}

