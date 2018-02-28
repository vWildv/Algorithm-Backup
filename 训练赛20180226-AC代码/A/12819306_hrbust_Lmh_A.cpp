#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int mod=100003;
long long quick_pow(long long a,long long b,int mod)
{
    long long ans=1;
    while(b!=0)
    {
        if(b%2==1) ans=ans*a%mod;
        a=a*a%mod;
        b/=2;
    }
    return ans;
}
int main(int argc, char *argv[])
{
    long long n,m,ans=0;
    scanf("%lld%lld",&m,&n);
    ans+=quick_pow(m,n,mod);
    ans-=quick_pow(m-1,n-1,mod)*m%mod;
    printf("%d\n",(ans+mod)%mod);
    return 0;
}
