#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#define li long long
#define mode 100003
using namespace std;
li m, n;
li qpow(li a, li n) {
  li ans = 1;
  a %= mode;
  while (n) {
    if (n & 1) {
      ans = ans * a % mode;
    }
    n >>= 1;
    a = (a * a) % mode;
  }
  return ans;
}
int main() {
  while (~scanf("%lld%lld", &m, &n)) {
    li sum = (qpow(m, n) - m * qpow(m - 1, n - 1) % mode) % mode;
    if (sum < 0)
      sum += 100003;
    printf("%lld\n", sum);
  }
  return 0;
}
