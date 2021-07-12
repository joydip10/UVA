#include<bits/stdc++.h>
using namespace std;

int num[20]= {0};
bool taken[20]= {false};
vector<int>vec;
int n;

void numgenerator(int n)
{
    memset(num,0,sizeof(num));
    int j=1;
    for(int i =0; i<n; i++)
    {
        num[i]=j;
        j++;
    }
}

bool isprime(int no)
{
    if(no<=1)
        return false;

    for(int i=2; i<no; i++)
    {
        if(no%i==0)
        {
            return false;
        }
    }
    return true;
}
static int kase=0;
void backtrack(int pos)
{
    if(vec.size()==n && isprime(vec[0]+vec[n-1]) )
    {

        for(int i=0; i<vec.size(); i++)
            cout<<vec[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(pos!=0 && isprime(vec[pos-1]+num[i])==false) continue;
        if(pos!=0 && vec[0]!=1) continue;
        if(taken[i]==false )
        {
            taken[i]=true;
            vec.push_back(num[i]);
            backtrack(pos+1);
            taken[i]=false;
            vec.pop_back();
        }
    }
}

int main()
{

    while(cin>>n)
    {
        cout<<"Case "<<kase+1<<":"<<endl;
        memset(taken,false,sizeof(taken));
        numgenerator(n);
        backtrack(0);
        cout<<endl;
        kase+=1;
    }
    return 0;
}
