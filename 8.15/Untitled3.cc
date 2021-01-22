#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

int fa[100005];
ll son[100005];

int Find(int x){
    if(x==fa[x]) return x;
    else{
        fa[x]=Find(fa[x]);
        return Find(fa[x]);
    }
}

void Union(int x,int y){
    if(son[x]<son[y]){
        son[y]+=son[x];
        fa[x]=fa[y];
    }
    else{
        fa[y]=fa[x];
        son[x]+=son[y];
    }
}

int main(){
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        son[i]=1;
        fa[i]=i;
    }
    ll sum=(n-1)*n/2;
    ll ans=1;
    if(n<4){
        ans=0;
    }
    else{
        ans=n*(n-1)/2*(n-2)/3*(n-3)/4;
    }
    int cnt=n; ll num=(ll) n;
    cout<<ans<<endl;
    while(m--){
        int x,y;
        scanf("%d%d",&x,&y);
        int xx=Find(x);
        int yy=Find(y);
        if(xx==yy){
            cout<<ans<<endl;
        }
        else{
            ll t1=(num-son[xx])*son[xx];
            ll t2=(num-son[xx]-son[yy])*son[yy];
            sum=sum-t1-t2;
            ans=ans-(son[xx]*son[yy]*sum);
            cout<<ans<<endl;
            sum=sum+(son[xx]+son[yy])*(num-son[xx]-son[yy]);
            Union(xx,yy);
        }
    }
}
