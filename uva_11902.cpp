#include<iostream>
#include<utility>
#include<cstdio>
#include<cstring>
#define Set(a, s) memset(a, s, sizeof (a))
using namespace std;
int n;
bool vis[100];
bool matrix[100][100];
void printLine ()
{
    printf ("+");
    for ( int i = 0; i < n * 2 - 1; i++ ) printf ("-");
    printf ("+\n");
}
void dfs(int p,int absent)
{
    if(p = absent) return ;
    vis[p] = true;
    for(int i = 0;i<n;i++)
    {
        if(matrix[p][i] && !vis[i]) dfs(i,absent);
    }
}
int main()
{
    int test;
    scanf ("%d", &test);
    for(int cases = 1;cases<=test;cases++){
    scanf ("%d", &n);
    Set (matrix, false);
    //memset(matrix, false, sizeof(matrix[0][0]) * n * n);
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            int a;
            scanf("%d",&a);
            matrix[i][j]=a;
        }
    }
        bool output[100][100];
        bool firstvis[100];
        Set (vis, false);
        //memset(vis,false,sizeof(vis));
        dfs(0,-1);
        for(int i = 0;i<n;i++) firstvis[i]=vis[i];
        for(int k = 0;k<n;k++)
        {
            Set (vis, false);
            //memset(vis,false,sizeof(vis));
            dfs(0,k);
            for(int l=0;l<n;l++)
            {
                if(firstvis[l] && !vis[l]) output[k][l]=true;
                else output[k][l]=false;
            }
            output[k][k]=firstvis[k];
        }
    printf ("Case %d:\n",cases);
    printLine ();
    for(int i = 0;i<n;i++)
    {
        printf("|");
        for(int j =0;j<n;j++)
        {
            if(output[i][j])printf("Y|");
            else printf("N|");
        }
        printf("\n");
        printLine ();
    }
    }
    return 0;
}
