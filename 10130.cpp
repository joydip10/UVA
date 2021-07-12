#include<bits/stdc++.h>

using namespace std;

int knp(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num;
        cin>>num;
        int val[num];
        int wt[num];
        for(int i=0;i<num;i++)
        {
            cin>>val[i]>>wt[i];
        }
        int person;
        cin>>person;
        int k=0;
        while(person--)
        {
            int cap;
            cin>>cap;
            k=k+knp(cap,wt,val,num);
        }
        cout<<k<<endl;
    }
    return 0;
}
