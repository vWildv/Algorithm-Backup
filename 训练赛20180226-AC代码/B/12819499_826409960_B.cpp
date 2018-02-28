#include<bits/stdc++.h>
#define M(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long LL;
const int maxn = 200000;
LL m,d;
int last;
struct Node {
    int r,l;
    LL mx;
}t[maxn<<2];
void pushup(int ro) {
    t[ro].mx = max(t[ro<<1].mx,t[ro<<1|1].mx);
}
void creat(int ro,int L,int R)
{
    t[ro].l=L;
    t[ro].r=R;
    if(L==R) {
        t[ro].mx = 0;
        return;
    }
    int mid = L+R>>1;
    creat(ro<<1,L,mid);
    creat(ro<<1|1,mid+1,R);
    return;
}
void update(int ro,int pos,LL val)
{
    if(t[ro].l==t[ro].r) {
        t[ro].mx+=val;
        return;
    }
    int mid = t[ro].l+t[ro].r>>1;
    if(mid>=pos)
        update(ro<<1,pos,val);
    else
        update(ro<<1|1,pos,val);
    pushup(ro);
    return;
}
LL query(int ro,int L,int R)
{
    if(t[ro].l>=L&&t[ro].r<=R) {
        return t[ro].mx;
    }
    int mid = t[ro].l+t[ro].r>>1;
    LL maxx = -100000000000000000LL;
    if(L<=mid) {
        maxx = max(query(ro<<1,L,R),maxx);
    }
    if(R>=mid+1) {
        maxx = max(query(ro<<1|1,L,R),maxx);
    }
    return maxx;
}
//Q
LL Q(LL L)
{
    return query(1,last-L+1,last);
}
//A
void A(LL t,LL n)
{
    last++;
    update(1,last,(n+t)%d);
    return;
}
int main()
{
//    freopen("in.txt","r",stdin);
    while(scanf("%lld%lld",&m,&d)!=EOF) {
        creat(1,1,(int)m);
        last = 0;
        LL t = 0;
        char op[3];
        LL tmp;
        while(m--) {
            scanf("%s%lld",op,&tmp);
            if(op[0]=='A') {
                A(t,tmp);
            }
            else {
                t = Q(tmp);
                printf("%lld\n",t);
            }
        }
    }
    return 0;
}
