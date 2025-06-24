#include <iostream>

using namespace std;

int main()
{
    int i;
    double dias,salfin;
    for (i=1; i<=3; i++)
    {
        cout<<"Teclea días trabajados: ";
        cin>>dias;
        salfin=dias*300;
        cout<<"Tu salario es de: "<<salfin;cout<<"\n\n";
    } 
    return 0;
}
