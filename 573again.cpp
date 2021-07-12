#include<iostream>

using namespace std;
int main()
{
    double H, U , D ,F,ff,ni;
    int day;
    while(1)
    {
        day=0;
        cin>>H>>U>>D>>F;
        double alt=0.0,ins;
        ff=(F/100.00)*U;
        while(1)
        {
            day++;
            if(U>0) alt+=U;
            U-=ff;
            if(alt>H) break;
            alt-=D;
            if(alt<0) break;

        }
        if(alt>=0)
            cout<<"success on day "<<day<<endl;
        else
            cout<<"failure on day "<<day<<endl;
    }
    return 0;
}
