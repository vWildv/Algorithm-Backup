#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
int Pnum[10005];
bool judge(int n) {
  int ans = 0;
  while (n) {
    ans += (n % 10);
    n /= 10;
  }
  return (ans == 10);
}

int main() {
  int cnt = 1;
  for (int i = 19; i <= 20000000; i++) {
    if (judge(i))
      Pnum[cnt++] = i;
    if (cnt > 10000){
      break;
    }
  }
  int n;
  while(~scanf("%d",&n)){
    printf("%d\n",Pnum[n]);
  }
  return 0;
}
