#include <iostream>
using namespace std;

double cubo(double);
int main()
{
    double num;
    cout<<"Teclea el número que quieras elevar al cubo: ";cin>>num;
    double cumb=cubo(num);
    cout<<"El cubo de "<<num<<" es: "<<cumb;
}
double cubo(double num)
{
    double resp;
    resp=num*num*num;
    return resp;
}