#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#define luck "7"
using namespace std;
int t, cnt;
int hour, minu;
bool judge(int h, int m) {
  string hh, mm;
  hh += (h / 10 + '0');
  hh += (h % 10 + '0');
  mm += (m / 10 + '0');
  mm += (m % 10 + '0');
  if (hh.find(luck) != -1 || mm.find(luck) != -1)
    return true;
  else
    return false;
}
void clocke(int x) {
  int jinwei = 0;
  while (!judge(hour, minu)) {
    minu -= x;
    if (minu < 0) {
      jinwei = -1;
      minu = 60 + minu;
    }
    hour += jinwei;
    jinwei = 0;
    if (hour < 0) {
      hour = 24 + hour;
    }
    cnt++;
  }
}

int main() {
  while (~scanf("%d", &t)) {
    cnt = 0;
    scanf("%d%d", &hour, &minu);
    // printf("%d %d\n", hour, minu);
    clocke(t);
    printf("%d\n", cnt);
  }
  return 0;
}
