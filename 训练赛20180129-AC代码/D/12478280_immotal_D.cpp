#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
struct man {
  string na;
  int s;
};
vector<man> rigi[10005];
bool cmp(man a, man b) { return (a.s > b.s); }
int n, m;
int main() {
  while (~scanf("%d%d", &n, &m)) {
    for (int i = 0; i <= 10000; i++)
      rigi[i].clear();
    while (n--) {
      man tmp;
      int r;
      cin >> tmp.na;
      scanf("%d%d", &r, &tmp.s);
      rigi[r].push_back(tmp);
    }
    for (int i = 1; i <= m; i++)
      sort(rigi[i].begin(), rigi[i].begin() + rigi[i].size(), cmp);
    for (int i = 1; i <= m; i++) {
      if (rigi[i].size() >2 && rigi[i][2].s == rigi[i][1].s)
        printf("?\n");
      else if(rigi[i].size()>=2)
        cout << rigi[i][0].na << ' ' << rigi[i][1].na << endl;
    }
  }
  return 0;
}
