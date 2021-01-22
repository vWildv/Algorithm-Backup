#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<queue>
#include<vector>
using namespace std;

int vis[3001];
int map[3001][3001];
int dis[3001];
vector<int>p[3003];

void bfs(){
    queue<int>que;
    memset(vis,0,sizeof(vis));
    memset(dis,0x3f,sizeof(dis));
    vis[1]=1;
    dis[1]=0;
    que.push(1);
    while(!que.empty()){
        int cur=que.front();
        que.pop();
        vis[cur]=0;
        for(int i=0;i<p[cur].size();i++){
            int tmp=p[cur][i];
            if(dis[tmp]>dis[cur]+map[cur][tmp]){
                dis[tmp]=dis[cur]+map[cur][tmp];
                if(vis[tmp]==0){
                    vis[tmp]=1;
                    que.push(tmp);
                }
            }
        }
    }
}

int main(){
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        memset(map,0x3f,sizeof(map));
        int a,b,c;
        for(int i=0;i<n;i++){
            scanf("%d%d%d",&a,&b,&c);
            p[a].push_back(b);
            p[b].push_back(a);
            if(map[a][b]>c) map[a][b]=map[b][a]=c;
        }
        bfs();
        printf("%d\n",dis[m]);
    }
}
