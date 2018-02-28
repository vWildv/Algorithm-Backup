#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
int dp[33000];
int v[20];
int w[20];
int main()
{
    int m,n;
    int sumv,sumw;

    while(~scanf("%d%d",&m,&n))
    {
        memset(dp,0,sizeof(dp));
        sumv=0;
        sumw=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d %d",&v[i],&w[i]);
            sumv+=v[i];
            sumw+=w[i];
        }

        if(sumv<=m)
        {
            printf("%d\n",sumw);
            continue;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=m;j>=v[i];j--)
            {
                dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
            }
        }
        printf("%d\n",dp[m]);
    }


    return 0;
}
