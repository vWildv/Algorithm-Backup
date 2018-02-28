#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int map[55][55];

int main(){
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        memset(map,0,sizeof(map));
        for(int i=1;i<=m;i++){
            int a,b;
            scanf("%d%d",&a,&b);
            map[a][b]=1;
        }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                for(int k=1;k<=n;k++) 
                    if(map[i][j]&&map[j][k]) map[i][k]=1;
        if(map[1][n]) printf("Yes\n");
        else printf("No\n");
    }
}