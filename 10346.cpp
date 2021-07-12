#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int cig,req,num;
    while(scanf("%d %d",&cig,&req)){
        int p =((cig-1)/(req-1));
        cout<<cig+p<<endl;
    }
    return 0;
}

