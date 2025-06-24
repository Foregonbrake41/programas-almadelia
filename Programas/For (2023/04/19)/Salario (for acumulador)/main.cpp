#include <iostream>

using namespace std;

int main()
{
    int i,x,d,sd,sf;
    x=0;
    for (i=1;i<=3;i++)
    {
        cout<<"Días trabajados: ";cin>>d;
        cout<<"Cuál es tu salario diario: ";cin>>sd;
        sf=d*sd;
        cout<<"El salario final para el trabajador es: "<<sf;
        x=x+sf;
        cout<<"\n\n";
    }
    cout<<"El total de la nómina es: "<<x;
    return 0;
}