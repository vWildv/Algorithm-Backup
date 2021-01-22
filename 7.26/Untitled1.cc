#include <bits/stdc++.h>
using namespace std;

int r[100005];
int vis[100005];

struct node{
    int to,id;
};

vector<node> e[100005];
vector<int> g[100005];

int flag=0;

void dfs(int st,int pre){
    for(int i=0;i<e[st].size();i++){
        node tmp=e[st][i];
        if(e[st][i].to==pre) continue;
        if(vis[tmp.to]==0){
            if(tmp.id){
                vis[tmp.to]=vis[st];
                dfs(tmp.to,st);
            }
            else{
                vis[tmp.to]=-vis[st];
                dfs(tmp.to,st);
            }
        }
        else{
            if(tmp.id){
                if(vis[tmp.to]!=vis[st]){
                    flag=1;
                    return;
                }
            }
            else{
                if(vis[tmp.to]==vis[st]){
                    flag=1;
                    return;
                }
            }
        }
    }
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&r[i]);
    }
    for(int i=1;i<=m;i++){
        int x;
        scanf("%d",&x);
        for(int j=1;j<=x;j++){
            int t;
            scanf("%d",&t);
            g[t].push_back(i);
        }
    }
    for(int i=1;i<=n;i++){
        int u=g[i][0],v=g[i][1];
        node tmp;
        tmp.to=v;
        tmp.id=r[i];
        e[u].push_back(tmp);
        tmp.to=u;
        e[v].push_back(tmp);
    }
    for(int i=1;i<=m;i++){
        if(vis[i]==0){
            vis[i]=1;
            dfs(i,0);
        }
        else continue;
        if(flag) break;
    }
    printf("%s\n",flag?"NO":"YES");
}
