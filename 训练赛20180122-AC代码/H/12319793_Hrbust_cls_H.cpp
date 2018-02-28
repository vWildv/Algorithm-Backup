#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
using namespace std;
const int INF=0x3f3f3f3f;

struct Edge{
    int val;
    int to;
    int next;
}edges[10000];
int head[1005];
int sumEdge;

void AddEdge(int fr,int to,int val)
{
    edges[sumEdge].val=val;
    edges[sumEdge].to=to;
    edges[sumEdge].next=head[fr];
    head[fr]=sumEdge++;
}

int N,T;
int vis[1005],dist[1005];

struct Vert{
    int no;
    int dis;
    Vert(int n,int d):no(n),dis(d){}
    bool operator < (const Vert &vt) const{
        return dis > vt.dis;
    }
};
priority_queue<Vert>pq;

void dijkstra(int sc)
{
    for(int i=1;i<=N;i++){
        dist[i]=INF;
        vis[i]=0;
    }
    dist[sc]=0;
    while(!pq.empty()) pq.pop();
    pq.push(Vert(sc,dist[sc]));
    while(!pq.empty()){
        int v=pq.top().no;
        pq.pop();
        vis[v]=1;
        for(int i=head[v];i!=-1;i=edges[i].next){
            int w=edges[i].to;
            if(!vis[w]&&dist[w]>dist[v]+edges[i].val){
                dist[w]=dist[v]+edges[i].val;
                pq.push(Vert(w,dist[w]));
            }
        }
    }
}

int main()
{
    while(~scanf("%d%d",&T,&N)){
        memset(edges,0,sizeof(edges));
        memset(head,-1,sizeof(head));
        sumEdge=0;
        int u,v,w;
        for(int i=1;i<=T;i++){
            scanf("%d%d%d",&u,&v,&w);
            AddEdge(u,v,w);
            AddEdge(v,u,w);
        }
        dijkstra(N);
        printf("%d\n",dist[1]);
    }
    return 0;
}
