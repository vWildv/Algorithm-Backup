#include <bits/stdc++.h>
using namespace std;

int a[100005];
int vis[100005];

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    //printf("1 ");
    int head=1,tail=n;
    for(int i=1;i<=k;i++){
        if(i&1) a[i]=head++,vis[a[i]]=1;
        else a[i]=tail--,vis[a[i]]=1;
    }
    for(int i=k+1;i<=n;i++){
        if(vis[a[i-1]+1]==0&&(a[i-1]+1)<=n) a[i]=a[i-1]+1,vis[a[i]]=1;
        else if(vis[a[i-1]-1]==0&&(a[i-1]-1)>0) a[i]=a[i-1]-1,vis[a[i]]=1;
    }
    for(int i=1;i<=n;i++) printf("%d ",a[i]);
    printf("\n");
}
