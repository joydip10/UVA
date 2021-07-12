#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,num,a;

    while(scanf("%d",&t)!=EOF)
    {
         while(t--)
         {
             scanf("%d",&n);
             num=(((((n*567)/9)+7492)*235)/47)-498;
             a=(num/10);
             printf("%d\n",abs(a%10));
         }
    }
    return 0;
}
