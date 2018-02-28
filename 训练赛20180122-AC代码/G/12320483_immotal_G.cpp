#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int n, k;
int cnt;
int maps[10][10];
int vis[10];
void reset() {
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      maps[i][j] = -1;
}

void dfs(int num,int nh) {
  if (num == k) {
    cnt ++;
    return;
  }
  for (int h = nh; h <= n; h++) {
    for (int i = 1; i <= n; i++) {
      if (maps[h][i] == 0&&!vis[i]) {
          vis[i]=1;
          dfs(num + 1,h+1);
          vis[i]=0;
      }
    }
  }
}

int main() {
  while (~scanf("%d%d", &n, &k) && (n != -1 && k != -1)) {
    cnt = 0;
    reset();
    memset(vis,0,sizeof(vis));
    for (int i = 1; i <= n; i++) {
      getchar();
      for (int j = 1; j <= n; j++) {
        char c;
        scanf("%c", &c);
        if (c == '#')
          maps[i][j] = 0;
      }
    }
    dfs(0,1);
    printf("%d\n", cnt);
  }
  return 0;
}

