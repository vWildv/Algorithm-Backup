#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int N;
int mp[1005][1005];
int dis[1005];
bool vis[1005];

void dij()
{
    int j=N;
    dis[N]=0;
    vis[N]=1;
    while (1)
    {
        for (int i=1;i<=N;i++)
        {
            if (mp[j][i]!=-1 && !vis[i])
            {
                if (dis[i]==-1) dis[i]=dis[j]+mp[j][i];
                else dis[i]=min(dis[i],dis[j]+mp[j][i]);
            }
        }
        int minn=1004;
        dis[minn]=3000000;
        int key=1;
        for (int i=1;i<=N;i++)
        {
            if (!vis[i] && dis[i]!=-1 && dis[i]<=dis[minn])
            {
                minn=i;
                key=0;
            }
        }
        if (key) return ;
        vis[minn]=1;
        j=minn;
    }
}

int main()
{
    int T;
    cin>>T>>N;
    memset(mp,-1,sizeof(mp));
    memset(dis,-1,sizeof(dis));
    memset(vis,0,sizeof(vis));
    for (int i=0;i<T;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (mp[a][b]==-1)
        {
            mp[a][b]=c;
            mp[b][a]=c;
        }
        else
        {
            mp[a][b]=min(mp[a][b],c);
            mp[b][a]=mp[a][b];
        }
    }
    dij();
    cout<<dis[1]<<endl;
}

