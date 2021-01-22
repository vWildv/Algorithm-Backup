#include <bits/stdc++.h>
using namespace std;

int a[5][5],n,ans;

int dfs(int a[5][5],int cnt,int x,int y,int ans,int flag,int p1,int p2){
    int sum=0,tmp[5][5];
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++) tmp[i][j]=a[i][j];
    if(cnt){
        for(int i=x;i<=x+1;i++)
            for(int j=y;j<=y+1;j++) sum+=tmp[i][j];
        int stmp=tmp[x][y];
        tmp[x][y]=tmp[x][y+1];
        tmp[x][y+1]=tmp[x+1][y+1];
        tmp[x+1][y+1]=tmp[x+1][y];
        tmp[x+1][y]=stmp;
    }
    if(cnt>=2*n) return ans+sum;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(!flag) p1=max(p1,dfs(tmp,cnt+1,i,j,ans+sum,!flag,p1,p2));
            else p2=min(p2,dfs(tmp,cnt+1,i,j,ans+sum,!flag,p1,p2));
            if(p1>=p2) i=4,j=4;
        }
    }
    return flag?p2:p1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=4;i++)
            for(int j=1;j<=4;j++) scanf("%d",&a[i][j]);
        printf("%d\n",dfs(a,0,0,0,0,0,-999999999,99999999));
    }
}
