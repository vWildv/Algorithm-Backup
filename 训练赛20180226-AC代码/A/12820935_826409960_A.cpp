#include<bits/stdc++.h>
#define M(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long LL;

const LL mod = 100003;

LL qp(LL a,LL n)
{
    LL ans = 1;
    while(n) {
        if(n&1)
            ans = (ans*a)%mod;
        n>>=1;
        a = (a*a)%mod;
    }
    return ans;
}

int main()
{
//    freopen("in.txt","r",stdin);
    LL n,m;
    while(cin>>m>>n)
    {
        LL all = qp(m,n);
        LL tmp = (m%mod)*qp(m-1,n-1)%mod;
        LL ans = (all-tmp+mod)%mod;
        printf("%lld\n",ans);
    }
    return 0;
}
