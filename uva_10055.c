#include<stdio.h>

int main()
{
   long int a,b,c,k;

    while(scanf("%ld %ld",&a,&b) != EOF)
    {
        if(a>b)
        {
            k=a;
            a=b;
            b=k;
        }
        c=b-a;
        printf("%ld\n",c);
    }
    return 0;
}
