#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char str[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char inp[100];
    while(gets(inp)){

    for(int i =0;i<strlen(inp);i++)
    {
        if(inp[i]=='`'){
                break;
        }
        for(int j =0;j<strlen(str);j++){
            if(inp[i]==' '){
               cout<<inp[i];
               break;
            }
            if(inp[i]==str[j] ){
                cout<<str[j-1];
                break;
            }
        }

    }
    cout<<endl;
    }
    return 0;

}
