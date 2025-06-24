#include <iostream>

using namespace std;

int main()
{
    int s=0,i=0;
    cout<<"Teclea un número: ";cin>>i;
    while (i>0)
    {
        if (i>0)
        {
            s=s+i;
        }
        cout<<"Teclea un número: ";cin>>i;
    }
    cout<<"La suma de todos los números fue de: "<<s;
    return 0;
}