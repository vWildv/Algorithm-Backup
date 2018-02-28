#include <cstdio>
#define N 50005
int fa[N];
int n, m;

void reset(int n) {
  for (int i = 0; i < n; i++)
    fa[i] = i;
}

int find(int k) {
  if (fa[k] == k)
    return fa[k];
  else
    return fa[k] = find(fa[k]);
}

void unit(int a, int b) {
  if (a > b) {
    fa[find(a)] = find(b);
  } else {
    fa[find(b)] = find(a);
  }
  return;
}

int main() {
  while (~scanf("%d%d", &n, &m)) {
    reset(n);
    while (m--) {
      int l, r;
      scanf("%d%d", &l, &r);
      unit(l, r);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (find(i) == fa[0])
        cnt++;
    }
    printf("%d\n",cnt);
  }
  return 0;
}
