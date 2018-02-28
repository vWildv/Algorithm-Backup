#include <stdio.h>
#include <algorithm>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    ll n,a,b,p,q;
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q))
    {
        ll x1=n/a;
        ll x2=n/b;
        ll ma=0;
        ll x3=(a*b)/gcd(a,b);
        x1-=n/x3;
        x2-=n/x3;
        ma=x1*p+x2*q+n/x3*(max(p,q));
        printf("%lld\n",ma);
    }
    return 0;
}
