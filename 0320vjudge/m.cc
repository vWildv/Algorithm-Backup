#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

long long sum[1005];
int c[1005];

long long Sum(int n, int x){
    if(!n) return (long long)x*(x+1)/2;
    return (long long)sum[n-1]*(x/c[n-1])+sum[n-1]-Sum(n-1,c[n-1]-(x%c[n-1]));
}

int main(){
    int n;
    while(~scanf("%d",&n)){
        for(int i=0;i<n;i++){
            scanf("%d",&c[i]);
            sum[i]=Sum(i,c[i]);
        }
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%lld\n",Sum(n-1,r)-Sum(n-1,l-1));
    }
    return 0;
}