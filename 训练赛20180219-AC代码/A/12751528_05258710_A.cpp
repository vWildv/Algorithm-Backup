#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int vis[14];
int time[14];
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        memset(vis,0,sizeof(vis));
        memset(time,0,sizeof(time));
        int x,ta,tb;
        string s;
        for(int i=0; i<m; i++)
        {
            cin>>x>>ta;
            getchar();
            cin>>tb>>s;
            if(s=="AC")
            {
                if(vis[x-1000]!=-1)
                {
                    time[x-1000]=ta*60+tb+20*vis[x-1000];
                }
                vis[x-1000]=-1;
            }
            else if(vis[x-1000]!=-1) vis[x-1000]++;
        }
        int cnt=0,tim=0;
        for (int i=1;i<=n;i++)
        {
            if(vis[i]==-1)
            {
                cnt++;
                tim+=time[i];
            }
        }
        cout<<cnt<<" "<<tim<<endl;
    }
}

