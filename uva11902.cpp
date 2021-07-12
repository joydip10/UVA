#include<iostream>
using namespace std;
int n;
int graph[100][100];
int g[100][100];
bool seen[100];
void dfs(int p)
{
    seen[p] = true;
    for(int i =0;i<n;i++)
    {
        if(g[p][i]==1){
        int v = i;
        if(!seen[v]) dfs(v);
        }
    }
}
void check(int i,int k,int n)
{

    for(int m =0;m<n;m++)
    {
        for(int l =0;l<n;l++)
        {
            g[m][l]=graph[m][l];
        }
    }
    for(int j =0;j<n;i++)
    {
        g[i][j]=0;
    }
    dfs(0);
    if(seen[k]==true || i != k) cout<<"N";
    else if(i==k) cout<<"Y";
    else if(i==0) cout<<"Y";
    else cout<<"Y";
    for(int i=0;i<100;i++)
    {
        seen[i]= false;
    }
    for(int m =0;m<n;m++)
    {
        for(int l =0;l<n;l++)
        {
            g[m][l]=0;
        }
    }
}
void clearall()
{
    for(int i=0;i<100;i++)
    {
    for(int j =0;j<100;j++)
        {
            graph[i][j]=0;
        }
    }
    n =0;
}
int main()
{
    int tc;
    int n;
    int graph[100][100];
    cin>>tc;
    for(int i =1;i<=tc;i++)
    {
        cin>>n;
        for(int j =0;j<n;j++)
        {
            for(int k =0;k<n;k++)
            {
                cin>>graph[j][k];
            }
        }
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<n;j++)
            {
                check(i,j,n);
            }
            cout<<endl;
        }
        clearall();
    }
    return 0;
}
