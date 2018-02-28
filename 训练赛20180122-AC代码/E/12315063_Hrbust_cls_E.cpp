#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int dp[100050][11];

int _max(int a,int b,int c)
{
    return a>b?a>c?a:c:b>c?b:c;
}

int main()
{
    int n,x,T;
    while(~scanf("%d",&n)){
        if(n==0)
            break;
        memset(dp,0,sizeof(dp));
        int last=0;
        while(n--){
            scanf("%d%d",&x,&T);
            dp[T][x]++;
            last=max(last,T);
        }
        for(int i=last-1;i>=0;i--){
            dp[i][0]+=max(dp[i+1][0],dp[i+1][1]);
            dp[i][10]+=max(dp[i+1][9],dp[i+1][10]);
            for(int j=1;j<=9;j++)
                dp[i][j]+=_max(dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]);
        }
        printf("%d\n",dp[0][5]);
    }
    return 0;
}
