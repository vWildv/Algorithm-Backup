#include<bits/stdc++.h>
using namespace std;
typedef long long lg;
lg gy(lg n,lg m)
{
    return n%m==0?m:gy(m,n%m);
}

int main()
{
    lg n,a,b,p,q;
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q))
    {
        lg gb=a*b/gy(a,b);
        lg x=n/a,y=n/b,z=n/gb;
        lg ans=x*p+y*q;
        printf("%lld\n",p>q?ans-z*q:ans-z*p);
    }return 0;
}
