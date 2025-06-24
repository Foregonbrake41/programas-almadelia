#include <iostream>

using namespace std;

int main()
{
    float r,h,v;
    cout<<"Teclar valor del radio de la base: "; 
    cin>>r;
    cout<<"Teclear valor de la altura del cilindro: ";
    cin>>h;
    v=3.14*(r*r)*h;
    cout<<"El volumen del cilindro es de: "<<v;
    return 0;
}
