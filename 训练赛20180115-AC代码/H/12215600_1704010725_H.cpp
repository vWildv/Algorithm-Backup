#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <math.h>
using namespace std;

int a[100005],tree[400005];
int cnt = 1;

void build(int p,int l,int r){
    if(l == r){
        tree[p]=a[l];
        return;
    }
    int mid=(l+r)>>1;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
    tree[p]=max(tree[p*2],tree[p*2+1]);
}

int find(int p,int l,int r,int x,int y){
    if(l>=x&&r<=y) return tree[p];
    int mid=(l + r) >> 1;
    if(y<=mid) return find(p*2,l,mid,x,y);
    if(x>mid) return find(p*2+1,mid+1,r,x,y);
    return max(find(p*2,l,mid,x,mid),find(p*2+1,mid+1,r,mid+1,y));
}

int main(){
    int n;
    while(~scanf("%d",&n)){
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        build(1,1,n);
        int q;
        scanf("%d",&q);
        printf("Case %d:\n",cnt++);
        for(int i=0;i<q;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            printf("%d\n",find(1,1,n,x,y));
        }
    }
    return 0;
}
