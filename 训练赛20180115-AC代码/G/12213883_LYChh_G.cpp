#include<bits/stdc++.h>
using namespace std;
#define sum 40000
int v1[20],v2[20],dp[sum];
int main()
{
    int n,m;
    while(~scanf("%d%d",&m,&n))
    {
        if(m>2012*16)
        {
            m=2012*16;
        }
        memset(dp,0,sizeof(dp));
        for(int i=0; i<n; i++)
        {
            scanf("%d%d",&v1[i],&v2[i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=m; j>=v1[i]; j--)
            {
                dp[j] = max(dp[j], dp[j-v1[i]]+v2[i]);
            }
        }
        printf("%d\n",dp[m]);
    }
    return 0;
}
