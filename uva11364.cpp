#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[20];
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<2*(a[n-1]-a[0])<<endl;
    }
    return 0;
}
