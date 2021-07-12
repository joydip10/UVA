#include<stdio.h>
#include<string.h>
int b=100;
void input(char str[],int b)
{
    int i;
    for(i=0;;i++)
    {
        scanf("%c",&str[i]);
        if(str[i]==' ') break;
    }
}
int main()
{
    int money,t,i,sum=0;
    char str[100];
    scanf("%d",&t);
    while(t--)
    {
        input(str,100);
        if(strcmp(str,"donate")==0)
        {
            scanf("%d",&money);
            sum+=money;
        }
        else if(strcmp(str,"report")==0)
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
