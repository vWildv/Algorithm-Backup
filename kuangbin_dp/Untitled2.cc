#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N=1000005;
const ll inf=0x3f3f3f3f3f3f3f3f;

int n,m;
int a[N];
ll dp[2][N];

void solve(){
    for(int i=0;i<=n;i++) dp[0][i]=0LL,dp[1][i]=0LL;
    ll ans=-inf;
    for(int i=1;i<=m;i++){
        ll last=dp[(i-1)&1][i-1];
        dp[i&1][i]=last+(ll)a[i];
        ans=dp[i&1][i];
        last=max(last,dp[(i-1)&1][i]);
        for(int j=i+1;j<=n;j++){
            dp[i&1][j]=max(dp[i&1][j-1]+a[j],last+(ll)a[j]);
            if(i==m) ans=max(dp[i&1][j],ans);
            last=max(last,dp[(i-1)&1][j]);
        }
    }
    printf("%lld\n",ans);
}

int main(){
    while(~scanf("%d%d",&m,&n)){
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        solve();
    }
}
