#include<iostream>

using namespace std;

int main()
{
    int M,dep_m;
    double down_payment,insurance,depr_arr[101];
    while(cin>>M>>down_payment>>insurance>>dep_m){
    if(M<0) return 0;
    depr_arr[101]={0};
    int m;
    double dd;
    while(dep_m--)
    {
        cin>>m>>dd;
        for(int i =m;i<101;i++) depr_arr[i]=dd;
    }
    int now=0;
    double  car_cost=(insurance+down_payment)*(1-depr_arr[0]);
    double monthly_payment=insurance/(double)M;
    double car_loan = insurance;
    while(car_loan > car_cost)
    {
        now++;
        car_cost=car_cost*(1-depr_arr[now]);
        car_loan=car_loan-monthly_payment;
    }
    cout<<now<<" "<<"month";
    if(now!=1)cout<<"s"<<endl;
    else cout<<endl;
    }
    return 0;
}
