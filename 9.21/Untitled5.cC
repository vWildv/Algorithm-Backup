#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll mm[505];
ll a[1005];
int n,m;

int vis[1005];
ll ans=0x3f3f3f3f3f3f3f3f;

void dfs(int s,int cnt,ll res){
    if(cnt==m){
        ans=min(ans,res);
    }
    vis[s]=1;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,cnt+1,res+abs(a[i]-mm[cnt+1]));
            vis[i]=0;
        }
    }
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=1;i<=m;i++){
        scanf("%lld",&mm[i]);
    }
    for(int i=1;i<=n;i++){
        dfs(i,1,abs(a[i]-mm[1]));
    }
    printf("%lld\n",ans);
}
