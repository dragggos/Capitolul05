#include <iostream>

using namespace std;

void Ameteala(int parSiVal, int& parTyRef, int* parTotPont)
{
    parSiVal=parSiVal*3;
    parTyRef=parTyRef*3;
    *parTotPont=*parTotPont*2;
}

int main()
{
    int drunkenRat=36;
    Ameteala(drunkenRat,drunkenRat,&drunkenRat);
    cout << drunkenRat << endl;
    return 0;
}
