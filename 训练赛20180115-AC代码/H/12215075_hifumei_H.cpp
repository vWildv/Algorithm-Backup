#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;

int a[maxn];
struct node
{
    int l,r;
    int val;
}tree[maxn<<2];

void build(int i,int l,int r)
{
//    printf("test %d %d %d\n",l,r,i);
    tree[i].l=l;
    tree[i].r=r;
    if(l==r){
        tree[i].val=a[l];
        return ;
    }
    int mid=(l+r)>>1;
    build(i<<1,l,mid);
    build(i<<1|1,mid+1,r);
    tree[i].val=max(tree[i<<1].val,tree[i<<1|1].val);
}

int query(int i,int l,int r)
{
    if(tree[i].l==l&&tree[i].r==r){
        return tree[i].val;
    }
    int mid=(tree[i].l+tree[i].r)>>1;
    if(r<=mid) return query(i<<1,l,r);
    else if(l>mid) return query(i<<1|1,l,r);
    else return max(query(i<<1,l,mid),query(i<<1|1,mid+1,r));
}

int main()
{
    int n;
    int cas=1;
    while(~scanf("%d",&n)){
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        build(1,1,n);
        int m;
        scanf("%d",&m);
        int t1,t2;
        printf("Case %d:\n",cas++);
        for(int i=0;i<m;i++){
            scanf("%d%d",&t1,&t2);
            printf("%d\n",query(1,t1,t2));
        }
    }
    return 0;
}
