#include <bits/stdc++.h>
using namespace std;

int n,m,k;
int fa[2005];
int vis[2005];

const long long mod=1e9+7;

int Find(int x){
    if(x==fa[x]) return x;
    else{
        fa[x]=Find(fa[x]);
        return fa[x];
    }
}

void Union(int x,int y){
    x=Find(x); y=Find(y);
    if(x!=y){
        if(x>y) fa[x]=y;
        else fa[y]=x;
    }
}

long long qpow(int a,int p){
    long long ans=1; long long x=(long long)a;
    while(p){
        if(p&1) ans=ans*x%mod;
        x=x*x%mod;
        p>>=1;
    }
    return ans%mod;
}

int main(){
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=n;i++){
        fa[i]=i;
    }
    for(int i=1;i+k-1<=n;i++){
        int j=i+k-1;
        int tt=i;
        Union(i,j);
        while(i<j){
            i++,j--;
            if(i>=j) break;
            Union(i,j);
        }
        i=tt;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        int tmp=Find(i);
        if(vis[tmp]==0){
            vis[tmp]=1;
            cnt++;
        }
    }
    printf("%lld\n",qpow(m,cnt));
}
