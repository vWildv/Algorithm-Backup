#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int map[6][6],flag=0,res;

int done(){
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++) 
            if(map[i][j]!=map[0][0]) 
                return 0;
    return 1;
}

void flip(int x,int y){
    map[x][y]=!map[x][y];
    if(x<3) map[x+1][y]=!map[x+1][y];
    if(x>0) map[x-1][y]=!map[x-1][y];
    if(y<3) map[x][y+1]=!map[x][y+1];
    if(y>0) map[x][y-1]=!map[x][y-1];
}

void dfs(int x,int y,int num){
    if(num==res){
        flag=done();
        return;
    }
    if(flag||x==4) return;
    flip(x,y);
    if(y<3) dfs(x,y+1,num+1);
    else dfs(x+1,0,num+1);
    flip(x,y);
    if(y<3) dfs(x,y+1,num);
    else dfs(x+1,0,num);
    return;
}

int main(){
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++){
            char tmp;
            cin>>tmp;
            if(tmp=='b') map[i][j]=1;
            else map[i][j]=0;
        }
    for(res=0;res<17;res++){
        dfs(0,0,0);
        if(flag){
            printf("%d\n",res);
            return 0;
        }
    }
    printf("Impossible\n");
}