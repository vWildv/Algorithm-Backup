#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int INF = 0x3f3f3f3f;

int n,m;

int dp[1000010];
int graph[105][105];
int val[105];

int dist[105],vis[105];

struct Vert{
    int no;
    int ds;
    Vert(int n,int d):no(n),ds(d){}
    bool operator < (const Vert &vt) const{
        return ds > vt.ds;
    }
};
priority_queue<Vert>pq;

void dijkstra()
{
    memset(dist,INF,sizeof(dist));
    memset(vis,0,sizeof(vis));
    dist[0]=0;
    pq.push(Vert(0,dist[0]));
    while(!pq.empty()){
        int u=pq.top().no;
        pq.pop();
        vis[u]=1;
        for(int v=1;v<=n;v++){
            if(!vis[v]&&dist[v]>dist[u]+graph[u][v]){
                dist[v]=dist[u]+graph[u][v];
                pq.push(Vert(v,dist[v]));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        cin>>n>>m;
        memset(graph,INF,sizeof(graph));
        int st,ed,dis;
        for(int i=1;i<=m;i++){
            cin>>st>>ed>>dis;
            graph[st][ed]=graph[ed][st]=min(dis,graph[st][ed]);
        }
        dijkstra();
        int sumPow=0;
        int sumDis=0;
        for(int i=1;i<=n;i++){
            if(dist[i]!=INF) sumDis+=dist[i];
            cin>>val[i];
            sumPow+=val[i];
        }
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            if(dist[i]==INF) continue;
            for(int d=sumDis;d>=dist[i];d--)
                dp[d]=max(dp[d],dp[d-dist[i]]+val[i]);
        }
        sumPow/=2;
        int flag=1;
        for(int i=0;i<=sumDis;i++)
            if(dp[i]>sumPow){
                flag=0;
                cout<<i<<endl;
                break;
            }
        if(flag) cout<<"impossible"<<endl;
    }
    return 0;
}


