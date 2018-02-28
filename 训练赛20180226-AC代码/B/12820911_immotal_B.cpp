#include <cmath>
#include <cstring>
#include <cstdio>
#define li long long
#define MAXN 2002000
using namespace std;
int n, d;
li a[MAXN], maxe[MAXN];
int main() {
  scanf("%d%d", &n, &d);
  char oper[5];
  li t = 0;
  int cnt = 0, k;
  memset(a, 0, sizeof(a));
  memset(maxe, 0, sizeof(maxe));
  for (int j = 1; j <= n; j++) {
    scanf("%s%d", oper, &k);
    if (oper[0] == 'A') {
      a[++cnt] = (k + t) % d;
      for (int i = cnt; i >= 1; i--) {
        if (a[cnt] > maxe[i])
          maxe[i] = a[cnt];
        else
          break;
      }
    } else {
      printf("%lld\n", maxe[cnt - k + 1]);
      t = maxe[cnt - k + 1];
    }
  }
  return 0;
}
