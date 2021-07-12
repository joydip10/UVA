#include<bits/stdc++.h>

using namespace std;
int bomb[1026][1026];
int main()
{

    int scenarios,d,cases,x,y,n;
    cin>>scenarios;
    while(scenarios--)
    {
        for(int i=0;i<1026;i++)
        {
            for(int j=0;j<1026;j++)
            {
                bomb[i][j]=0;
            }
        }
        cin>>d;
        cin>>cases;
        for(int i =0;i<cases;i++)
        {
            cin>>x>>y>>n;
            for(int j=abs(x-d);j<=x+d;j++)
            {
                if(j<0 || j>1024) continue;

                for(int k=abs(y-d);k<=y+d;k++)
                {
                    if(k<0 || k>1024) continue;

                    bomb[j][k]+=n;
                }
            }
        }
        int maximum=-1;
        int resx,resy,resn;
        for(int i=1;i<1026;i++)
        {
            for(int j=1;j<1026;j++)
            {
                if(maximum<bomb[i][j])
                {
                    resx=i;
                    resy=j;
                    maximum=bomb[i][j];
                }
            }
        }
        cout<<resx<<" "<<resy<<" "<<maximum<<endl;
    }
    return 0;
}
