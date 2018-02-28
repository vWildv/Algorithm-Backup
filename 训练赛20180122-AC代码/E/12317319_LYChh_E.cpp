#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;
int dp[100005][15];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }
        else
        {
            int ma=0;
            memset(dp,0,sizeof(dp));
            for(int i=0; i<n; i++)
            {
                int a,b;
                scanf("%d%d",&a,&b);
                dp[b][a]++;
                if(b>ma)
                {
                    ma=b;
                }
            }
            for(int i=ma; i>=0; i--)
            {
                dp[i][0]+=max(dp[i+1][0],dp[i+1][1]);
                dp[i][10]+=max(dp[i+1][9],dp[i+1][10]);
                for(int j=1; j<=9; j++)
                {
                    dp[i][j]+=max(dp[i+1][j-1],max(dp[i+1][j],dp[i+1][j+1]));
                }
            }
            printf("%d\n",dp[0][5]);
        }
    }
    return 0;
}
