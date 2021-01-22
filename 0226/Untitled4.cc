#include <bits/stdc++.h>
using namespace std;

int fa[105];
int n;

struct node{
    double x,y;
}p[105];

struct edge{
    int x,y;
    double w;
}e[105*105];

int getfather(int x){
    if(x==fa[x]) return x;
    else return fa[x]=getfather(fa[x]);
}

bool cmp(edge a,edge b){
    return a.w<b.w;
}

double kruscal(int m){
    double ans=0.0;
    sort(e+1,e+m+1,cmp);
    int cnt=n;
    for(int i=1;i<=n;i++) fa[i]=i;
    for(int i=1;i<=m;i++){
        int t1=getfather(e[i].x);
        int t2=getfather(e[i].y);
        if(t1!=t2){
            fa[t1]=t2;
            ans+=e[i].w;
            //printf("-- %d %d %lf\n",e[i].x,e[i].y,ans);
            if(cnt==1) break;
        }
    }
    return ans;
}

int main(){
    int cas=0;
    while(~scanf("%d",&n)&&n){
        for(int i=1;i<=n;i++){
            scanf("%lf%lf",&p[i].x,&p[i].y);
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                double dis=sqrt( (p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y) );
                e[++cnt].x=i;
                e[cnt].y=j;
                e[cnt].w=dis;
            }
        }
        if(cas>0) printf("\n");
        printf("Case #%d:\nThe minimal distance is: %0.2f\n",++cas,kruscal(cnt));
    }
}
