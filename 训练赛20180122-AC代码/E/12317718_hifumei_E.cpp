#include <bits/stdc++.h>
using namespace std;

int dp[100005][12];

int main()
{
    int n;
    while(~scanf("%d",&n)&&n){
        memset(dp,0,sizeof(dp));
        int t1,t2;
        int maxe=-1;
        for(int i=0;i<n;i++){
            scanf("%d%d",&t1,&t2);
            dp[t2][t1]++;
            maxe=max(maxe,t2);
        }
        for(int i=maxe-1;i>=0;i--){
            dp[i][0]+=max(dp[i+1][0],dp[i+1][1]);
            dp[i][10]+=max(dp[i+1][10],dp[i+1][9]);
            for(int j=1;j<10;j++){
                dp[i][j]+=max(dp[i+1][j-1],max(dp[i+1][j],dp[i+1][j+1]));
            }
        }
        printf("%d\n",dp[0][5]);
    }
    return 0;
}