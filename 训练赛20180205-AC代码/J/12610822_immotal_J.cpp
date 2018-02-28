#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
int rela[105][105];
int n, m;
int main() {
  while (~scanf("%d%d", &n, &m)) {
    if (!n && !m)
      break;
    memset(rela, 0, sizeof(rela));
    for (int i = 0; i < m; i++) {
      int a, b;
      scanf("%d%d", &a, &b);
      rela[a][b] = 1;
    }
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        for (int c = 0; c < n; c++)
          if (rela[j][i] && rela[i][c])
            rela[j][c] = 1;

    int flag = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (rela[j][i] && rela[i][j]) {
          flag = 1;
          break;
        }
      }
      if (flag)
        break;
    }

    if (!flag)
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}