#include <iostream>
using namespace std;

int HORA(int);
int MINUTOS(int);

int main()
{
    int seg,h,m;
    cout<<"Teclea cuantos segundos son: ";cin>>seg;
    h=HORA(seg);
    m=MINUTOS(seg);
    cout<<seg<<" segundo(s) son: \n";
    cout<<h<<" hora(s)\n";
    cout<<m<<" minuto(s)\n";
}

int HORA(int seg)
{
    int h;
    h=seg/3360;
    return h;
}

int MINUTOS(int seg)
{
    int m;
    m=seg/60;
    return m;
}