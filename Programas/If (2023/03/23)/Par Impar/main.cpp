#include <iostream>

using namespace std;

int main()

{
    int n,r;
    cout<<"Teclea el número: ";
    cin>>n;
    r=n%2;
    if (r==0)
    {
        cout<<"El número es par.";
    }
    else 
    {
        cout<<"El número es impar.";
    }
    return 0;
}
