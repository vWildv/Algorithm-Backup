#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

long long quickpow(long long m,long long n){
    long long ans=1;
    m%=100003;
    while(n){
        if(n&1) ans=ans*m%100003;
        m=m*m%100003;
        n>>=1;
    }
    return ans;
}

int main(){
    long long m,n;
    scanf("%lld%lld",&m,&n);
    long long ans=quickpow(m,n);
    ans=ans-m*quickpow(m-1,n-1)%100003;
    printf("%d\n",ans>0?ans:ans+100003);
}