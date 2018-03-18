#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int x[10005],y[10005],w[10005],h[10005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d%d%d%d",&x[i],&y[i],&w[i],&h[i]);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=n;i>=1;i--)
        if(x[i]<=a&&y[i]<=b)
            if(x[i]+w[i]>=a&&y[i]+h[i]>=b){
                printf("%d\n",i);
                return 0;
            }
    printf("-1\n");
}