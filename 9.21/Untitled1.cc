#include <bits/stdc++.h>
using namespace std;

int vis[505][505];
int n,m;

void dfs(int x,int y){
    vis[x][y]=1;
    printf("%d %d\n",x,y);
    if(y-1>=0&&!vis[x][y-1]){
        dfs(x,y-1);
    }
    else if(x-1>=0&&!vis[x-1][y]){
        dfs(x-1,y);
    }
    else if(y+1<=m-1&&!vis[x][y+1]){
        dfs(x,y+1);
    }
    else if(x+1<=n-1&&!vis[x+1][y]){
        dfs(x+1,y);
    }
}

void show(int x,int y,bool flag){
    if(flag){
        printf("%d %d\n",x-1,y-1);
    }
    else{
        printf("%d %d\n",y-1,x-1);
    }
}

int main(){
    int x,y;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    if(n<=100&&m<=100) dfs(x,y);
    else{
        x++;
        y++;
        bool flag=true;
        if(m%2!=0){
            swap(n,m);
            swap(x,y);
            flag=false;
        }
        if(x==n){
            for(int j=y;j>=1;j--){
                show(x,j,flag);
            }
            for(int j=1;j<=m;j++){
                if(j%2==1){
                    for(int i=x-1;i>=1;i--){
                        show(i,j,flag);
                    }
                }
                else{
                    for(int i=1;i<=x-1;i++){
                        show(i,j,flag);
                    }
                }
            }
            for(int j=m;j>y;j--){
                show(x,j,flag);
            }
            return 0;
        }
        if(y%2==1){
            for(int j=y;j>=1;j--){
                show(x,j,flag);
            }
            for(int j=1;j<=m;j++){
                if(j<=x){
                    if(j%2==1){
                        for(int i=x+1;i<=n;i++){
                            show(i,j,flag);
                        }
                    }
                    else{
                        for(int i=n;i>=x+1;i--){
                            show(i,j,flag);
                        }
                    }
                }
                else{
                    if(j%2==1){
                        for(int i=x;i<=n;i++){
                            show(i,j,flag);
                        }
                    }
                    else{
                        for(int i=n;i>=x;i--){
                            show(i,j,flag);
                        }
                    }
                }
            }
            for(int j=m;j>=1;j--){
                if(j%2==0){
                    for(int i=x-1;i>=1;i--){
                        show(i,j,flag);
                    }
                }
                else{
                    for(int i=1;i<=x-1;i++){
                        show(i,j,flag);
                    }
                }
            }
        }
        else{
            for(int j=y;j>=1;j--){
                if(j%2==0){
                    for(int i=x;i>=1;i--){
                        show(i,j,flag);
                    }
                }
                else{
                    for(int i=1;i<=x;i++){
                        show(i,j,flag);
                    }
                }
            }
            for(int j=1;j<=m;j++){
                if(j%2==1){
                    for(int i=x+1;i<=n;i++){
                        show(i,j,flag);
                    }
                }
                else{
                    for(int i=n;i>=x+1;i--){
                        show(i,j,flag);
                    }
                }
            }
            for(int j=m;j>y;j--){
                if(j%2==0){
                    for(int i=x;i>=1;i--){
                        show(i,j,flag);
                    }
                }
                else{
                    for(int i=1;i<=x;i++){
                        show(i,j,flag);
                    }
                }
            }
        }
    }
}
