#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

typedef long long Ll;

Ll gcd(Ll a,Ll b)
{

    if(b == 0)
    {
        return a;
    }
    else
    {
      gcd(b,a%b);
    }

}

Ll lcm(Ll a,Ll b)
{
    return a/gcd(a,b)*b;
}

int main()
{
    Ll n,a,b,p,q;
    while(scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q) !=EOF )
    {
        Ll sum=0;
        sum = (n/a)*p + (n/b)*q-min(p,q)*(n/lcm(a,b));
        printf("%I64d\n",sum);
    }
    return 0;
}