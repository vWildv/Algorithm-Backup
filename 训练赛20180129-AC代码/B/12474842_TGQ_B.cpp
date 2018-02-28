#include <stdio.h>
#include <iostream>
using namespace std;
long long zzxc(long long a,long long b)
{
    if( b == 0 )
        return a;
    return zzxc(b,a%b);
}
int main()
{
    long long n, a, b, p, q;
    scanf("%lld%lld%lld%lld%lld",&n, &a, &b, &p, &q);

        long long ans = 0;
        long long i;
    long long A, B, C;
    A = n/a;
    B = n/b;
    C = n/(a*b/zzxc(a,b));
    A -= C;
    B -= C;
        printf("%lld\n",A*p+B*q+C*max(p,q));
    }

