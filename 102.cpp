#include<iostream>
#include<algorithm>
//bcg[0]=bcg
//bcg[1]=bgc
//bcg[2]=gbc
//bcg[3]=gcb
//bcg[4]=cbg
//bcg[5]=cgb
using namespace std;

int main()
{
    int b1,g1,c1,b2,g2,c2,b3,g3,c3,bcg[6];
    int sorted[6];
    int minimum;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){
    bcg[0]=c1+g1+b2+g2+b3+c3;
    bcg[1]=c1+g1+b2+c2+b3+g3;
    bcg[2]=b1+g1+c2+g2+b3+c3;
    bcg[3]=b1+g1+b2+c2+c3+g3;
    bcg[4]=b1+c1+c2+g2+b3+g3;
    bcg[5]=b1+c1+b2+g2+c3+g3;

    for(int i =0;i<6;i++)
    {
        sorted[i]=bcg[i];
    }
    sort(sorted,sorted+6);
    for(int i =0;i<6;i++)
    {
        if(sorted[0]==bcg[i])
        {
            minimum=i;
            break;
        }
    }
    if(minimum==0)
    {
        cout<<"BCG "<<sorted[0]<<endl;
    }
    if(minimum==1)
    {
        cout<<"BGC "<<sorted[0]<<endl;
    }
    if(minimum==2)
    {
        cout<<"CBG "<<sorted[0]<<endl;
    }
    if(minimum==3)
    {
        cout<<"CGB "<<sorted[0]<<endl;
    }
    if(minimum==4)
    {
        cout<<"GBC "<<sorted[0]<<endl;
    }
    if(minimum==5)
    {
        cout<<"GCB "<<sorted[0]<<endl;
    }
    }
    return 0;
}
