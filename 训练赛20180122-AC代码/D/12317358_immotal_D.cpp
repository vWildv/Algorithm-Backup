#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
map<int,int>num;
int main() {
  int n;
  while (~scanf("%d", &n)) {
    int Nowo=0;
    for(int i=0;i<n;i++){
      int k;
      scanf("%d",&k);
      num[k] ++;
      if(num[k]>=(n+1)/2)
      Nowo=k;
    }
    printf("%d\n",Nowo);
  }
  return 0;
}
