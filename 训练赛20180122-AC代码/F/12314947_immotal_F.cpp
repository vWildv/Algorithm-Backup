#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
int n;
int hig[1000005];
int num[1000005];
int main() {
  while (~scanf("%d", &n)) {
    memset(hig, 0, sizeof(hig));
    memset(num, 0, sizeof(num));
    for (int i = 1; i <= n; i++)
      scanf("%d", &hig[i]);

    int cnt = 1;
    for (int i = 1; i <= n; i++) {
      if (i == 1) {
        num[1] = hig[1];
        continue;
      }

      if (num[1] <= hig[i]) {
        int flag = 0;
        for (int j = 2; j <= cnt; j++) {
          if (hig[i] < num[j]) {
            num[j] = hig[i];
            flag = 1;
            break;
          }
        }
        if (flag == 0) {
          num[cnt + 1] = hig[i];
          cnt++;
        }
      } else
        num[1] = hig[i];
    }

    printf("%d\n", cnt);
  }
  return 0;
}
