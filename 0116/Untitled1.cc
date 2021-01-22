#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int x,y;
}e[100005];
int cnt[100005];
int color[100005];
int vis[100005];

int main(){
    int n;
    scanf("%d",&n);
    int x,y;
    for(int i=1;i<n;i++){
        scanf("%d%d",&x,&y);
        e[i].x=x;
        e[i].y=y;
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&color[i]);
    }
    int sum=0;
    for(int i=1;i<=n-1;i++){
        if(color[e[i].x]!=color[e[i].y]){
            cnt[e[i].x]++;
            cnt[e[i].y]++;
            sum++;
        }
    }
    /*
    int maxn=-1; int sum=0; int c=0; int pos=0;
    for(int i=1;i<=n;i++){
        if(cnt[i]>maxn){
            pos=i;
            maxn=cnt[i];
        }
        //if(cnt[i]==1) sum++;
        //else if(cnt[i]>1) c++;
    }
    for(int i=1;i<=n;i++){
        if(i!=pos&&cnt[i]==1) sum++;
    }
    */
    int pos=0;
    for(int i=1;i<=n;i++){
        if(cnt[i]==sum) pos=i;
    }
    if(pos) printf("YES\n%d\n",pos);
    else printf("NO\n");
}
