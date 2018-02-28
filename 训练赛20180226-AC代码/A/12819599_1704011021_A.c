#include<stdio.h>
#include<string.h>
#include<math.h>
#define mod 100003
long long m,n;

long long mypow(long long a,long long b)
{
    if(b==1)
    {
        return a%mod;
    }
    else
    {
        long long c=mypow(a,b/2);
        if((b%2)==0)
            return c*c%mod;
        else
            return c*c*a%mod;
    }
}

int main()
{
    while(~scanf("%lld%lld",&m,&n))
    {
        long long  sum=mypow(m,n);
        sum=sum-m*mypow(m-1,n-1)%100003;
        if(sum<0)
        {
            sum+=100003;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
