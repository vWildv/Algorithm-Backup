#include <bits/stdc++.h>
using namespace std;

int e[100],e1[100];
double c[100],c1[100];

int qpow(int a,int b){
    int ans=1;
    while(b){
        if(b&1) ans*=a;
        a*=a;
        b>>=1;
    }
    return ans;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",qpow(a,b));
}