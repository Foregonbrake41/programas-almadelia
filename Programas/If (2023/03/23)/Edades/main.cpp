#include <iostream>

using namespace std;

int main()
{
    int e;
    cout<<"Teclea tu edad actual: ";
    cin>>e;
    if (e<=12)
    {
        cout<<"Te encuentras en primaria.";
    }
    else
    {
        if (e<=15)
        {
            cout<<"Te encuentras en secundaria.";
        }
        else
        {
            if (e<=18)
            {
                cout<<"Te encuentras en preparatoria.";
            }
            else
            {
                if (e<=23)
                {
                    cout<<"Te encuentras en universidad.";
                }
                else
                {
                    if (e<=60)
                    {
                        cout<<"Eres un trabajador.";
                    }
                    else
                    {
                        cout<<"Eres jubilado.";
                    }
                }
            }
        }
    }
    return 0;
}