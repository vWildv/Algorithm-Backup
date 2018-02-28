#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007


int fac(int n,int k)
{
    ll ans=1;
    for(int i=1;i<=k;i++)
    {
        ans*=n;
        if(ans>mod)
        ans%=mod;
    }
    return ans;
}


int main()
{
    ll t;
    ll n,k;
    while(~scanf("%lld",&t))
    {
        while(t--)
        {
            scanf("%lld%lld",&n,&k);
            ll sum=0;
            for(int i=1;i<=n;i++)
            {
                sum+=fac(i,k);
                if(sum>mod)
                sum%=mod;
            }
            cout<<sum<<endl;
        }
    }
}
