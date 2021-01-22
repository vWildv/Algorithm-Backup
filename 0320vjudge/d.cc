#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[5]={153,370,371,407,1634};
    int m;
    scanf("%d",&m);
    for(int i=0;i<5;i++){
        if(a[i]>=m){
            printf("%d\n",a[i]);
            return 0;
        }
    }
}