#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<iostream>
#include<math.h>
#include<queue>
using namespace std;

int dp[20][33333];
//2016 * 12 = 32192
int main(){
    int V,n;
    while(scanf("%d%d",&V,&n) != EOF){
        memset(dp,0,sizeof(dp));
        int vol[n];
        int val[n];
        int sum_vol = 0,sum_val = 0;
        for(int i = 0;i < n;i ++){
             scanf("%d%d",&vol[i],&val[i]);
             sum_vol = sum_vol + vol[i];
             sum_val = sum_val + val[i];
        }
        if(sum_vol < V){
             printf("%d\n",sum_val);
             continue;
        }
        for(int i = vol[0];i <= V;i ++){
            dp[0][i] = val[0];
        }
        for(int i = 1;i < n;i ++){
            for(int j = 0;j <= V;j ++){
                if(j >= vol[i]){
                    dp[i][j] = max(dp[i - 1][j],dp[i - 1][j - vol[i]] + val[i]);
                }
                else{
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        printf("%d\n",dp[n - 1][V]);
    }
    return 0;
}
