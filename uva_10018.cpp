#include<iostream>

using namespace std;

int pallindrome(int n)
{
    int digit,rev=0,num,i,t;
        int p = n;
        while(p!=0)
        {
            digit=p%10;
            rev=(rev*10)+digit;
            p=p/10;
        }
        return rev;
}

int main()
{
    int t,num,sum,p,count;
    cin>>t;
    while(t--)
    {
        sum=0;
        count=0;
        cin>>num;
        while(sum!=pallindrome(sum) && sum!=0)
        {
            p=num;
            num=pallindrome(num);
            sum=p+num;
            count++;
        }
        cout<<count<<" "<<sum;
    }
}
