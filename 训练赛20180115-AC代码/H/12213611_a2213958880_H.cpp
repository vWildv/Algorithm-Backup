#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define maxn 100050
#define ls k<<1
#define rs k<<1|1
int num[maxn];
struct Tree
{
    int l;
    int r;
    int maxl;
}tree[maxn*4];
void creat(int l,int r,int k)
{
    tree[k].l=l;
    tree[k].r=r;
    if(l==r)
    {
        tree[k].maxl=num[l];
        return;
    }
    int mid=(l+r)>>1;
    creat(l,mid,ls);
    creat(mid+1,r,rs);
    tree[k].maxl=max(tree[ls].maxl,tree[rs].maxl);
    return;
}
int query(int i,int j,int k)
{
    if(tree[k].l>=i&&tree[k].r<=j)
    {
        return tree[k].maxl;
    }
    int res=-0x3f3f3f3f;
    int mid=(tree[k].l+tree[k].r)>>1;
    if(mid>=i)
    {
        res=max(res,query(i,j,ls));
    }
    if(mid<j)
    {
        res=max(res,query(i,j,rs));
    }
    return res;
}
int main()
{
    int n,q;
    int cas=1;
    while(~scanf("%d",&n))
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&num[i]);
        }
        creat(1,n,1);
        int i,j;
        scanf("%d",&q);
        printf("Case %d:\n",cas++);
        while(q--)
        {
            scanf("%d%d",&i,&j);
            printf("%d\n",query(i,j,1));
        }
    }
}

