#include<stdio.h>
long long int a[100005];
int main()
{
    long long int n,x;
    while(~scanf("%lld%lld",&n,&x))
    {
        long long int sum=0;
        for(long long int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        if(x-sum==n-1)
            printf("YES\n");
        else printf("NO\n");
    }
}
