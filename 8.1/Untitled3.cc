#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod=998244353;
char a[3005],b[3005];
ll dp[3005][3005];
ll c[3005][3005];
ll k[3005][3005];
int n,m;
ll res=0;

void clac(){
    for(int i=0;i<=3000;i++){
        c[i][0]=1;
    }
    for(int i=1;i<=3000;i++){
        for(int j=1;j<i;j++){
            c[i][j]=(c[i-1][j]+c[i-1][j-1])%mod;
        }
        c[i][i]=1;
    }
}

void dfs(int l,int r){
    if(r>=m) return;
    if(dp[l+1][r+1]>0){
        k[l+1][r+1]++;
        return;
    }
    for(int i=l+1;i<=n-m+r+1;i++){
        if(a[i]>b[r+1]){
            res=(res+c[n-i][m-r-1])%mod;
            dp[i][r+1]=(dp[i][r+1]+c[n-i][m-r-1])%mod;
        }
        else if(a[i]==b[r+1]){
            dfs(i,r+1);
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){

        res=0;
        scanf("%d%d",&n,&m);
        getchar();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                dp[i][j]=0;
                k[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            scanf("%c",&a[i]);
        }
        getchar();
        for(int i=1;i<=m;i++){
            scanf("%c",&b[i]);
        }
        dfs(0,0);
        ll cnt=0;
        for(int j=1;j<=m;j++){
            for(int i=1;i<=n;i++){
                cnt+=k[i][j];
                if(cnt>0&&dp[i][j]>0) res=(res+cnt*dp[i][j])%mod;
            }
        }
        for(int i=1;i<=n-m+1;i++){
            if(a[i]=='0') continue;
            for(int j=1;j<=n-m-i+1;j++){
                res=(res+c[n-i][m+j-1])%mod;
            }
        }
        printf("%lld\n",res);
    }
}
