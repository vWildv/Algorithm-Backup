#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
const int INF=0x3f3f3f3f;
int r,c;
int sx,sy;
struct Node{
    int x,y;
    int time;
    Node(int xx,int yy,int tt):x(xx),y(yy),time(tt){}
    bool operator < (const Node &nd) const{
        return time > nd.time;
    }
};
priority_queue<Node>pq;
char maze[205][205];
int vis[205][205];
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int minTime;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&r,&c);
        memset(vis,0,sizeof(vis));
        char tmp[205];
        for(int i=1;i<=r;i++){
            scanf("%s",tmp);
            for(int j=1;j<=c;j++){
                maze[i][j]=tmp[j-1];
                if(tmp[j-1]=='Z')
                    sx=i,sy=j;
            }
        }
        minTime=INF;
        while(!pq.empty()) pq.pop();
        pq.push(Node(sx,sy,0));
        vis[sx][sy]=1;
        while(!pq.empty()){
            Node fr=pq.top();
            pq.pop();
            if(maze[fr.x][fr.y]=='W'){
                minTime=fr.time;
                break;
            }
            for(int i=0;i<4;i++){
                int nx=fr.x+dir[i][0];
                int ny=fr.y+dir[i][1];
                if(maze[nx][ny]=='#'||nx<1||nx>r||ny<1||ny>c||vis[nx][ny])
                    continue;
                vis[nx][ny]=1;
                if(maze[nx][ny]=='.'||maze[nx][ny]=='W')
                    pq.push(Node(nx,ny,fr.time+1));
                if(maze[nx][ny]>='0'&&maze[nx][ny]<='9')
                    pq.push(Node(nx,ny,fr.time+(maze[nx][ny]-'0')+1));
            }
        }
        if(minTime==INF)
            printf("IMPOSSIBLE\n");
        else
            printf("%d\n",minTime);
    }
    return 0;
}
