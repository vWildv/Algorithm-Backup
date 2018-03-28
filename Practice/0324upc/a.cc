#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int a[50][50];

int main(){
    int n;
    scanf("%d",&n);
    int cnt=1,x,y;
    while(cnt<=n*n){
        if(cnt==1) x=1,y=(n+1)/2,a[x][y]=cnt++;
        else if(x!=1&&y==n) y=1,a[--x][y]=cnt++;
        else if(x==1&&y!=n) x=n,a[x][++y]=cnt++;
        else if(x==1&&y==n) a[++x][y]=cnt++;
        else if(x!=1&&y!=n){
            if(a[x-1][y+1]==0) a[--x][++y]=cnt++;
            else a[++x][y]=cnt++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) printf("%d ",a[i][j]);
        printf("\n");
    } 
}