#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N=105;

int n;
struct node{
    ll a,b,c;
}block[N];

ll dp[N];

void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            bool f1=max(block[j].a,block[j].b)<max(block[i].a,block[i].b);
            bool f2=min(block[j].a,block[j].b)<min(block[i].a,block[i].b);
            if(f1&&f2){
                dp[i]=max(dp[i],dp[j]+block[i].c);
            }
            else dp[i]=max(dp[i],block[i].c);
        }
    }
}

bool cmp(node x,node y){
    if(max(x.a,x.b)==max(y.b,y.a))
        return min(x.a,x.b)<min(y.b,y.a);
    return max(x.a,x.b)<max(y.b,y.a);
}

int main(){
    int cas=0;
    while(~scanf("%d",&n)&&n){
        n*=3;
        for(int i=1;i<=n;i++) dp[i]=0;
        for(int i=1;i<=n;i+=3){
            scanf("%lld%lld%lld",&block[i].a,&block[i].b,&block[i].c);
            block[i+1].a=block[i].a; block[i+1].b=block[i].c;
            block[i+1].c=block[i].b;
            block[i+2].a=block[i].b; block[i+2].b=block[i].c;
            block[i+2].c=block[i].a;
        }
        sort(block+1,block+1+n,cmp);
        solve();
        printf("Case %d: maximum height = %lld\n",++cas,*max_element(dp+1,dp+1+n));
    }
}
