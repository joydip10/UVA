#include<stdio.h>

int main()
{
    int t,a,b;
    scanf("%d",&t);
    if(t>=15)
    {
        return 0;
    }
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a>=1000000001 || b>=1000000001)
        {
            return 0;
        }
        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else if(a==b)
        {
            printf("=\n");
        }
    }
    return 0;
}
