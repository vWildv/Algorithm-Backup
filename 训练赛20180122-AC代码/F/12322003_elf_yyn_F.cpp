#include<stdio.h>
int main()
{
    int dp[30005], a[30005], n;
    while(~scanf("%d",&n)) {
        int ans = 0, i, j;
        for(i = 0; i < n; i ++) {
            scanf("%d",&a[i]);  dp[i] = 1;
            for(j = i - 1; j >= 0; j --)
                if(a[i] > a[j] && dp[j] + 1 > dp[i])
                    dp[i] = dp[j] + 1;
            ans = ans > dp[i] ? ans : dp[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
