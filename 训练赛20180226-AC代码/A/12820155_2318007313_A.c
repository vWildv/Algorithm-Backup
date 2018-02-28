#include<stdio.h>
#include<string.h>
#define ll long long
ll qmul(ll x, ll y, ll mod)
{
    ll ret = 0;
    while(y)
    {
        if(y & 1)
            ret = (ret + x) % mod;
        x = x * 2 % mod;
        y >>= 1;
    }
    return ret;
}
ll qpow(ll a, ll n, ll mod)
{
    ll ret = 1;
    while(n)
    {
        if(n & 1) ret = qmul(ret, a, mod);
        a = qmul(a, a, mod);
        n >>= 1;
    }
    return ret;
}

int main()
{
    ll m,n;
    while(~scanf("%lld%lld",&m,&n))
    {
        ll tmp = qpow(m,n,100003);
        ll tmp1 = (m*qpow(m-1,n-1,100003))%100003;
        ll ans = (tmp-tmp1)%100003;
        if(ans<0) ans+=100003;
        printf("%lld\n",ans);
    }
    return 0;
}
