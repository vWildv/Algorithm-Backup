#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int sits[2005][2005];
int h, l, num;

int main() {
  while (~scanf("%d%d%d", &h, &l, &num)) {
    memset(sits, 0, sizeof(sits));
    int sum = 0;
    for (int i = 1; i <= h; i++) {
      getchar();
      for (int j = 1; j <= l; j++) {
        char a;
        scanf("%c", &a);
        if (a == '*') {
          sits[i][j] = -1;
          sum++;
        }
      }
    }
    if (num == 1) {
      printf("%d\n", h * l - sum);
      continue;
    }
    
    int cnt = 0;
    for (int i = 1; i <= h; i++) {
      int flag = 0;
      for (int j = 1; j <= l; j++) {
        if (sits[i][j] == 0)
          flag++;
        else
          flag = 0;

        if (flag == num) {
          cnt++;
          flag -= 1;
        }
      }
    }

    for (int i = 1; i <= l; i++) {
      int flag = 0;
      for (int j = 1; j <= h; j++) {
        if (sits[j][i] == 0)
          flag++;
        else
          flag = 0;

        if (flag == num) {
          cnt++;
          flag -= 1;
        }
      }
    }
    printf("%d\n", cnt);
  }
  return 0;
}
