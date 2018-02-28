#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int MAXV=1005;
const int INF=0x3f3f3f3f;
int dist[MAXV];
int collected[MAXV];
int T,N;
int ST,ED,LE;

struct Edge{
    int length;
    int to;
    int next;
}edges[MAXV*MAXV];
int head[MAXV];
int SumE=0;

void AddEdge(int st,int ed,int le)
{
    for(int i=head[st];i!=-1;i=edges[i].next)
        if(edges[i].to==ed){
            if(edges[i].length>le)
                edges[i].length=le;
            return;
        }
    edges[SumE].length=le;
    edges[SumE].to=ed;
    edges[SumE].next=head[st];
    head[st]=SumE++;
}

void Dijkstra(int s)
{
    dist[s]=0;
    collected[s]=1;
    for(int i=head[s];i!=-1;i=edges[i].next)
        dist[edges[i].to]=edges[i].length;
    while(true){
        int v,MinDist=INF;
        for(int i=1;i<=N;i++)
            if(!collected[i]&&dist[i]<MinDist){
                MinDist=dist[i];
                v=i;
            }
        if(MinDist==INF)
            break;
        collected[v]=1;
        for(int i=head[v];i!=-1;i=edges[i].next)
            if(!collected[edges[i].to]&&dist[v]+edges[i].length<dist[edges[i].to])
                dist[edges[i].to]=dist[v]+edges[i].length;
    }
}

int main()
{
    memset(edges,0,sizeof(edges));
    memset(head,-1,sizeof(head));
    memset(dist,INF,sizeof(dist));
    memset(collected,0,sizeof(collected));
    scanf("%d%d",&T,&N);
    while(T--){
        scanf("%d%d%d",&ST,&ED,&LE);
        AddEdge(ST,ED,LE);
        AddEdge(ED,ST,LE);
    }
    Dijkstra(N);
    printf("%d\n",dist[1]);
    return 0;
}