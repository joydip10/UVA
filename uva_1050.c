#include<stdio.h>
#include<math.h>

int main()
{
    int ara[4],i,A,P,Q,R;

    while(scanf("%d %d %d %d",&ara[0],&ara[1],&ara[2],&ara[3]))
    {

    if(ara[0]==0 && ara[1]==0 && ara[2]==0 && ara[3]==0)
    {
        return 0;
    }
    if(ara[0]<0 || ara[0]>40 || ara[1]<0 || ara[1]>40 || ara[2]<0 || ara[2]>40 || ara[3]<0 || ara[3]>40)
    {
        return 0;
    }
    if(fabs(ara[0]-ara[1])>20)
    {
        P=(40-fabs(ara[0]-ara[1]))*9;
    }
    else
    {
        P=(fabs(ara[0]-ara[1]))*9;
    }

    if(fabs(ara[1]-ara[2])>20)
    {
        Q=(40-fabs(ara[1]-ara[2]))*9;
    }
    else
    {
        Q=(fabs(ara[1]-ara[2]))*9;
    }
    if(fabs(ara[2]-ara[3])>20)
    {
        R=(40-fabs(ara[2]-ara[3]))*9;
    }
    else
    {
        R=(fabs(ara[2]-ara[3]))*9;
    }
        A=(P+Q+R)+1080;
        printf("%d\n",A);
    }

    return 0;
}
