#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int a[210000],maxn[210000];

int main(){
    int m,d;
    scanf("%d%d",&m,&d);
    int t=0,len=0,n;
    char sign[1];
    while(m--){
        scanf("%s%d",sign,&n);
        if(sign[0]=='A'){
            a[++len]=(t+n)%d;
            for(int i=len;i;i--){
                if(maxn[i]<a[len]) maxn[i]=a[len];
                else break;
            }
        }
        else{
            t=maxn[len+1-n];
            printf("%d\n",t);
        }
    }
}