#include <cstdio>
#include <queue>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
#define maxn 5005
#define LL long long

int cas=1,T;
const int INF = 1<<28;

struct Edge
{
    int from,to,dist;
    Edge(int u,int v,int d):from(u),to(v),dist(d)
    {

    }
};

struct Spfa
{
    int n,m;
    vector<Edge>edges;
    vector<int>G[maxn];
    bool inq[maxn];
    int d[maxn];
    int cnt[maxn];
    void init(int n)
    {
        int i;
       this->n=n;
       for (i=0;i<n;i++)
           G[i].clear();
       edges.clear();
    }
    void AddEdge(int from,int to,int dist)
    {
        edges.push_back(Edge(from,to,dist));
        m=edges.size();
        G[from].push_back(m-1);
    }
    bool spfa(int s)
    {
        int i;
       queue<int>q;
       memset(inq,0,sizeof(inq));
       memset(cnt,0,sizeof(cnt));
       for (i=0;i<n;i++)
           d[i]=INF;
       d[s]=0;
       inq[s]=1;
       q.push(s);
       while (!q.empty())
       {
           int u=q.front();q.pop();
           inq[u]=0;
           for(i=0;i<G[u].size();i++)
           {
               Edge&e=edges[G[u][i]];
               if(d[u]<INF&&d[e.to]>d[u]+e.dist)
               {
                   d[e.to]=d[u]+e.dist;
                   if (!inq[e.to])
                   {
                       q.push(e.to);
                       inq[e.to]=1;
                       if (++cnt[e.to]>n)
                           return false;
                   }
               }
           }
        }
        return true;
    }
};

int main()
{
    Spfa bff;
    int n,m;
    while(cin>>m>>n)
    {
        bff.init(n);
        int i;
        for(i=0;i<m;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            bff.AddEdge(a,b,c);
            bff.AddEdge(b,a,c);
        }
        bff.spfa(n);
        cout<<bff.d[1]<<endl;
    }
    return 0;
}
