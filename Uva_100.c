#include<stdio.h>

int main()
{
   int j=0,m=0,k=0,n=0,c=0,s=0;
   int i;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        printf("%d %d",m,n);
        s=0;
        if(m>n)
        {
            k=m;
            m=n;
            n=k;
        }

        for(i=m;i<=n;i++)
        {
            c=1;
            j=i;
            while(j>1)
            {
                if(j%2==0)
                {
                    j=j/2;
                }
                else
                {
                    j=(3*j)+1;
                }
                c++;
            }
            if(c>=s)
                s=c;
        }
        printf(" %d\n",s);
    }
    return 0;
}
