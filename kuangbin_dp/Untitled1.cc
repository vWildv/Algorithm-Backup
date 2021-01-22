#include <bits/stdc++.h>
using namespace std;

int a[100005];
int dp[100005];
int sum[100005];

int main(){
    int t,cas=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int maxn=-1*(0x3f3f3f3f);
        int pos=0;
        for(int i=1;i<=n;i++){
            sum[i]=sum[i-1]+a[i];
            dp[i]=max(dp[i-1]+a[i],a[i]);
            if(dp[i]>maxn) maxn=dp[i],pos=i;
        }
        int ll=0;
        for(int i=1;i<=n;i++){
            if(sum[pos]-sum[i-1]==maxn){
                ll=i;
                break;
            }
        }
        if(cas) printf("\n");
        printf("Case %d:\n%d %d %d\n",++cas,maxn,ll,pos);
    }
}
