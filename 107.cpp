#include<bits/stdc++.h>

using namespace std;

char vec[2000]= {0};
char flag[2000][2000]= {'*'};
int start=0;
int j=0;

void backtrack(char* arr,int s,int pos,int n)
{
    if(pos==0)
        start=arr[pos]-'a';


    if(pos==n)
    {
        for(int i=0; i<s; i++)
            cout<<vec[i];
        cout<<endl;
        return;
    }
    else
    {
        for(int i=j; i<s; i++)
        {
            if(flag[pos][start]!=arr[i] || flag[pos][arr[i]-'a']!=char(start+'a') )
            {
                flag[pos][start]=arr[i];
                flag[pos][arr[i]-'a']=char(start+'a');
                vec[pos]=arr[i];
                j=pos+1;
                backtrack(arr,s,pos+1,n);
            }
            else
            {
                continue;
            }
        }
    }
}
int main()
{
    char arr[3]= {'a','b','c'};
    backtrack(arr,3,0,2);
}
