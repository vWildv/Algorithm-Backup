#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    while(~scanf("%d%d",&m,&n))
    {
        if(m>=32192)m=32192;
        int a[n+1];
        int b[n+1];
        int dp[35000];
        memset(dp,0,sizeof(dp));
        for(int i=0; i<n; i++)
            scanf("%d %d",&a[i],&b[i]);
        for(int i=0;i<n;i++)
            for(int j=m;j>=a[i]; j--)
            {
                dp[j]=max(dp[j],dp[j-a[i]]+b[i]);
            }
        printf("%d\n",dp[m]);
    }
}
