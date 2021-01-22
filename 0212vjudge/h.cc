#include <map>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int sum=0,tmp;
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        m-=(86400-tmp);
        if(m<=0){
            printf("%d",i+1);
            break;
        }
    }
}