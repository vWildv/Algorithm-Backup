#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf=0x3f3f3f3f;
const int N=1005;

int ww[N],bb[N];
int fa[N];
int dp[N];

int Find(int x){
    if(x==fa[x]) return x;
    else{
        fa[x]=Find(fa[x]);
        return fa[x];
    }
}

void Union(int x,int y){
    int xx=Find(x);
    int yy=Find(y);
    if(xx!=yy) fa[xx]=yy;
}

vector<int> g[N];

int main(){
    int n,m,w;
    scanf("%d%d%d",&n,&m,&w);
    for(int i=1;i<=n;i++){
        scanf("%d",&ww[i]);
        fa[i]=i;
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&bb[i]);
    }
    while(m--){
        int x,y;
        scanf("%d%d",&x,&y);
        Union(x,y);
    }
    for(int i=1;i<=n;i++){
        g[Find(i)].push_back(i);
    }
    for(int i=1;i<=n;i++){
        if(Find(i)!=i) continue;
        for(int j=w;j>=0;j--){
            int sumw=0,sumb=0;
            for(int k=0;k<g[i].size();k++){
                int pos=g[i][k];
                sumw+=ww[pos];
                sumb+=bb[pos];
                if(j>=ww[pos])dp[j]=max(dp[j],dp[j-ww[pos]]+bb[pos]);
            }
            if(j>=sumw) dp[j]=max(dp[j],dp[j-sumw]+sumb);
        }
    }
    printf("%d\n",dp[w]);
}
