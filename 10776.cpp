#include<bits/stdc++.h>

using namespace std;

bool taken[35]={false};
vector <char> vec;
string s;
int r;

void backtrack(int start)
{
    if(vec.size()==r)
    {
        for(int i=0;i<vec.size();i++) cout<<vec[i];\
        cout<<endl;
        return;
    }
    for(int i=start;i<s.size();i++)
    {
        if(taken[i]==false)
        {
            taken[i]=true;
            vec.push_back(s[i]);
            backtrack(i+1);
            taken[i]=false;
            vec.pop_back();
        }
        while(s[i]==s[i+1]) i++;
    }
}

int main()
{
    while(cin>>s>>r)
    {
        sort(s.begin(),s.end());
        memset(taken,false,sizeof(taken));
        backtrack(0);
    }
    return 0;
}
