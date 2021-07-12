#include<stdio.h>

int main()
{
    int i,j,t,A,F;

    scanf("%d",&t);

    while(t--)
    {
        printf("\n");
        scanf("%d",&A);
        scanf("%d",&F);
      while(F--){
        for(i=1;i<=A;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",i);
            }
            printf("\n");
        }
        for(i=A-1;i>=1;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",i);
            }
            printf("\n");
        }
      }

    }
}
