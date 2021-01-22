#include <bits/stdc++.h>
using namespace std;

#define ll long long
const double pi=acos(-1);

struct node{
    ll a,b;
    ll r;
}c[1005];

bool check(node x,node y){
    return (x.a-y.a)*(x.a-y.a)+(x.b-y.b)*(x.b-y.b)<=y.r*y.r;
}

int cnt[1005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld%lld%lld",&c[i].a,&c[i].b,&c[i].r);
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            //if(i==j) continue;
            if(c[i].r>c[j].r) cnt[j]+=check(c[j],c[i]);
            else cnt[i]+=check(c[i],c[j]);
        }
    }
    double ans=0;
    for(int i=1;i<=n;i++){
        if(cnt[i]==0) ans+=pi*(c[i].r)*(c[i].r);
        else if(cnt[i]&1) ans+=pi*(c[i].r)*(c[i].r);
        else ans-=pi*(c[i].r)*(c[i].r);
        //printf("%d\n",cnt[i]);
    }
    printf("%.9f\n",ans);
}
