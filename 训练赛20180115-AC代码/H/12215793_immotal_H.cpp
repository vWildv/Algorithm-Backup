#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
#define maxn 100050

struct N {
  int l, r, max;
} tree[maxn * 3];

int num[maxn];

void build(int node, int l, int r) {
  tree[node].l = l;
  tree[node].r = r;

  if (l == r) {
    scanf("%d", &tree[node].max);
    return;
  }

  int mid = (l + r) / 2;
  build(node * 2, l, mid);
  build(node * 2 + 1, mid + 1, r);
  tree[node].max = max(tree[node << 1].max, tree[node << 1 | 1].max);
  return;
}

int query(int node, int ql, int qr) {
  int l = tree[node].l;
  int r = tree[node].r;

  if (l == ql && r == qr)
    return tree[node].max;
  int mid = (l + r) / 2;
  if (qr <= mid)
    return query(node << 1, ql, qr);
  else if (ql > mid)
    return query(node << 1 | 1, ql, qr);
  else
    return max(query(node << 1, ql, mid), query(node << 1 | 1, mid + 1, qr));
}

int main() {
  int n, m;
  int ql, qr;
  int flag = 1;
  while (~scanf("%d", &n)) {
    build(1, 1, n);
    scanf("%d", &m);
    printf("Case %d:\n", flag);
    for (int i = 0; i < m; i++) {
      scanf("%d %d", &ql, &qr);
      printf("%d\n", query(1, ql, qr));
    }
    flag++;
  }
}
