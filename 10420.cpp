#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> vec;
    vector<string> counter;

    string country,name;

    int test;
    cin>>test;

    while(test--)
    {
        cin>>country;
        getline(cin,name);
        vec.push_back(country);
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<vec.size();i++)
    {
        int ct=0;
        while(vec[i]==vec[i+1])
        {
            i++;
            ct++;
        }
        cout<<vec[i]<<" "<<ct+1<<endl;
    }

    return 0;

}
