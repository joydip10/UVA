#include<iostream>

using namespace std;

int main()
{
    double H, U , D , F;

    while(1)
    {
        cin>>H>>U>>D>>F;
        if(H==0) return 0;
        double i,d,h,hs,temp=-1000.0;
        int now;
        i=0;
        d=U;
        h=U;
        hs=U-D;
        now=1;
            if(h>H)
            {
                cout<<"success on day "<<now<<endl;
                continue;
            }
            if(hs<0)
            {
                cout<<"failure on day "<<now<<endl;
                continue;
            }
        while(1)
        {
            i=hs;
            if(d>0 && d!=0 ){
                d=d-((F/100.00)*U);
                h=i+d;
                hs=h-D;
                temp =d;
            }
            else
            {
                d = 0;
                h=i+d;
                hs=h-D;
            }
            cout<<"temp="<<temp<<endl;
            cout<<"d="<<d<<endl;

            if(h>H)
            {
                cout<<"success on day "<<now+1<<endl;
                break;
            }
            if(hs<0)
            {
                cout<<"failure on day "<<now+1<<endl;
                break;
            }
            now++;
        }
    }
    return 0;
}
