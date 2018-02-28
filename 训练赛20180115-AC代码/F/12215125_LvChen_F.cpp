#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
struct ssr
{
    int x,y,time;
    friend bool operator <(ssr a,ssr b)
    {
        return a.time>b.time;
    }
}op,ed,temp;
char MAP[205][205];
int  vis[205][205];
int  X[4]={0,0,-1,1};
int  Y[4]={1,-1,0,0};
int sx,sy,ex,ey;
int r,c;

int bfs(int x,int y)
{

    priority_queue<ssr>q;
    op.x=x;
    op.y=y;
    op.time=0;
    q.push(op);
    while(!q.empty())
    {
        temp=q.top();
//        printf("temp.x==%d temp.y==%d\n",temp.x,temp.y);
        q.pop();
        if(MAP[temp.x][temp.y]=='W')
        {

            printf("%d\n",temp.time);
            return 0;
        }
        for(int i=0;i<4;i++)
        {
            ed.x=temp.x+X[i];
            ed.y=temp.y+Y[i];
            if(ed.x>=0&&ed.x<r&&ed.y<c&&ed.y>=0&&vis[ed.x][ed.y]==0&&MAP[ed.x][ed.y]!='#')
            {
               if(MAP[ed.x][ed.y]=='.'||MAP[ed.x][ed.y]=='W')
               {
                   ed.time=temp.time+1;
               }
               else if(MAP[ed.x][ed.y]>='0'&&MAP[ed.x][ed.y]<='9')
               {
                   ed.time=temp.time+MAP[ed.x][ed.y]-'0'+1;
               }
               vis[ed.x][ed.y]=1;
               q.push(ed);
            }
        }
    }
    printf("IMPOSSIBLE\n");
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        scanf("%d%d",&r,&c);
        for(int i=0; i<r; i++)
        {
            scanf("%s",MAP[i]);
            for(int j=0;j<c;j++)
            {
                if(MAP[i][j]=='Z')
                {
                    sx=i;
                    sy=j;
                    vis[sx][sy]=1;
                }
            }
        }
        bfs(sx,sy);
    }
    return 0;
}
//2
//3 4
//.Z..
//.234
//#.W.
//4 4
//Z.1.
//.32.
//##4.
//W#..
//2
//2 2
//W.
//Z.
