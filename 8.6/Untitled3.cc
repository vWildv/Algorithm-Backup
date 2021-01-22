#include <bits/stdc++.h>
using namespace std;

#define ll long long

char mp[1005][1005];
int vis[1005][1005];
int res[100005];
int dv[4][2]={{1,0},{-1,0},{0,-1},{0,1}};

struct node{
    int x,y;
};
int n,m,k;

void bfs(node s,int num){
    int ans=0;
    queue<node> q;
    q.push(s);
    while(!q.empty()){
        node tmp=q.front();
        q.pop();  ans+=4;
        int xx=tmp.x; int yy=tmp.y;
        vis[xx][yy]=num;
        for(int i=0;i<4;i++){
            int px=xx+dv[i][0];
            int py=yy+dv[i][1];
            if(px<1||px>n||py<1||py>m) ans--;
            else{
                if(mp[px][py]=='.'){
                    if(vis[px][py]==0){
                        ans--;
                        node t;
                        t.x=px; t.y=py;
                        vis[px][py]=num;
                        q.push(t);
                    }
                    else ans--;
                }
            }
        }
    }
    res[num]=ans;
}

int main(){
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=n;i++){
        getchar();
        for(int j=1;j<=m;j++){
            scanf("%c",&mp[i][j]);
        }
    }
    int cnt=0;
    for(int i=1;i<=k;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        if(vis[x][y]==0){
            node tmp;
            tmp.x=x; tmp.y=y;
            bfs(tmp,++cnt);
        }
        printf("%d\n",res[vis[x][y]]);
    }
}
