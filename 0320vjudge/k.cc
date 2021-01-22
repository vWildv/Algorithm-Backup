#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

struct _point{
    int x,y;
}p[1005];

int fa[1005],vis[1005];
int n,d;

int distant(_point a,_point b,int d){
    int dis=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
    if (dis<=d*d) return 1;
    return 0;
}

int find(int x){
    if(x!=fa[x]) fa[x]=find(fa[x]);
    return fa[x];
}

void unit(int a,int b)  {
    a=find(a);
    b=find(b);
    if(a!=b) fa[a]=b;
}

int main() {
    while(~scanf("%d%d",&n,&d)){
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++) scanf("%d%d",&p[i].x,&p[i].y);
        for(int i=0;i<=n;i++) fa[i]=i;
        char sign;
        int a,b;
        while(cin>>sign){
            if(sign=='O'){
                scanf("%d", &a);
                for(int i=1;i<=n;i++){
                    if(vis[i]){
                        if(distant(p[a],p[i],d)) unit(a,i);
                    }
                }
                vis[a]=1;
            }
            else{
                scanf("%d%d", &a, &b);
                if (find(fa[a])==find(fa[b])) printf("SUCCESS\n");
                else  printf("FAIL\n");
            }
        }
    }
}
