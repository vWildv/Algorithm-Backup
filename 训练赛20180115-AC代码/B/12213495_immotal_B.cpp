#include <cstdio>
#define N 50005
int fa[N];
int n, m;
void reset(int n) {
  for (int i = 0; i < n; i++)
    fa[i] = i;
}

int finde(int k) {
  if (fa[k] == k)
    return fa[k];
  else
    return fa[k] = finde(fa[k]);
}

void unit(int a, int b) {
  if (a > b) {
    fa[finde(a)] = finde(b);
  } else {
    fa[finde(b)] = finde(a);
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

    int s = 0;
    for (int i = 0; i < n; i++) {
      if (finde(i) == fa[0])
        s++;
    }
    printf("%d\n", s);
  }
  return 0;
}
