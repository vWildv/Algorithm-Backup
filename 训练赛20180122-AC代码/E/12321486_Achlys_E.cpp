#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int dp[100005][15];

int main()
{
    int n;
    while(~scanf("%d",&n)&&n)
    {
        memset(dp,0,sizeof(dp));
        int maxx=-1;
        int i,j;
        for(i=0;i<n;i++)
        {
            int x,t;
            cin>>x>>t;
            maxx=max(maxx,t);
            dp[t][++x]++;
        }
        for(i=maxx;i>=0;i--)
        {
            for(j=1;j<=11;j++)
            {
                dp[i][j]+=max(dp[i+1][j],max(dp[i+1][j-1],dp[i+1][j+1]));
            }
        }
        cout<<dp[0][6]<<endl;
    }
    return 0;
}
