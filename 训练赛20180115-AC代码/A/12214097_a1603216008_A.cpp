#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<iostream>
#include<math.h>
#include<queue>
using namespace std;

char mmp[6][6];
int ans = 0;
int n;

bool f(int x,int y){
    for(int i = x - 1;i >= 0;i --){
        if(mmp[i][y] == '1'){return false;}
        if(mmp[i][y] == 'X') break;
    }
    for(int i = y - 1;i >= 0;i --){
        if(mmp[x][i] == '1'){return false;}
        if(mmp[x][i] == 'X') break;
    }
    return true;
}

void dfs(int m,int tt){
    if(m == n * n){
        if(tt > ans){ans = tt;}
        return ;
    }
    int x = m / n;
    int y = m % n;
    if(mmp[x][y] == '.' && f(x,y) == true){
        mmp[x][y] = '1';
        dfs(m + 1,tt + 1);
        mmp[x][y] = '.';
    }
    dfs(m + 1,tt);
}

int main(){
    while(scanf("%d",&n) != EOF){
       if(n == 0){break;}
       getchar();
       for(int i = 0;i < n;i ++){
            for(int j = 0;j < n;j ++){
                scanf("%c",&mmp[i][j]);
            }
            getchar();
       }
       dfs(0,0);
       printf("%d\n",ans);
       ans = 0;
    }
    return 0;
}
