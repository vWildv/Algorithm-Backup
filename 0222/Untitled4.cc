#include <bits/stdc++.h>
using namespace std;

int mp[2505][2505];
int dis[2505];
int n;
int vis[2505];

int dij(int s){
    for(int i=1;i<=n;i++) dis[i]=0x3f3f3f3f;
    dis[s]=0;
    for(int i=1;i<=n;i++){
        int pos=-1,mini=0x3f3f3f3f;
        for(int j=1;j<=n;j++){
            if(!vis[j]&&dis[j]<mini){
                mini=dis[j];
                pos=j;
            }
        }
        //printf("-- %d %d\n",pos,dis[pos]);
        vis[pos]=1;
        for(int j=1;j<=n;j++){
            if(!vis[j]){
                //printf("- %d %d\n",dis[j],dis[pos]+mp[pos][j]);
                dis[j]=min(dis[j],dis[pos]+mp[pos][j]);
            }
        }
    }
}

int main(){
    int m,a,b;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j) mp[i][j]=0x3f3f3f3f;
            else mp[i][j]=0;
        }
    }
    while(m--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        mp[x][y]=z;
        mp[y][x]=z;
        //printf("%d %d %d\n",x,y,z);
    }
    dij(a);
    //for(int i=1;i<=n;i++) printf("-- %d\n",dis[i]);
    printf("%d\n",dis[b]);
}
