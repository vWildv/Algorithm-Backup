#include <bits/stdc++.h>
#define lowbit(x) x&-x;
using namespace std;

int a[1000005];
long long p[1000005],q[1000005];
long long c[1000005];
int n;

void add(int x){
    while(x<=n){
        c[x]+=1;
        x+=lowbit(x);
    }
}

long long sum(int x){
    long long res=0;
    while(x){
        res+=c[x];
        x-=lowbit(x);
    }
    return res;
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    map<int,long long> cnt;
    for(int i=1;i<=n;i++){
        p[i]=++cnt[a[i]];
    }
    cnt.clear();
    for(int i=n;i>=1;i--){
        q[i]=++cnt[a[i]];
    }
    long long ans=0;
    for(int i=n;i>=1;i--){
        ans+=sum(p[i]-1);
        add(q[i]);
    }
    printf("%lld\n",ans);
}

