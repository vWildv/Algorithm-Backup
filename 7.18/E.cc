#include <bits/stdc++.h>
using namespace std;

long long dp[2005][2005];
const long long mod=1e9+7;

int main(){
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        for(int i=0;i<=n+m;i++)
            for(int j=0;j<=n+m;j++) dp[i][j]=0;
        //memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=0;i<=n+m;i++){
            for(int j=0;j<=n+m;j++){
                if(i+1<=n+j){
                    dp[i+1][j]=(dp[i+1][j]+dp[i][j])%mod;
                }
                if(j+1<=i+m){
                    dp[i][j+1]=(dp[i][j+1]+dp[i][j])%mod;
                }
                //printf("%d %d %lld %lld\n",i,j,dp[i+1][j],dp[i][j+1]);
            }
        }
        printf("%lld\n",dp[n+m][n+m]);
    }
}
