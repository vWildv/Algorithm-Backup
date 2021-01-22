#include <cmath>
#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

int n, m;
int v[20];
int w[20];
int num[32200];

int main() {
  while (~scanf("%d%d", &m, &n)) {
    if(m>32192) m = 32192;
    memset(v,0,sizeof(v));
    memset(w,0,sizeof(w));
    memset(num,0,sizeof(num));
    for (int i=0;i<n;i++) scanf("%d%d",&v[i],&w[i]);
    int maxn=0;
    for (int i=0;i<n;i++) {
      for (int j=m;j>=0;j--) {
        if(v[i]>j) continue;
        num[j]=max(num[j], num[j-v[i]]+w[i]);
        maxn=max(num[j],maxn);
      }
    }
    printf("%d\n",maxn);
  }
  return 0;
}
