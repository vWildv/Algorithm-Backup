#include <stdio.h>

const long long mod = 100003;
long long n, m;

long long lpow(long long m, long long n) {
    if ( n == 0 ) return 1;
    long long r = 1;
    long long v = lpow(m, n/2);
    r = (v*v)%mod;
    if ( n%2 ) {
        r = (r*m)%mod;
    }
    return r;
}

int main()
{
//    freopen("in.txt", "r", stdin);
    while ( scanf("%lld%lld", &m, &n) == 2 ) {
        long long res = lpow(m, n) - (lpow(m-1, n-1)*m)%mod;
        res = (res + mod)%mod;
        printf("%lld\n", res);
    }
    return 0;
}
