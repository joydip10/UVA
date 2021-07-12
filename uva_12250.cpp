#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    char str[14];

    for(int i=1;;i++)
    {
        cin>>str;

        if(str=="HELLO")
        {
            cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
        }
        else if(str=="HOLA")
        {
            cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
        }
        else if(str=="HALLO")
        {
            cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
        }
        else if(str=="BONJOUR")
        {
            cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
        }
        else if(str=="CIAO")
        {
            cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
        }

        if(str=="#")
            return 0;
    }
    return 0;
}
