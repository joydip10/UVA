#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    int a,b,sum,p,i,j;
    while((scanf("%d",&t))!=EOF)
    {
    for(i=1;i<=t;i++)
    {
       scanf("%d",&a);
       scanf("%d",&b);
       sum=0;
       for(j=a;j<=b;j++)
       {
           if(j%2 != 0)
           {
               sum=sum+j;
               p=sum;
           }
       }
       printf("Case %d: %d\n",i,p);
    }
    }
    return 0;
}
