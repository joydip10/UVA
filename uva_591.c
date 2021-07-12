#include<stdio.h>

int main()
{
    int t,i,sum,p,q,n=1,c;
    int size=1000;
    int ara[size];
    while(1)
    {
        scanf("%d",&t);
        if(t<1 || t>50)
        {
            break;
        }
        else if(t==0)
        {
            break;
        }
        for(i=0;i<t;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]<1 || ara[i]>100)
            {
                break;
            }
        }
        printf("Set #%d\n",n);
        sum=0;
        for(i=0;i<t;i++)
        {
            sum=sum+ara[i];
            p=sum;
        }
        q=(p/t);
        c=0;
        for(i=0;i<t;i++)
        {
            if(ara[i]<q)
            {

                while(ara[i]!=q)
                {
                    ara[i]=ara[i]+1;
                    c++;
                }
            }

        }
        printf("The minimum number of moves is %d.\n\n",(c));
        n++;
    }
    return 0;
}

