#include<stdio.h>
int dp[20][34000];
struct box
{
    int cost;
    int value;
}num[20];
int max(int a,int b);
int main()
{
    int i,j,n,m;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int sum=0,sum2=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&num[i].cost,&num[i].value);
            sum=sum+num[i].cost;
            sum2=sum2+num[i].value;
        }
        if(sum<m)
        {
            printf("%d\n",sum2);
            continue;
        }
        for(i=num[1].cost;i<=m;i++)
        {
            dp[1][i]=num[1].value;
        }
        for(i=2;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(j>=num[i].cost)
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-num[i].cost]+num[i].value);
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        printf("%d\n",dp[n][m]);
    }
    return 0;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}