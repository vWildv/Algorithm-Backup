#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

int mp[500][500],step[500][500];

struct pos
{
    int x,y;
};

void bfs(pos start,int n,int m)
{
    queue<pos> que;
    que.push(start);
    for (int i=0;i<500;i++)
        for (int j=0;j<500;j++)
            step[i][j]=250000;
    step[start.x][start.y]=0;

    while (que.size())
    {
        pos tmp=que.front();
        que.pop();
        if (tmp.x-1>0 && tmp.x-1<=n && tmp.y>0 && tmp.y<=m && mp[tmp.x-1][tmp.y]!=-1 && step[tmp.x-1][tmp.y]>step[tmp.x][tmp.y]+mp[tmp.x-1][tmp.y])
        {
            step[tmp.x-1][tmp.y]=step[tmp.x][tmp.y]+mp[tmp.x-1][tmp.y];
            que.push((pos){tmp.x-1,tmp.y});
        }

        if (tmp.x+1>0 && tmp.x+1<=n && tmp.y>0 && tmp.y<=m && mp[tmp.x+1][tmp.y]!=-1&&step[tmp.x+1][tmp.y]>step[tmp.x][tmp.y]+mp[tmp.x+1][tmp.y])
        {
            step[tmp.x+1][tmp.y]=step[tmp.x][tmp.y]+mp[tmp.x+1][tmp.y];
            que.push((pos){tmp.x+1,tmp.y});
        }

        if (tmp.x>0 && tmp.x<=n && tmp.y+1>0 && tmp.y+1<=m && mp[tmp.x][tmp.y+1]!=-1&&step[tmp.x][tmp.y+1]>step[tmp.x][tmp.y]+mp[tmp.x][tmp.y+1])
        {
           step[tmp.x][tmp.y+1]=step[tmp.x][tmp.y]+mp[tmp.x][tmp.y+1];
            que.push((pos){tmp.x,tmp.y+1});
        }

        if (tmp.x>0 && tmp.x<=n && tmp.y-1>0 && tmp.y-1<=m && mp[tmp.x][tmp.y-1]!=-1&&step[tmp.x][tmp.y-1]>step[tmp.x][tmp.y]+mp[tmp.x][tmp.y-1])
        {
           step[tmp.x][tmp.y-1]=step[tmp.x][tmp.y]+mp[tmp.x][tmp.y-1];
            que.push((pos){tmp.x,tmp.y-1});
        }
    }
}

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n,m;
        cin>>n>>m;
        pos start,ed;
        memset(mp,0,sizeof(mp));
        for (int i=1;i<=n;i++)
        {
            string str;
            cin>>str;

            for (int j=0;j<m;j++)
            {
                if (str[j]=='.') mp[i][j+1]=1;
                else if (str[j]=='#') mp[i][j+1]=-1;
                else if (str[j]=='Z')
                {
                    start.x=i;
                    start.y=j+1;
                    mp[i][j+1]=0;
                }
                else if (str[j]=='W')
                {
                    ed.x=i;
                    ed.y=j+1;
                    mp[i][j+1]=1;
                }
                else mp[i][j+1]=str[j]-'0'+1;
            }
        }

        bfs(start,n,m);
        if (step[ed.x][ed.y]==250000) cout<<"IMPOSSIBLE"<<endl;
        else cout<<step[ed.x][ed.y]<<endl;
    }
}
