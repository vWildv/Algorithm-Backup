#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
typedef long long int int64;
int main()
{
    int64 n,a,b,p,q;
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q))
    {
       int64 zuixiaogongbei=a*b/__gcd(a,b);
       int64 tmp1=n/zuixiaogongbei;
       int64 tmp2=n/a;
       int64 tmp3=n/b;
       tmp2-=tmp1;
       tmp3-=tmp1;
       int64 out=tmp2*p+tmp3*q+tmp1*max(p,q);
       printf("%lld\n",out);
    }
}
