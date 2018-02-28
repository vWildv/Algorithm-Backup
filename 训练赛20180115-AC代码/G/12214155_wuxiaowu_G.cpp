#include <iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
int w[10005];
int v[10005];
int dp[16*2013];
int main()
{
    int m,n;

    while(~scanf("%d%d",&m,&n))
    {
        memset(dp,0,sizeof(dp));
        long long int sum=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d%d",&w[i],&v[i]);
            sum=sum+v[i];
        }

        if(m>16*2013)
        {
            printf("%lld\n",sum);

        }
        else
        {
            for (int i = 1; i <= n; i++)
                for (int j = m; j >= w[i]; j--)
                    dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

            cout<< dp[m] << endl;
        }





    }
}
