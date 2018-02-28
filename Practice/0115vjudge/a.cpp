#include <stdio.h>
#include <iostream>
using namespace std;
int visit[10][10],mmax,n,cou;

int find(int x,int y){
    for(int i=y;i>=1;i--){
        if(visit[x][i]==1) return 0;
        if(visit[x][i]==2) break;
    }
    for(int i=y; i<=n;i++){
        if(visit[x][i]==1) return 0;
        if(visit[x][i]==2) break;
    }
    for(int i=x; i>=1;i--){
        if(visit[i][y]==1) return 0;
        if(visit[i][y]==2) break;
    }
    for(int i=x; i<=n;i++){
        if(visit[i][y]==1) return 0;
        if(visit[i][y]==2) break;
    }
    return 1;
}

void dfs(){
    if( cou > mmax )
        mmax = cou;
    for(int k=1;k<=n;k++)
        for(int h=1;h<=n;h++)
            if(!visit[k][h]&&find(k,h)){
                visit[k][h] = 1;
                cou++;
                dfs();
                visit[k][h] = 0;
                cou--;
            }
}

int main(int argc, char const *argv[]) {
    char str[10];
    while(~scanf("%d",&n)&&n){
        mmax=0;
        cou=0;
        for(int i=1;i<=n;i++){
            cin >> str;
            for(int k=0;k<n;k++)
            visit[i][k+1]=(str[k]=='X'?2:0);
        }
        dfs();
        cout << mmax << endl;
    }
    return 0;
}