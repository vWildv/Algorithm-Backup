#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int fri[1005];
void reset(int k) {
  for (int i = 1; i <= k; i++)
    fri[i] = i;
}

int findd(int n) {
  if (fri[n] == n)
    return n;
  else
    return findd(fri[n]);
}
void uniti(int a, int b) {
  if (a > b) {
    fri[findd(a)] = findd(b);
  } else {
    fri[findd(b)] = findd(a);
  }
}
int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, m;
    while (~scanf("%d%d", &n, &m)) {
      reset(n);
      for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        uniti(a, b);
      }
      int cnt = 0;
      for (int i = 1; i <= n; i++) {
        if (fri[i]==i)
          cnt++;
      }
      printf("%d\n", cnt);
    }
  }
  return 0;
}
