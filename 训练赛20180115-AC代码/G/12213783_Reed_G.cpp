#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int weight[20];
int value[20];
int dp[33000];

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        if(m>32192)
            m=32192;
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&weight[i],&value[i]);
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=m;j>=1;j--)
            {
                dp[j]=weight[i]<=j?max(dp[j],dp[j-weight[i]]+value[i]):dp[j];
            }
        }
        printf("%d\n",dp[m]);
    }
    return 0;
}
