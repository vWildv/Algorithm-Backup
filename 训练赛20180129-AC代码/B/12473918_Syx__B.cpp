#include <iostream>
#include<cstdio>
using namespace std;
long long n,a,b,p,q;
long long  gcd(long long  a,long long  b)
{
    if( a % b != 0)
    return gcd(b,a% b);
    return b;
}
int main()
{
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q))
    {
        long long  ans = 0;
        long long  minn = p > q?q:p;
        ans += (n / a*p);
        ans += (n / b*q);
        ans -= (n / (a * b/ gcd(a,b))*minn);
        printf("%lld\n",ans);
    }
}
