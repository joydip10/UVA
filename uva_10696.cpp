#include<iostream>
#include<stdio.h>
using namespace std;

int f91(int N)
{
    if(N<=100)
    {
        f91(f91(N+11));
    }
    else if(N>=100)
    {
        return (N-10);
    }
}
int main()
{
    int N;
    while(1)
    {
        cin>>N;
        if(N==0) break;
        printf("f91(%d) = ",N);
        cout<<f91(N)<<endl;
    }
    return 0;
}

