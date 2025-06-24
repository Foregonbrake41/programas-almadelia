#include <iostream>

using namespace std;

int main()
{
    float h,pt;
    cout<<"Ingresa el precio de 1 hotdog: ";
    cin>>h;
    pt=8500+(20*80)+(15*h);
    cout<<"El precio total por la fiesta fue de: "<<pt;
    return 0;
}

