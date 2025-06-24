#include <iostream>

using namespace std;

int main()
{
    float c;
    cout<<"Teclea tu calificación obtenida: ";
    cin>>c;
    if ((c>=5)and(c<=10))
    {
        cout<<"Apto";
    }
    else
    {
        cout<<"No apto";
    }
    return 0;
}
