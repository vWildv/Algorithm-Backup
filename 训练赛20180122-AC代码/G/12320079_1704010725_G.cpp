#include<stdio.h>
#include <iostream>
#include<string.h>
using namespace std;

int n,k,vis[10],ans=0;
char map[10][10];

void dfs(int cur, int num){
    if(num==k){
        ans++;
        return;
    }
    for(int i=cur;i<n;i ++)
        for(int j=0;j<n;j ++)
            if(map[i][j]=='#'&&!vis[j]){
                vis[j]=1;
                dfs(i+1,num+1);
                vis[j] = 0;
            }
}

int main(){
    while(~scanf("%d%d",&n,&k)&&n!=-1&&k!=-1){
        ans=0;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++) cin>>map[i];
        dfs(0,0);
        printf("%d\n", ans);
    }
    return 0;
}
