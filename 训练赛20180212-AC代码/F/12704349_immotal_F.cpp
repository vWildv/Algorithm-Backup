#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#define li long long
using namespace std;
li n, x;
int main() {
  while (~scanf("%lld%lld", &n, &x)) {
    li sum = 0;
    for (int i = 0; i < n; i++) {
      li a;
      scanf("%lld", &a);
      sum += a;
    }
  if ((x - sum) == (n - 1))
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}
