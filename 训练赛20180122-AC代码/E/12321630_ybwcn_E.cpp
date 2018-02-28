#include<stdio.h>
#include<string.h>
int dp[100005][15];
int max1(int a,int b,int c){
    if(a>=b&&a>=c)return a;
    else if(b>=c&&b>=a)return b;
    else return c;
}
int main(){
    int n,x,T;
    while(scanf("%d",&n)){
        if(n==0)break;
        int t=0;
        memset(dp,0,sizeof(dp));
        while(n--){
            scanf("%d%d",&x,&T);
            dp[T][x+1]++;
            if(t<T)t=T;
        }
        for(;t>=0;t--){
            for(int j=1;j<=12;j++){
                dp[t][j]+=max1(dp[t+1][j-1],dp[t+1][j+1],dp[t+1][j]);
            }
        }
        printf("%d\n",dp[0][6]);
    }
    return 0;
}
