#include<stdio.h>
long long f(int i,int k)
{
    long long a=1;
    for(int j=0; j<k; j++)
    {
        a=a*i;
        a=a%1000000007;
    }
    return a;
}
int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        long long sum=0;
        scanf("%d%d",&n,&k);
        if(k==0)
            printf("%d\n",n);
        else
        {
            for(int i=1; i<=n; i++)
            {
                sum+=f(i,k);
                sum=sum%1000000007;
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
