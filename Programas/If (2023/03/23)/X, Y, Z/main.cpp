#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout<<"Teclea el número x: ";
    cin>>x;
    cout<<"Teclea el número y: ";
    cin>>y;
    cout<<"Teclea el número z: ";
    cin>>z;
    if ((x>y)and(x>z))
    {
        cout<<"El número mayor es x.";
    }
    else
    {
        if ((y>x)and(y>z))
        {
            cout<<"El número mayor es y.";
        }
        else
        {
            cout<<"El número mayor es z.";
        }
    }
    return 0;
}