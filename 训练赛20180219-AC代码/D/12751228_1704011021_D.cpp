#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;
const long long mod=1e9+7;

int m,n;

long long zjpow(long long n,int k)
{
    long long  qwe=1;
    while(k--)
        qwe=qwe*n%mod;
    return qwe;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        long long int ans=0;
        for(int i=1; i<=n; i++)
        {
            ans=(ans+zjpow(i,m))%mod;
        }
         printf("%I64d\n",ans);
    }
    return 0;
}
