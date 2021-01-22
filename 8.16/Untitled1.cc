#include <bits/stdc++.h>
using namespace std;

vector<int> g[100005];
int n,m;
int vis[100005];
int flag;

void dfs(int cur,int pre){
    for(int i=0;i<g[cur].size();i++){
        int x=g[cur][i];
        if(x!=pre){
            if(vis[x]){
                flag=1;
                return;
            }
            else{
                vis[x]=1;
                dfs(x,cur);
            }
        }
    }
}

int main(){
    scanf("%d%d",&n,&m);
    int tmp=m;
    while(m--){
        int x,y;
        scanf("%d%d",&x,&y);
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            flag=0;
            vis[i]=1;
            ans++;
            dfs(i,i);
            if(flag) ans--;
        }
    }
    printf("%d\n",ans);
}
