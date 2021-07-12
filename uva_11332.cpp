#include<iostream>
#include<cstdio>

using namespace std;

int max_sum(int n)
{
    int sum=0,p,q;
    while(1)
    {
        sum=sum+(n%10);
        n=n/10;
        p=sum;
        if(n<=0)
        {
            break;
        }

    }
    if((p/10)<1)
    {
        return p;
    }
    else
    {
        q=p;
        return max_sum(q);
    }
}

int main()
{
   int t;
   int num;

   while(scanf("%d",&num)!=EOF)
   {
       if(num==0) break;

       printf("%d\n",max_sum(num));
   }

   return 0;
}
