#include <stdio.h>
typedef long long ll;
const int MOD = 100003;
ll M,N;
ll quick_pow(ll a,ll b) {
    if(!b) return 1;
    ll ans = quick_pow(a,b>>1);
    ans = ans * ans % MOD;
    if(b & 1) ans = ans * a % MOD;
    return ans;
}
int main()
{
   scanf("%lld%lld", &M, &N);
   printf("%lld\n", (quick_pow(M, N) + MOD - M * quick_pow(M - 1, N - 1) % MOD) % MOD);
}
