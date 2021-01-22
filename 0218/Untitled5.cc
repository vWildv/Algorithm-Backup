#include <bits/stdc++.h>
using namespace std;

struct node{
    int l,r,id;
}q[500005];

int part,l=1,r=0,cnt[500005],a[500005];
int ans[500005];
int res;
int n,m,k,T;

bool cmp(node a,node b){
    if(a.l/part==b.l/part) return a.r<b.r;
    return a.l<b.l;
}

void add(int pos){
    ++cnt[a[pos]];
    if(cnt[a[pos]]==T) ++res;
    if(cnt[a[pos]]==T+1) --res;
}

void del(int pos){
    --cnt[a[pos]];
    if(cnt[a[pos]]==T-1) --res;
    if(cnt[a[pos]]==T) ++res;
}

int main(){
    scanf("%d%d%d%d",&n,&m,&k,&T);
    part=sqrt(n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=m;i++){
        scanf("%d%d",&q[i].l,&q[i].r);
        q[i].id=i;
    }
    sort(q+1,q+1+m,cmp);
    for(int i=1;i<=m;i++){
        int ll=q[i].l,rr=q[i].r;
        while(l<ll) del(l++);
        while(l>ll) add(--l);
        while(r<rr) add(++r);
        while(r>rr) del(r--);
        ans[q[i].id]=res;
    }
    for(int i=1;i<=m;i++) printf("%d\n",ans[i]);
}
