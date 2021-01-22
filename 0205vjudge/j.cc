#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int map[120][120];

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m),n||m){
        memset(map,0,sizeof(map));
        for(int i=0;i<m;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            map[x][y]=1;
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int k=0;k<n;k++)
                    if(map[i][j]==1&&map[j][k]==1) map[i][k]=1;
        bool flag=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(map[i][j]==1&&map[j][i]==1){
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag) printf("YES\n");
        else printf("NO\n"); 
    }
    return 0;
}
