#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

typedef long long int int64;

const int Mod=100003;

int64 fastPow(int64 a,int64 b)
{
    int64 ans=1;
    while(b)
    {
        if(b & 1){ans=((ans%Mod)*(a%Mod))%Mod;}
        b>>=1;
        a=((a%Mod)*(a%Mod)) % Mod;
    }
    return ans;
}

int main ()
{
    int64 n,m;
    while(~scanf("%lld%lld",&m,&n))
    {
        int64 ans = ((fastPow(m,n)%Mod)-((m%Mod)*(fastPow(m-1,n-1)%Mod))%Mod+Mod)%Mod;
        printf("%lld\n",ans);
    }
}
