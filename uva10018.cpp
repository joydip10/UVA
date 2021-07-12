#include <iostream>
using namespace std;

long long int reversing(long long int n){
long long int reverse=0, rem;

  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  return reverse;
}
bool checkPallindrome(long long int n)
{
    long long int rever= reversing(n);
    if(rever==n) return true;
    else return false;
}

int main()
{
    long long int count;
    cin>>count;
    long long int number;
    while(count--)
    {
        cin>>number;
        long long int res_num = reversing(number)+number;
        int counter=1;
        while(1)
        {
            if(checkPallindrome(res_num)!=true){
            res_num=res_num+reversing(res_num);
            counter++;
            }
            else
            {
                break;
            }
        }
        cout<<counter<<" "<<res_num<<endl;
    }
    return 0;
}
