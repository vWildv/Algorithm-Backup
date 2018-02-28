#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
struct wupin
{
    int c,val;
} a[1000000];

int dp[101010];

int main()

{

    int v,n;

    while(~scanf("%d%d",&v,&n))

    {

        if(v>=32192)v=32192;//最多12个物品 每个物品最大体积为2012.v不能大于12*2012

        memset(dp,0,sizeof(dp));

        memset(a,0,sizeof(a));

        for(int i=0; i<n; i++)

            scanf("%d%d",&a[i].c,&a[i].val);

        for(int i=0; i<n; i++)

        {

            for(int j=v; j>=a[i].c; j--)

            {

                dp[j]=max(dp[j],dp[j-a[i].c]+a[i].val);

            }

        }

        printf("%d\n",dp[v]);

    }

}
