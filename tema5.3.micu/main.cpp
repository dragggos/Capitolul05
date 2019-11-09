#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char text[20];
    cout<<"Introduceti un sir de caracatere:";
    cin>>text;
    cout<<text<<endl;
    for(int i=0;i<sizeof(text);i++)
       if (islower(text[i])) text[i]=toupper(text[i]);
            else text[i]=tolower(text[i]);
    cout<<text<<endl;
}
