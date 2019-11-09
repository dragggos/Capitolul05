#include <iostream>
#include "operatii.h"

using namespace std;

void interfata()
{
    cout<<"Operatii posibile la minicalculator:"<<endl;
    cout<<"1. Adunare "<<endl;
    cout<<"2. Scadere "<<endl;
    cout<<"3. Inmultire "<<endl;
    cout<<"4. Impartire "<<endl;
    cout<<"5. Modulo "<<endl;
}

int main()
{

    interfata();
    int n,m,p;
    cout<<"Introduceti operatia pe care doriti sa o efectuati:";
    cin>>n;
    cout<<"Introduceti primul numar:";
    cin>>m;
    cout<<"Introduceti al doilea numar:";
    cin>>p;
    switch (n)
    {
        case 1 : cout<<m<<" + "<<p<<" = "<<adunare(m,p)<<endl;break;
        case 2 : cout<<m<<" - "<<p<<" = "<<scadere(m,p)<<endl;break;
        case 3 : cout<<m<<" * "<<p<<" = "<<inmultire(m,p)<<endl;break;
        case 4 : cout<<m<<" / "<<p<<" = "<<impartire(m,p)<<endl;break;
        case 5 : cout<<m<<" % "<<p<<" = "<<modulo(m,p)<<endl;break;
        default : cout<<"Nu este nicio operatie cu acest numar!"<<endl;
    }


}
