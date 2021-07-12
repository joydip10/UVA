#include<bits/stdc++.h>

using namespace std;
int ng[200];
int ntg[20][20];
int t,d;
int table[200][20];
int show(int m,int pos)
{
    if(m<0) return -1e6;

    if(pos==d) return t-m;

    if(table[m][pos]!=-1) return table[m][pos];
    int ans=-1e6;
    for(int i=0;i<ng[pos];i++)
    {
        ans=max(ans,show(m-ntg[pos][i],pos+1));
    }
    return table[m][pos]=ans;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin>>t>>d;
        for(int i=0;i<d;i++)
        {
            cin>>ng[i];
            for(int j=0;j<ng[i];j++)
            {
                cin>>ntg[i][j];
            }
        }

        int soln=show(t,0);
        if(soln>0){
        cout<<soln<<endl;
        }
        else{
            cout<<"no solution"<<endl;
        }

        memset(ng,0,sizeof(ng));
        memset(ntg,0,sizeof(ntg));
        memset(table,-1,sizeof(table));
    }
    return 0;
}
