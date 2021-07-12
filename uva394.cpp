#include<iostream>
using namespace std;
int main()
{
    int p,k;
    string name[50];
    int base[50];
    int byte[50];
    int dimension[50];
    int Lower[10][10];
    int Upper[10][10];
    int c[10][10];
    int AD[10][10];
    string name1[50];
    string resname1[50];
    int res[50];
    cin>>p;
    cin>>k;
    for(int i =1;i<=p;i++)
    {
        cin>>name[i];
        cin>>base[i]>>byte[i]>>dimension[i];
        for(int j =1;j<=dimension[i];j++)
        {
            cin>>Lower[i][j]>>Upper[i][j];
        }
    }
    for(int i =1;i<=k;i++)
    {
        cin>>name1[i];
        int rem;
        for(int t =1;t<=p;t++)
        {
            if (name1[i]==name[t])
            {
                rem = t;
                break;
            }
        }
        int A[1000];
        for(int j =1;j<=dimension[rem];j++)
        {
            cin>>AD[i][j];
            A[j]=AD[i][j];
        }
        int d = dimension[rem];
        c[rem][d]=byte[rem];
        for(int l=d-1;l>=1;l--)
        {
            c[rem][l]=c[rem][l+1]*(Upper[rem][l+1] - Lower[rem][l+1] + 1);
        }
        int answer=base[rem];

        for(int m = 1;m<=d;m++)
        {
            answer=answer-(c[rem][m]*Lower[rem][m]);
        }
        c[rem][0]=answer;
        int ans= answer;
        for(int x=1;x<=dimension[rem];x++)
        {
            ans=ans+(c[rem][x]*A[x]);
        }
        resname1[i]=name1[i];
        res[i]=ans;
        cout<<resname1[i]<<"[";
        for(int y =1;y<=d;y++)
        {
            cout<<A[y];
            if(y!=d)
            {
                cout<<", ";
            }
        }
        cout<<"] = ";
        cout<<res[i]<<endl;
        ans =0;
    }
    return 0;
}
