#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
long long n, a, b, p, q;
long long gcd(long long a, long long b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
long long lcm(long long a, long long b) { return a * b / gcd(a, b); }
int main() {
  while (~scanf("%lld %lld %lld %lld %lld", &n, &a, &b, &p, &q)) {
    long long cnta = n / a;
    long long cntb = n / b;
    long long cntsa = n / lcm(a, b);
    cnta -= cntsa;
    cntb -= cntsa;
    long long ans = cnta * p + cntb * q + cntsa * max(p, q);
    printf("%lld\n", ans);
  }
  return 0;
}
