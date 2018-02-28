#include <stdio.h>
#define ll long long
int main()
{
    ll n;
    while(~scanf("%lld",&n)&&n!=0)
    {
        ll a=2;
        ll b=3;
        int sum=0;
        while(a<=n)
        {
            if(a==n||b==n)
            {
                sum=1;
                break;
            }
            else
            {
                ll ma=a+b;
                a=b;
                b=ma;
            }
        }
        if(sum==1)
        {
            printf("Second win\n");
        }
        else
        {
            printf("First win\n");
        }
    }
    return 0;
}
