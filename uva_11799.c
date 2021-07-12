#include<stdio.h>
int main()
{
    int T,p;
    int speed,k;
    int i,max;
    while (scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            max=0;
            scanf("%d",&p);
            for (k=0;k<p;k++)
            {
                scanf("%d",&speed);
                if (speed>max)
                    max=speed;
            }
            printf("Case %d: %ld\n",i,max);
        }
    }
return 0;
}
