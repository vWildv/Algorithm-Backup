#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
#define ll long long
using namespace std;

ll zuhe(ll x,ll y)
{
    ll tmp=1;
    ll base=x;
    while(y)
    {
        if(y&1)
        {
            tmp=(tmp*base)%100003;
        }
        base=(base*base)%100003;
        y>>=1;
    }
    return tmp;
}

int main()
{
    ll m,n;
    scanf("%lld%lld",&m,&n);
    if(n==2)
    {
        printf("%lld\n",m%100003);
    }
    else
    {
        printf("%lld\n",(100003+zuhe(m,n)%100003-m*zuhe(m-1,n-1)%100003)%100003);
    }
    return 0;
}

