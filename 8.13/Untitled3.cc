#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf=0x3f3f3f3f;
const int N=2e5+5;

ll a[N],b[N],c[N],d[N];

int main(){
    ll n;
    int m,k;
    scanf("%lld%d%d",&n,&m,&k);
    ll x,s;
    scanf("%lld%lld",&x,&s);
    for(int i=1;i<=m;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=1;i<=m;i++){
        scanf("%lld",&b[i]);
    }
    for(int i=1;i<=k;i++){
        scanf("%lld",&c[i]);
    }
    for(int i=1;i<=k;i++){
        scanf("%lld",&d[i]);
    }
    ll ans=n*x; a[0]=x;
    for(int i=0;i<=m;i++){
        if(s>=b[i]){
            int pos=upper_bound(d+1,d+1+k,s-b[i])-d;
            ll res=max(n-c[pos-1],0LL)*a[i];
            ans=min(ans,res);
        }
    }
    printf("%lld\n",ans);
}
