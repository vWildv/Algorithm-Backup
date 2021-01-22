#include <bits/stdc++.h>
using namespace std;

struct node{
    int x,y;
}ha[1000005];

int xx[1005],yy[1005],ans[1005][1005];

int main(){
    int n,m,q;
    scanf("%d%d%d",&n,&m,&q);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int tmp;
            scanf("%d",&tmp);
            ha[tmp].x=i;
            ha[tmp].y=j;
        }
    }
    for(int i=n*m;i>=1;i--){
        ans[++xx[ha[i].x]][++yy[ha[i].y]]++;
    }
    while(q--){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",ans[a][b]);
    }
}
