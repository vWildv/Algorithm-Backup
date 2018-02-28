#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int dp[15][100005];
int min_t=0x3f3f3f3f;
int max_t=0;
int main ()
{
    int n,a,b;
    while(scanf("%d",&n)==1&&n!=0)
    {
        memset(dp,0,sizeof(dp));
        while(n--)
        {
            scanf("%d%d",&a,&b);
            dp[a+1][b]++;
            if(b>max_t)
            {
                max_t=b;
            }
            if(b<min_t)
            {
                min_t=b;
            }
        }
        for(int i=max_t-1;i>=min_t-1;i--)
        {
           for(int j=1;j<=11;j++)   //注意一下。提前一位-.-要不还得多注意一步0.
           {
               dp[j][i]+=max(max(dp[j-1][i+1],dp[j+1][i+1]),dp[j][i+1]);
           }
        }
        printf("%d\n",dp[6][min_t-1]);
    }
    return 0;
}
