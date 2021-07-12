#include<bits/stdc++.h>

using namespace std;

int main()
{

    int N,B,H,W,price;
    while(cin>>N>>B>>H>>W){

    int res=5000001;
    int week[13]={0};

    while(H--)
    {
        cin>>price;
        for(int i =0;i<W;i++)
        {
            cin>>week[i];
            if(week[i]>=N)
            {
                int pr=N*price;
                if(pr<res)
                {
                    res=pr;
                }
            }
        }

    }
    if(res<=B) cout<<res<<endl;
    else cout<<"stay home"<<endl;
    memset(week,0,13);

}
    return 0;
}
