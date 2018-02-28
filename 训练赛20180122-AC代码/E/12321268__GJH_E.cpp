#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int dp[15][100005];

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        if (n==0) return 0;
        int t=0;
        for (int i=0; i<n; i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            if (b>t) t=b;
            dp[a][b]++;
        }
        for(int i=t-1; i>=0; i--)
        {
            dp[0][i]+=max(dp[0][i+1],dp[1][i+1]);
            dp[10][i]+=max(dp[9][i+1],dp[10][i+1]);
            for(int j=1; j<=9; j++)
                dp[j][i]+=max(max(dp[j-1][i+1],dp[j][i+1]),dp[j+1][i+1]);
        }
        cout<<dp[5][0]<<endl;
    }
}
