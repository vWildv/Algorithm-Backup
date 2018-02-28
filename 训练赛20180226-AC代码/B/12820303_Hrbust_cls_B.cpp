#include<cstdio>
#include<cstring>
#include<algorithm>
#define LL long long
using namespace std;

const int MAXN = 200005;
int st[MAXN*4];

void bud(int rt,int l,int r,int k,int p)
{
    if(l==r){
        st[rt]=k;
        return;
    }
    int mid=(l+r)/2;
    if(p<=mid)
        bud(rt<<1,l,mid,k,p);
    else
        bud(rt<<1|1,mid+1,r,k,p);
    st[rt]=max(st[rt<<1],st[rt<<1|1]);
}

int qry(int rt,int l,int r,int L,int R)
{
    int ans=0;
    if(L<=l && r<=R) return st[rt];
    int mid=(l+r)/2;
    if(L<=mid) ans=max(ans,qry(rt<<1,l,mid,L,R));
    if(R>=mid+1) ans=max(ans,qry(rt<<1|1,mid+1,r,L,R));
    return ans;
}

int main()
{
    int M,D;
    char op;
    int a,p=0,t=0;
    scanf("%d%d",&M,&D);
    for(int i=1;i<=M;i++){
        scanf(" %c %d",&op,&a);
        if(op=='A'){
            p++;
            bud(1,1,M,(LL)(t+a)%D,p);
        }
        else{
            t=qry(1,1,M,p-a+1,p);
            printf("%d\n",t);
        }
    }
    return 0;
}
