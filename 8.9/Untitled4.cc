#include <bits/stdc++.h>
using namespace std;

char s[5005];
int dp[5005][5005];
bool isp[5005][5005];

void solve(){
    int n=strlen(s+1);
    for(int i=1;i<=n;i++){
        dp[i][i]=1;
        for(int j=1;j<=i;j++) isp[i][j]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j+i<=n;j++){
            if(s[j]==s[j+i]) isp[j][j+i]=isp[j+1][j+i-1];
            else isp[j][j+i]=0;
            dp[j][j+i]=dp[j][j+i-1]+dp[j+1][j+i]-dp[j+1][j+i-1];
            dp[j][j+i]+=isp[j][j+i];
        }
    }
}

int main(){
    scanf("%s",s+1);
    solve();
    int m;
    scanf("%d",&m);
    while(m--){
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d\n",dp[l][r]);
    }
}
