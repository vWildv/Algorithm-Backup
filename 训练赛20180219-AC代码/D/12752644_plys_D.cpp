#include<stdio.h>
const long long int vis=1000000007;
long long int quick(long long int a,int b)
{
    long long int ans=1;
    a=a%vis;
    while(b)
    {
        if(b&1) ans=(ans*a)%vis;
        b>>=1;
        a=(a*a)%vis;
    }
    return ans;
}
int main()
{
    long long int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int m,n;
        scanf("%lld%lld",&m,&n);
        long long int add=0;
        for(long long int i=1;i<=m;i++)
        {
            add=(add+quick(i,n))%vis;
        }
        printf("%ld\n",add);
    }
}

