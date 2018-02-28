#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

char city[5][5];
int vis[5][5];
int n;
int maxFire;

void dfs(int x,int y,int num)
{
    //cout<<x<<','<<y<<endl;
    vis[x][y]++;

    for(int i=x+1;i<=n;i++)
        if(city[i][y]=='X') break;
        else vis[i][y]++;
    for(int i=x-1;i>=1;i--)
        if(city[i][y]=='X') break;
        else vis[i][y]++;
    for(int j=y+1;j<=n;j++)
        if(city[x][j]=='X') break;
        else vis[x][j]++;
    for(int j=y-1;j>=1;j--)
        if(city[x][j]=='X') break;
        else vis[x][j]++;

    int flag=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(vis[i][j]==0){
                flag=0;
                dfs(i,j,num+1);
            }
        }
    }

    for(int i=x+1;i<=n;i++)
        if(city[i][y]=='X') break;
        else vis[i][y]--;
    for(int i=x-1;i>=1;i--)
        if(city[i][y]=='X') break;
        else vis[i][y]--;
    for(int j=y+1;j<=n;j++)
        if(city[x][j]=='X') break;
        else vis[x][j]--;
    for(int j=y-1;j>=1;j--)
        if(city[x][j]=='X') break;
        else vis[x][j]--;

    vis[x][y]--;

    if(flag){
        maxFire=max(maxFire,num);
        return;
    }
}

int main()
{
    while(~scanf("%d",&n)){
        if(n==0) break;
        memset(vis,0,sizeof(vis));
        char tmp[5];
        for(int i=1;i<=n;i++){
            scanf("%s",tmp);
            for(int j=1;j<=n;j++){
                city[i][j]=tmp[j-1];
                if(tmp[j-1]=='X')
                    vis[i][j]=1;
            }
        }
        maxFire=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(vis[i][j]==0){
                    dfs(i,j,1);
                }
            }
        }
        printf("%d\n",maxFire);
    }
    return 0;
}
