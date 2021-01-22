#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lowbit(x) x&(-x)
const ll maxn=2e9+5;
const ll N=1e9+1;

struct node{
    ll l,r;
    int id;
}a[200005];

bool cmp(node a,node b){
    return a.l>b.l;
}

unordered_map <ll,ll> mp;

void add(ll p,ll x){
    for(ll i=p;i<=maxn;i+=lowbit(i)){
        mp[i]+=x;
    }
}

ll query(ll p){
    ll sum=0;
    for(ll i=p;i;i-=lowbit(i)){
        sum+=mp[i];
    }
    return sum;
}

ll ans[200005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld%lld",&a[i].l,&a[i].r);
        a[i].id=i;
        a[i].l+=N;
        a[i].r+=N;
    }
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;i++){
        ll res=0;
        res=query(a[i].r)-query(a[i].l-1ll);
        ans[a[i].id]=res;
        add(a[i].r,1ll);
    }
    for(int i=1;i<=n;i++){
        printf("%lld\n",ans[i]);
    }
}
