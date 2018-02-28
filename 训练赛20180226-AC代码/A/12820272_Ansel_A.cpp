#include<iostream>
#include<stdio.h>
using namespace std;
const int mo=100003;
long long power(long long a,long long b)
{
    long long ans=1;
    a%=mo;
    while (b)
    {
        if (b&1) ans=ans*a%mo;
        b>>=1;
        a=a*a%mo;
    }
    return ans;
}
int main()
{
    long long m,n;
    while(~scanf("%lld%lld",&m,&n))
    {
        long long ans=(power(m,n)%mo+mo-(m*power(m-1,n-1))%mo)%mo;
        printf("%lld\n",ans);
    }
}
