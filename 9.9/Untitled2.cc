#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll N=1e9;

ll l[100005],r[100005];
double dp[100005][2];

int main(){
    int n;
    ll p;
    scanf("%d%lld",&n,&p);
    for(int i=1;i<=n;i++){
        scanf("%lld%lld",&l[i],&r[i]);
    }
    l[n+1]=l[1]; r[n+1]=r[1];
    double res=0;
    for(int i=1;i<=n+1;i++){
        ll cnt=r[i]/p-(l[i]-1)/p;
        ll maxn=r[i]-l[i]+1;
        dp[i][1]=(1.0*cnt)/(1.0*maxn);
        dp[i][0]=1.0-dp[i][1];
        if(i==1) continue;
        res=res+(1-dp[i][0]*dp[i-1][0])*2000.0;
    }
    printf("%.6f\n",res);
}
