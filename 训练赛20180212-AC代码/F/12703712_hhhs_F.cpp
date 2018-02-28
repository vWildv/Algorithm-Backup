#include<stdio.h>
int main()
{
    long long n,x,a,sum = 0;
    scanf("%lld%lld",&n,&x);
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&a);
        sum+=a;
        if(i!=n) sum++;
    }
    if(sum==x) printf("YES\n");
    else printf("NO\n");
    return 0;
}
