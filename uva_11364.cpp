#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int tc, stores, input,max=0,min=99;

scanf("%d",&tc);
for (int i=0; i<tc; i++)
{
     scanf("%d",&stores);
     for (int i=0; i<stores; i++)
     {
          scanf("%d", &input);
             if(input>max)
                max=input;
             if(input<min)
                min=input;
     }
      printf("%d\n",(max-min)*2);
      max=0,min=99;
}
 return 0;
}
