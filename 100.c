#include<stdio.h>

int main()
{
    int i,j,k,m,n,c,s;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        s=0;
        if(m>n)
        {
            k=m;
            m=n;
            n=k;
        }
        for(i=m;i<=n;i++)
        {
            c=0;
            j=i;
            while(j>1)
            {
                if(j%2==0) j/=2;
                else j=3*j+1;
                c++;
            }
            if(c>s)
                s=c;
        }
        printf("%d %d %d\n",m,n,s+1);
    }
    return 0;
}
