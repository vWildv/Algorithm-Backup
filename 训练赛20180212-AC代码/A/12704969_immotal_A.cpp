#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
int n;
int Days[200005];
int main() {
  while (~scanf("%d", &n)) {
    memset(Days,0,sizeof(Days));
    for (int i = 1; i <= n; i++)
      scanf("%d", &Days[i]);
    int jw = 0;
    int flag = 0;
    for (int i = 1; i <= n; i++) {
      Days[i] += jw;
      if (Days[i] == -1) {
        flag = 1;
        break;
      }

      if (Days[i] % 2 == 1)
        jw = -1;
      else
        jw = 0;
    }
    if (flag)
      printf("NO\n");
    else if (jw == -1)
      printf("NO\n");
    else
      printf("YES\n");
  }
  return 0;
}
