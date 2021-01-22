#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int dp[100005][15],a[100005][15];

int main(){
    int n;
    while(~scanf("%d",&n)&&n){
        memset(dp,0,sizeof(dp));
        memset(a,0,sizeof(a));
        int maxT=-1,x,T;
        for(int i=0;i<n;i++){
            scanf("%d %d",&x,&T);
            maxT=max(maxT,T);
            a[T][x]++;
        }
        for(int i=maxT;i>=0;i--){
            dp[i][0]=max(dp[i+1][0],dp[i+1][1])+a[i][0];
            dp[i][10]=max(dp[i+1][10],dp[i+1][9])+a[i][10];
            for(int j=1;j<10;j++){
                dp[i][j]=max(dp[i+1][j],max(dp[i+1][j-1],dp[i+1][j+1]))+a[i][j];
            }
        }
        printf("%d\n",dp[0][5]);
    }
    return 0;
}
