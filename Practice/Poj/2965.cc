#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int map[5][5];

int turn(int x,int y){
    for(int i=0;i<4;i++){
        map[x][i]=!map[x][i];
        map[i][y]=!map[i][y];
    }
    map[x][y]=!map[x][y];
}

int main(){
    memset(map,0,sizeof(map));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            char tmp;
            cin>>tmp;
            if(tmp=='+'){
                turn(i,j);
            }
        }
    }
    int sum=0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(map[i][j]) sum++;
    printf("%d\n",sum);
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(map[i][j]) printf("%d %d\n",i+1,j+1);
}