#include<stdio.h>
typedef long long ll;

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    else gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

int min(int a, int b) {
    if(a > b) return b;
    else return a;
}

int main()
{
    ll n, a, b, p, q;
    while(~scanf("%lld%lld%lld%lld%lld",&n, &a, &b, &p, &q))
    {
        ll ans = 0;
        ans = (n / a) * p + (n / b) * q - min(p, q) * (n / lcm(a, b));
        printf("%I64d\n", ans);
    }
}
