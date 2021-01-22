#include <bits/stdc++.h>
using namespace std;

int n,k;
char l[200005],r[200005];
int flag;
int vis[200005][3];

void dfs(int d,int h,int w){
    if(flag||h<=w) return;
    if(h>n){
        flag=1;
        return;
    }
    if(d==1){
        if(r[h+k]!='X'&&vis[h+k][2]==0){
            vis[h+k][2]=1;
            dfs(2,h+k,w+1);
        }
        if(l[h+1]!='X'&&vis[h+1][1]==0){
            vis[h+1][1]=1;
            dfs(1,h+1,w+1);
        }
        if(l[h-1]!='X'&&vis[h-1][1]==0){
            vis[h-1][1]=1;
            dfs(1,h-1,w+1);
        }
    }
    else{
        if(l[h+k]!='X'&&vis[h+k][1]==0){
            vis[h+k][1]=1;
            dfs(1,h+k,w+1);
        }
        if(r[h+1]!='X'&&vis[h+1][2]==0){
            vis[h+1][2]=1;
            dfs(2,h+1,w+1);
        }
        if(r[h-1]!='X'&&vis[h-1][2]==0){
            vis[h-1][2]=1;
            dfs(2,h-1,w+1);
        }
    }
}

int main(){
    scanf("%d%d",&n,&k);
    getchar();
    scanf("%s",l+1);;
    getchar();
    scanf("%s",r+1);
    dfs(1,1,0);
    printf("%s\n",flag?"YES":"NO");
}



