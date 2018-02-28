#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
long long gbs(long long a,long long b)
{
    return a*b/gcd(a,b);
}
int main()
{
    long long n,a,b;
    long long p,q,sum,num1,num2,num3;
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q))
    {

        num1=n/a;
        num2=n/b;
        num3=n/gbs(a,b);
        printf("%lld\n",num1*p+num2*q-num3*min(q,p));
    }
}
