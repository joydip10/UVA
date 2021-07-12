#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    string s, t;
    int i, j, len_s, len_t, temp;
    while(cin >> s >> t)
    {
        len_s=s.length();
        len_t=t.length();
        temp=0;
        for(i=0; i<len_s; i++)
        {
            for(j=0; j<len_t; j++)
            {
                if(s[i]==t[j])
                {
                    temp=temp+1;
                    i++;
                }
            }
        }
        if(temp==len_s)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
