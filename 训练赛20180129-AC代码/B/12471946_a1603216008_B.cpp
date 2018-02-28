#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;

long long gcd(long long a,long long b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

long long lcm(long long a,long long b)
{
    return a*b/gcd(a,b);
}

int main()
{
    long long int n,a,b,p,q;
    while(scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q) != EOF){
        long long int ans = (n / a)* p + (n / b) * q;
        long long int l = n / lcm(a,b);
        if(p > q){
            l = q * l;
        }
        else{
            l = p * l;
        }
        ans = ans - l;
        printf("%lld\n",ans);
    }
    return 0;
}
