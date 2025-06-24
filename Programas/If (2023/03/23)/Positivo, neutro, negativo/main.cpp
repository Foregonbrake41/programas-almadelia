#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Teclea un número: ";
    cin>>num;
    if (num>0)
    {
        cout<<"El número es positivo.";
    }
    else
    {
        if (num==0)
        {
            cout<<"El número es neutro.";
        }
        else
        {
            cout<<"El número es negativo";
        }
    }
    return 0;
}