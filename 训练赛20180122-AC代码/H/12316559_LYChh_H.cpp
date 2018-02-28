#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
#define INF 10000000
#define maxn 2005
int edge[maxn][maxn],dist[maxn],vis[maxn];
void dijkstra(int n)
{
    int k,min;
    for(int i=1; i<=n; i++)
    {
        dist[i]=edge[1][i];
        vis[i]=0;
    }
    for(int i=1; i<=n; i++)
    {
        k=0;
        min=INF;
        for(int j=1; j<=n; j++)
        {
            if(vis[j]==0&&dist[j]<min)
            {
                min=dist[j];
                k=j;
            }
        }
        vis[k]=1;
        for(int j=1; j<=n; j++)
        {
            if(vis[j]==0&&dist[k]+edge[k][j]<dist[j])
            {
                dist[j]=dist[k]+edge[k][j];
            }
        }
    }
    return;
}
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        memset(edge,0,sizeof(edge));
        memset(dist,0,sizeof(dist));
        memset(vis,0,sizeof(vis));
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=m; j++)
            {
                edge[i][j]=INF;
            }
        }
        for(int i=1; i<=n; i++)
        {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            if(c<edge[a][b])
            {
                edge[a][b]=c;
                edge[b][a]=c;
            }
        }
        dijkstra(m);
        printf("%d\n",dist[m]);
    }
    return 0;
}
