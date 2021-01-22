#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll inf=0x3f3f3f3f3f3f3f3f;

ll c[1010][1010];
ll d[1010];
ll dp[1010][1010];
ll sum[1010][1010];

ll res[1010];

int main(){
    int t;
    int cas=0;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int j=0;j<=m+5;j++){
            for(int i=0;i<=n+5;i++){
                dp[i][j]=0;
                sum[i][j]=0;
                c[i][j]=0;
            }
            res[j]=0;
            d[j]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%lld",&c[i][j]);
                sum[i][j]=sum[i][j-1]+c[i][j];
            }
            dp[i][m+1]=inf;
        }
        for(int i=1;i<=m;i++){
            scanf("%lld",&d[i]);
            d[i]=d[i]+d[i-1];
        }
        for(int i=1;i<=n;i++){
            for(int j=m;j>=0;j--){
                dp[i][j]=min(dp[i][j+1],sum[i][j]);
            }

        }
        ll maxn=0;
        for(int j=0;j<=m;j++){
            int flag=0;
            for(int i=1;i<=n;i++){
                res[j]=res[j]-dp[i][j];
                if(dp[i][j]==sum[i][j]){
                    flag=1;
                }
            }
            if(!flag){
                ll mini=inf;
                for(int i=1;i<=n;i++){
                    if(sum[i][j]-dp[i][j]<mini){
                        mini=sum[i][j]-dp[i][j];
                    }
                }
                res[j]=res[j]-mini+d[j];
            }
            else res[j]=res[j]+d[j];
            maxn=max(res[j],maxn);
        }
        printf("Case #%d: %lld\n",++cas,maxn);
    }
}

