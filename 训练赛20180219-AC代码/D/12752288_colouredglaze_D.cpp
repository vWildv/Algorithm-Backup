#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        if(k==0)
            printf("%d\n",n);
        else
        {
            long long ans=0;
            for(int i=1; i<=n; i++)
            {
                long long s=1;
                for(int j=0; j<k; j++)
                {
                    s=s*i;
                    s=s%1000000007;
                }
                ans=ans+s;
                ans=ans%1000000007;
            }
            printf("%lld\n",ans);
        }

    }
    return 0;
}
