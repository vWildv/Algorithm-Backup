#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
const int maxn=1005;
const int inf=0x3f3f3f3f;
int dist[maxn],mp[maxn][maxn];
int vis[maxn];
int que[maxn];
int l,r;
int n,m;

void spfa()
{
    int i, now;
    memset(vis,false,sizeof(vis));
    for(i=1;i<=n;i++) dist[i]=inf;
    dist[n]=0;
    queue<int> Q;
    Q.push(n);
    vis[n]=true;
    while(!Q.empty()){
        now=Q.front();
        Q.pop();
        vis[now]=false;
        for(i=1;i<=n;i++){
            if(dist[i]>dist[now]+mp[now][i]){
                dist[i]=dist[now]+mp[now][i];
                if(vis[i]==0){
                    Q.push(i);
                    vis[i] = true;
                }
            }
        }
    }
    return ;
}

int main()
{
    while(~scanf("%d%d",&m,&n)){
        memset(mp,inf,sizeof(mp));
        l=0,r=0;
        for(int i=0,t1,t2,t3;i<m;i++){
            scanf("%d%d%d",&t1,&t2,&t3);
            mp[t1][t2]=min(mp[t1][t2],t3);
            mp[t2][t1]=min(mp[t2][t1],t3);
        }
        spfa();
        printf("%d\n",dist[1]);
    }
    return 0;
}
