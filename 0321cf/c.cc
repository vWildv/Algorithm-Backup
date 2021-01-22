#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int a[1005];

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<=n;i++){
        while(2*k<a[i]) k*=2,cnt++;
        k=max(k,a[i]);
    }
    printf("%d\n",cnt);
}