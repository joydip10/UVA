#include<iostream>
#include<stdio.h>

using namespace std;

int func(int i){
    int sum=0;
    int p = (int)(i/2);
    for(int j =1;j<=p;j++){
       if(i%j==0){
        sum+=j;
       }
    }
    return sum;

}

int main(){
    int num,x=0;
    while(scanf("%d",&num)==1){
        if(num==0){
            break;
        }
        if(x==0){
            cout<<"PERFECTION OUTPUT"<<endl;
            x=1;
        }
        if(func(num)==num){
            printf("%5d  PERFECT\n",num);
        }
        else if(func(num)>num){
            printf("%5d  ABUNDANT\n",num);
        }
        else if(func(num)<num){
            printf("%5d  DEFICIENT\n",num);
        }

    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
