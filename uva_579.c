#include<stdio.h>
#include<math.h>
int main()
{
    float H,M,angle,s,i,a,b;
    char c;

        while(scanf("%f %c %f",&H,&c,&M)!=EOF){
        if(H<1 || H>12 || M<0 || M>60)
        {
            break;
        }
        else if(H==0 && M==0)
        {
            break;
        }
        a=0.5*(60*H+M);
        b=(6*M);
        angle=fabs(a-b);
        s=360-angle;
        if(s>=180)
        {
            s=360-s;
        }

        printf("%.3f\n",s);
        }

return 0;
}
