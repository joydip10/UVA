#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,salary[3];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>salary[j];
        }
        sort(salary,salary+3);

        cout<<"Case "<<i<<": "<<salary[1]<<endl;
    }
     return 0;
}
