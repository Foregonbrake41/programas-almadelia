#include <iostream>
using namespace std;

int main ()

{
    float c,p,cbt,vg;
    cout<<"Teclea el precio del pantalón: ";
    cin>>p;
    cout<<"Teclea el precio de la camisa: ";
    cin>>c;
    cout<<"Teclea el precio de la corbata: ";
    cin>>cbt;
    vg=c+p+cbt;
    cout<<"El precio total por todo es de: "<<vg;
    return 0;
}
