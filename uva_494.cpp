#include<cstdio>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int i,c,w;
    char a[1000];
    while(gets(a))
    {
        c=0;
        w=1;
        for(i=0;a[i];i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(w==1)
                c++;
                w=0;
            }
            else
            w=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
