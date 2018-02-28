#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int num[1005];
int maxe[1005];
int cnt[1005];
int n;
int main() {
  while (~scanf("%d", &n)) {
    memset(maxe,0,sizeof(maxe));
    memset(cnt,0,sizeof(cnt));
    for (int i = 0; i < n; i++)
      scanf("%d", &num[i]);
    sort(num, num + n);
    for (int i = 0; i < n; i++) {
      if (num[i] > maxe[0]) {
        if (maxe[0] != 0)
          cnt[0]++;
        maxe[0] = num[i];
      } else {
        for (int j = 1; j <= 1000; j++) {
          if (num[i] > maxe[j]) {
            if (maxe[j] != 0)
              cnt[j]++;
            maxe[j] = num[i];
            break;
          }
        }
      }
    }
    int ans = 0;
    for (int i = 0; i <= 1000; i++)
      ans += cnt[i];
    printf("%d\n",ans);
  }
  return 0;
}
