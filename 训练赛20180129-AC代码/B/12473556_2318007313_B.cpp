#include<stdio.h>
#include<algorithm>
using namespace std;

long long gcd(long long a,long long b)
{
    return b==0?a:gcd(b,a%b);
}
long long lcm(long long a,long long  b)
{
    return a*b/gcd(a,b);
}

int main()
{
    long long n,a,b,p,q;
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q))
    {
        long long ans1 = n/a;
        long long ans2 = n/b;
        long long ans3 = n/lcm(a,b);
        ans1-=ans3;
        ans2-=ans3;
        printf("%lld\n",ans1*p+ans2*q+ans3*max(p,q));
    }

}
