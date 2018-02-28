#include<cstdio>
using namespace std;
const int mod=100003;
long long n,m,k;
long long quick(long long x,long long y)
{
    long long a=x,ans=1;
    for (;y>0;y>>=1,a=a*a%mod)
        if (y&1) ans=ans*a%mod;
    return ans;
}
int main()
{
    scanf("%lld%lld",&m,&n);
    k=(quick(m,n)-m*quick(m-1,n-1)%mod+mod)%mod;
    printf("%lld",k);
    return 0;
}
