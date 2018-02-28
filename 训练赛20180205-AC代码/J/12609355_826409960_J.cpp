#include<bits/stdc++.h>
#define M(a,b) memset(a,b,sizeof(a))
using namespace std;
int n,m;
int vis[105];
vector<int> g[105];
void init()
{
    M(vis,0);
    for (int i=0; i<=100; ++i) {
        g[i].clear();
    }
}
bool dfs(int pos)
{
    vis[pos] = 1;
    for (int i=0; i<g[pos].size(); ++i) {
        int v = g[pos][i];
        if(vis[v])
            return 1;
        else {
            if(dfs(v))
                return 1;
        }
    }
    vis[pos] = 0;
    return 0;
}
int main()
{
    while (scanf("%d%d",&n,&m)&&n) {
        init();
        int u,v;
        while (m--) {
            scanf("%d%d",&v,&u);
            g[u].push_back(v);
        }
        bool flag = 1;
        for (int i=0; i<n&&flag; ++i) {
            if(dfs(i)) {
                flag = 0;
            }
        }
        printf("%s\n",flag?"YES":"NO");
    }
    return 0;
}
