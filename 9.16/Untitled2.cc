#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
ll c[500005];

inline int lowbit(int x){
    return x&-x;
}

void update(int p,ll x){
    for(int i=p;i<=n;i+=lowbit(i)) c[i]+=x;
}

ll query(int x){
    ll sum=0;
    for(int i=x;i;i-=lowbit(i)) sum+=c[i];
    return sum;
}

struct node{
    int p,v;
    bool operator < (const node &rhs) const{
        return v==rhs.v?p>rhs.p:v>rhs.v;
    }
}a[500005];

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i].v);
        a[i].p=i;
    }
    sort(a+1,a+1+n);
    ll ans=0;
    for(int i=1;i<=n;i++){
        ans+=(ll)n-(ll)a[i].p-query(n)+query(a[i].p);
        update(a[i].p,1LL);
    }
    printf("%lld\n",ans);
}
