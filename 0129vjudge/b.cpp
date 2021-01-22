#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

long long lcm(long long a,long long b){
    return a*b/__gcd(a,b);
}

int main(int argc, char const *argv[]) {
    long long n,a,b,p,q;
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q)){
        long long ans=0;
        ans=(n/a)*p+(n/b)*q-min(p,q)*(n/lcm(a,b));
        printf("%lld\n",ans);
    }
    return 0;
}
