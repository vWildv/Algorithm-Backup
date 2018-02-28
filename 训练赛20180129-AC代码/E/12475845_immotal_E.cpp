#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#define li long long
using namespace std;
map<li, int> num;
int Nget[100005];
li n, m;
int main() {
  while (~scanf("%lld %lld\n", &n, &m)) {
    //printf("--->%lld %lld\n", n, m);
    num.clear();
    for (li i = 0; i < n; i++) {
      li a;
      scanf("%lld", &a);
      num[a] = 1;
    }
    int cnt = 0;
    for (li i = 1; i <= 1000000000; i++) {
      if (num[i] != 1 && m >= i) {
        Nget[cnt++] = i;
        m -= i;
      } else if (i > m)
        break;
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
      printf("%d%c", Nget[i], (i == cnt - 1) ? '\n' : ' ');
  }
  return 0;
}
