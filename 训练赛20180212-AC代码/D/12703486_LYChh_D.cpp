#include <stdio.h>
#define ll long long
ll a[100005];
ll pan(ll n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    ll k=1;
    for(ll i=10;;i++)
    {
        if(pan(i)==10)
        {
            a[k++]=i;
        }
        if(k==10005)
        {
            break;
        }
    }
    int n;
    while(~scanf("%d",&n))
    {
        printf("%lld\n",a[n]);
    }
}
