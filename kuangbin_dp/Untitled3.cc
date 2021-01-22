#include <bits/stdc++.h>
using namespace std;

const int N=1e6+7;

int n;
int a[N];
int dp[N];

void solve(){
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        dp[a[i]%N]++;
        if(dp[a[i]%N]>=(n+1)/2){
            printf("%d\n",a[i]);
            break;
        }
    }
}

int main(){
    while(~scanf("%d",&n)){
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        solve();
    }
}
