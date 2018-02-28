#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
char ma[500][500];
int ans,r,c;
int vis[500][500];
int dis[4][2]= {{0,1},{0,-1},{1,0},{-1,0}};
struct node
{
    int x;
    int y;
    int step;
    bool friend operator<(node a,node b)
    {
        return a.step>b.step;
    }
    node(int xx,int yy,int stepp)
    {
        x=xx;
        y=yy;
        step=stepp;
    }
};
int bfs(int a,int b)
{
    vis[a][b]=1;
    priority_queue<node>Q;
    Q.push(node(a,b,0));
    int xx,yy;
    while(!Q.empty())
    {
        node top=Q.top();
        Q.pop();
        if(ma[top.x][top.y]=='W')
        {
            return top.step;
        }
        for(int i=0; i<4; i++)
        {
            xx=top.x+dis[i][1];
            yy=top.y+dis[i][0];
            if(xx>=1&&xx<=r&&yy>=1&&yy<=c&&ma[xx][yy]!='#'&&!vis[xx][yy])
            {
                vis[xx][yy]=1;
                if(ma[xx][yy]>='1'&&ma[xx][yy]<='9')
                {
                    Q.push(node(xx,yy,top.step+(ma[xx][yy]-'1'+2)));
                }
                else
                    Q.push(node(xx,yy,top.step+1));
            }
        }
    }
    return -1;

}
int main()
{
    int t,sx,sy;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        scanf("%d%d",&r,&c);
        for(int i=1; i<=r; i++)
            for(int j=1; j<=c; j++)
            {
                cin>>ma[i][j];
                if(ma[i][j]=='Z')
                {
                    sx=i;
                    sy=j;
                }
            }
        int val=bfs(sx,sy);
        if(val==-1)
        {
            printf("IMPOSSIBLE\n");
        }
        else
            printf("%d\n",val);

    }
}
