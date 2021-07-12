#include<stdio.h>

int main()
{
    long int n;
    while(scanf("%ld",&n))
    {
        if(n<0 || n>210000000) break;
        printf("%ld\n",((n*(n+1))/2)+1);
    }
    return 0;
}
