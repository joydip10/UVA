#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int players[10];
    int np;
    for(int i =1;i<=tc;i++){
        cin>>np;
        for(int j =0;j<np;j++){
            cin>>players[j];
        }
        sort(players,players+np);
        cout<<"Case "<<i<<": "<<players[np/2]<<endl;
    }
    return 0;
}
