#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;

bool status[1000];
int primes[1000];
int len;
void sieve(int N)
{
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=0;
	status[0]=1;
	int l=0;
    for(int j=0;j<=N;j++)
    {
        if(status[j]==0)
        {
            primes[l]=j;
            l++;
        }
        len=l;
    }
}
void printall(int N)
{
    sieve(N);
    for(int i=0;;i++)
    {
        if(primes[i]>N || primes[i]==0)break;
        cout<<primes[i]<<" ";
    }
}
int main()
{
    int n,k,p,c;
    while(scanf("%d %d",&n,&k) !=EOF)
    {
        printf("%d %d: ",n,k);
        sieve(n);
        if(len%2==0 && k<len)
        {
            p=(len-(2*k))/2;
            for(int i=p;i<p+(2*k);i++)
            {
                cout<<primes[i]<<" ";
            }
            cout<<endl;
        }
        else if(len%2!=0 && k<len)
        {
            p=(len-(2*k-1))/2;
            for(int i=p;i<p+(2*k-1);i++)
            {
                cout<<primes[i]<<" ";
            }
            cout<<endl;
        }
        else if(k>=len)
        {
            printall(n);
            cout<<endl;
        }
    }
    return 0;
}

