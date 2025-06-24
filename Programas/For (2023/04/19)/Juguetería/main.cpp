#include <iostream>
using namespace std;

int main()
{
    char opc;
    int i,pc,tc,jc,mc,xp,xt,xj,xm;
    float pp,tp,jp,mp,dpp,dpt,dpj,dpm,yp,yt,yj,ym;
    for (i=1;i<=3;i++)
    {                                                                                   // X son objetos Y es dinero
        cout<<"Opciones de compra\n\n";
        cout<<"a) Pelotas\n";
        cout<<"b) Trenes\n";
        cout<<"c) Juegos de Mesa\n";
        cout<<"d) Muñecas\n";
        cout<<"\nTeclea la letra de la opción comprada: ";cin>>opc;
        switch (opc)
        {
            case 'a':
            cout<<"Teclea el número de pelotas compradas: ";cin>>pc;
            cout<<"Teclea el precio de las pelotas: ";cin>>pp;
            dpp=pc*pp;
            cout<<"El dinero a pagar son: "<<dpp<<"\n\n";
            xp=xp+pc;
            yp=yp+dpp;
            break;
            
            case 'b':
            cout<<"Teclea el número de trenes compradas: ";cin>>tc;
            cout<<"Teclea el precio de los trenes: ";cin>>tp;
            dpt=tc*tp;
            cout<<"El dinero a pagar son: "<<dpt<<"\n\n";
            xt=xt+tc;
            yt=yt+dpt;
            break;
            
            case 'c':
            cout<<"Teclea el número de juegos de mesa compradas: ";cin>>jc;
            cout<<"Teclea el precio de los juegos de mesa: ";cin>>jp;
            dpj=jc*jp;
            cout<<"El dinero a pagar son: "<<dpj<<"\n\n";
            xj=xj+jc;
            yj=yj+dpj;
            break;
            
            case 'd':
            cout<<"Teclea el número de muñecas compradas: ";cin>>mc;
            cout<<"Teclea el precio de las muñecas: ";cin>>mp;
            dpm=mc*mp;
            cout<<"El dinero a pagar son: "<<dpm<<"\n\n";
            xm=xm+mc;
            ym=ym+dpm;
            break;
            
            default:
            cout<<"Selección incorrecta. Elija una compatible.";
            return 0;
            break;
        }
    }
    cout<<"Juguetes vendidos:\n";
    cout<<"Pelotas: "<<xp<<"\n";
    cout<<"Trenes: "<<xt<<"\n";
    cout<<"Juegos de Mesa: "<<xj<<"\n";
    cout<<"Muñecas: "<<xm<<"\n";
    cout<<"\nGanancia por juguete:\n";
    cout<<"Pelotas: "<<yp<<"\n";
    cout<<"Trenes: "<<yt<<"\n";
    cout<<"Juegos de Mesa: "<<yj<<"\n";
    cout<<"Muñecas: "<<ym<<"\n";
    return 0;
}