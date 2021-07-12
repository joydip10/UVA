#include<stdio.h>

int main()
{
    int v,t;

    while(scanf("%d %d",&v,&t)!=EOF)
    {
        if(v<-100 ||  v>100)
        {
            return 0;
        }
        else if(0 > t || t>200)
        {
            return 0;
        }
        printf("%d\n",2*v*t);
    }
    return 0;
}
