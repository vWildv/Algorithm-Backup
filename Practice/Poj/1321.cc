#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

char map[10][10];
int n,m,vis[10],ans;

void dfs(int now,int num){
    if(num==m){
        ans++;
        return;
    }
    for(int i=now;i<n;i++)
        for(int j=0;j<n;j++)
            if(map[i][j]=='#'&&!vis[j]){
                vis[j]=1;
                dfs(i+1,num+1);
                vis[j]=0;
            }
}

int main(){
    while(~scanf("%d%d",&n,&m)&&(n!=-1&&m!=-1)){
        ans=0;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++) cin>>map[i];
        dfs(0,0);
        printf("%d\n",ans);
    }
}