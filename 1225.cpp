#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char number[]={'1','2','3','4','5','6','7','8','9','1','0','1','1','1','2','1','3','1','4','1','5','1','6','1','7','1','8','1','9','2','0','\0'};
    char number_base[]={'0','1','2','3','4','5','6','7','8','9','\0'};
    int counter[10]={0,0,0,0,0,0,0,0,0,0};
    int l=31;
    int l_1=10;
    int des;
    int test;
    cin>>test;
    while(test--){
    int num;
    cin>>des;
    for(int i =0;i<l_1;i++){
        num=0;
        int alt_des;
        if(des>9){
            alt_des=((des-9)*2)+8;
        }
        else{
            alt_des=des-1;
        }
        for(int j = 0;j<=alt_des;j++ ){
            if(number_base[i]==number[j]){
                num++;
            }
            counter[i]=num;
        }
    }
    for(int i =0;i<10;i++){
        cout<<counter[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<10;i++){
        counter[i]=0;    }
}
return 0;
}

