#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#define MAXN 100005
using namespace std;
int ans;
bool judge(int x) {
  if (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0))
    return true;
  else
    return false;
}
int main() {
  int year;
  while (~scanf("%d", &year)) {
    ans = 0;
    int nyear = year;
    while (1) {
      nyear++;
      if (judge(nyear))
        ans += 2;
      else
        ans += 1;
      if (ans % 7 == 0 && (judge(year) == judge(nyear))) {
        printf("%d\n", nyear);
        break;
      }
    }
  }
  return 0;
}
