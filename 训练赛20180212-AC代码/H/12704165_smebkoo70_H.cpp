#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int dp[1000005];
int main()
{
    int n,t;
    while(scanf("%d%d",&n,&t)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&dp[i]);
        }
        int sum = 0, cnt = 0;
        for(int i=0; i<n; i++)
        {
            sum += 86400 - dp[i];
            cnt++;
            if(sum >= t)
            {
                break;
            }
            else continue;
        }
        if(sum >= t)
        {
            if(cnt <= n)
            {
                printf("%d\n",cnt);
            }
            else printf("0\n");
        }

        else printf("0\n");
    }
    return 0;
}
