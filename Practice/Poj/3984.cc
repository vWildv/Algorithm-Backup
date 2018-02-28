#include <queue>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int map[5][5],next[5][5];

void bfs(){
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int tmp=q.front();
        int x=tmp/5;
        int y=tmp%5;
        if(x==4&&y==4) break;
        q.pop();
        if(map[x+1][y]==0&&x<4&&y<5){
            q.push(tmp+5);
            next[x][y]=tmp+5;
        }
        if(map[x][y+1]==0&&x<5&&y<4){
            q.push(tmp+1);
            next[x][y]=tmp+1;
        }
    }
    return;
}

int main(){
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++) scanf("%d",&map[i][j]);
    bfs();
    int x=0,y=0;
    while(1){
        printf("(%d, %d)\n",x,y);
        int tmp=next[x][y];
        x=tmp/5;
        y=tmp%5;
        if(tmp==24) break;
    }
    printf("(4, 4)\n");
}