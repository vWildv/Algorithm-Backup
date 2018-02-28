#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int n, a, b;
int main() {
  while (~scanf("%d%d%d", &n, &a, &b)) {
    if (b < 0) {
      b = -b;
      for (int i = 0; i < b; i++) {
        a -= 1;
        if (a == 0)
          a = n;
      }
    } else if (b > 0) {
      for (int i = 0; i < b; i++) {
        a += 1;
        if (a > n)
          a = 1;
      }
    }
    printf("%d\n", a);
  }
  return 0;
}
