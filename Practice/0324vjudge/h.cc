#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int map[105][105],a[105][105];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    //getchar();
    for(int i=1;i<=n;i++){
        getchar();
        for(int j=1;j<=m;j++) scanf("%c",&map[i][j]);
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(map[i][j]=='*'){
                a[i+1][j]++;
                a[i+1][j+1]++;
                a[i+1][j-1]++;
                a[i][j+1]++;
                a[i][j-1]++;
                a[i-1][j]++;
                a[i-1][j+1]++;
                a[i-1][j-1]++;
            }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(map[i][j]=='*') printf("*");
            else printf("%d",a[i][j]);
        }
        printf("\n");
    }
}