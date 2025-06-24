#include <iostream>

using namespace std;

int main()
{
   int mes,dia;
   cout<<"Meses";
   cout<<"\n1) Enero";
   cout<<"\n2) Febrero";
   cout<<"\n3) Marzo";
   cout<<"\n4) Abril";
   cout<<"\n5) Mayo";
   cout<<"\n6) Junio";
   cout<<"\n7) Julio";
   cout<<"\n8) Agosto";
   cout<<"\n9) Septiembre";
   cout<<"\n10) Octubre";
   cout<<"\n11) Noviembre";
   cout<<"\n12) Diciembre";
   cout<<"\n\nTeclea el número de tu mes de nacimiento: ";
   cin>>mes;
   cout<<"Teclea tu día de nacimiento: ";
   cin>>dia;
   switch (mes)
   {    
       case 1:
       if ((dia>=20)and(dia<=31))
       {
           cout<<"Eres Acuario.";
       }
       else
       {
           cout<<"Eres Capricornio.";
       }
       break;
       
       case 2:
       if ((dia>=19)and(dia<=29))
       {
           cout<<"Eres Piscis.";
       }
       else
       {
           cout<<"Eres Acuario.";
       }
       break;
       
       case 3:
       if ((dia>=21)and(dia<=31))
       {
           cout<<"Eres Aries.";
       }
       else
       {
           cout<<"Eres Piscis.";
       }
       break;
       
       case 4:
       if ((dia>=20)and(dia<=30))
       {
           cout<<"Eres Tauro.";
       }
       else
       {
           cout<<"Eres Aries.";
       }
       break;
       
       case 5:
       if ((dia>=21)and(dia<=31))
       {
           cout<<"Eres Géminis.";
       }
       else
       {
           cout<<"Eres Tauro.";
       }
       break;
       
       case 6:
       if ((dia>=21)and(dia<=30))
       {
           cout<<"Eres Cancer.";
       }
       else
       {
           cout<<"Eres Géminis";
       }
       break;
       
       case 7:
       if ((dia>=23)and(dia<=31))
       {
           cout<<"Eres Leo.";
       }
       else
       {
           cout<<"Eres Cancer.";
       }
       break;
       
       case 8:
       if ((dia>=23)and(dia<=31))
       {
           cout<<"Eres Virgo.";
       }
       else
       {
           cout<<"Eres Leo.";
       }
       break;
       
       case 9:
       if ((dia>=23)and(dia<=30))
       {
           cout<<"Eres Libra.";
       }
       else
       {
           cout<<"Eres Virgo.";
       }
       break;
       
       case 10:
       if ((dia>=23)and(dia<=31))
       {
           cout<<"Eres Escorpio";
       }
       else
       {
           cout<<"Eres Libra.";
       }
       break;
       
       case 11:
       if ((dia>=22)and(dia<=30))
       {
           cout<<"Eres Sagitario.";
       }
       else
       {
           cout<<"Eres Escorpio.";
       }
       break;
       
       case 12:
       if ((dia>=22)and(dia<=31))
       {
           cout<<"Eres Capricornio.";
       }
       else
       {
           cout<<"Eres Sagitario.";
       }
       
       default:
       cout<<"Error. Ingresa un número válido.";
       break;
   }
    return 0;
}
