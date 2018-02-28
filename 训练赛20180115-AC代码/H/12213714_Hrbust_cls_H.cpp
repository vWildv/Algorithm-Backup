#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>

#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1

using namespace std;

const int MAXN=1E5+10;
int STree[MAXN<<2];

void PushUp(int rt)
{
    STree[rt]=max(STree[rt<<1],STree[rt<<1|1]);
}

void Build(int l,int r,int rt)
{
    if(l==r){
        scanf("%d",&STree[rt]);
        return;
    }
    int m=(l+r)>>1;
    Build(lson);Build(rson);
    PushUp(rt);
}

int Query(int L,int R,int l,int r,int rt)
{
    if(L<=l&&r<=R)
        return STree[rt];
    int m=(l+r)>>1;
    int ret=0;
    if(L<=m) ret=max(ret,Query(L,R,lson));
    if(R>m) ret=max(ret,Query(L,R,rson));
    return ret;
}

int main()
{
    int n,q;
    int ca=1;
    while(~scanf("%d",&n)){
        printf("Case %d:\n",ca++);
        Build(1,n,1);
        int q,ai,aj;
        scanf("%d",&q);
        while(q--){
            scanf("%d%d",&ai,&aj);
            printf("%d\n",Query(ai,aj,1,n,1));
        }
    }
    return 0;
}
