#include<stdio.h>
#include<string.h>

int a[1005];

int find(int x){
    if(x!=a[x]) a[x]=find(a[x]);
    return a[x];
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int cnt=0,x,y;
        for(int i=1;i<=n;i++) a[i]=i;
        for(int i=1;i<=m;i++){
            scanf("%d%d",&x,&y);
            x=find(x);
            y=find(y);
            a[x]=y;
        }
        for(int i=1;i<=n;i++){
            if(a[i]==i) cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
