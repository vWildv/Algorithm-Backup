#include<iostream>
#include<cstdio>
using namespace std;
bool isans(int tem){
    int sum = 0;
    while(tem > 0){
        sum += tem % 10;
        tem /= 10;
    }
    if(sum == 10)
        return 1;
    else
        return 0;
}
int main(){
    int i, k, t, sum = 0, tem;
    while(~scanf("%d",&k)){
        t = 0;
        for(i = 15; t != k; i ++){
            if(isans(i)){
                t  ++;
        }
        }
        printf("%d\n",i - 1);
    }
    return 0;
}
