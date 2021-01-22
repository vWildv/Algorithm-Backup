#include <bits/stdc++.h>
using namespace std;

int a[1000005];
int dp[1005][1005];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        //dp[i][0]=1;
    }
    for(int i=0;i<=m;i++){
        dp[i][0]=1;
    }
    //dp[0][0]=1;
    if(n>=m){
        printf("YES\n");
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j]=(dp[i-1][(j+a[i]%m)%m]||dp[i-1][j]);
        }
    }
    //for(int i=1;i<=m;i++){
    //    printf("- %d %d\n",i,dp[n][i]);
    //}
    printf("%s\n",dp[n][m]?"YES":"NO");
}
