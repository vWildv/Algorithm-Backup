#include<stdio.h>
#include<iostream>
using namespace std;
#define maxn  50005

int fa[maxn];

int find(int x){
//    超时了
//    int r = x;
//    while(fa[r] != r){
//        r = fa[r];
//    }
//    return r;
    return fa[x] != x ? fa[x] = find(fa[x]) : fa[x];
 }

void unin(int x, int y){
    int fx = find(x);
    int fy = find(y);


    if(x < y){

        fa[fy] = fx;
    }
    else
        fa[fx] = fy;

}
int main()
{
    int n,m,u,v;
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++){
        fa[i] = i;
    }
    int ans = 0;
    while(m--){
        scanf("%d%d",&u,&v);
        unin(u,v);
    }

    for(int i = 0; i< n; i++){
        if(find(i) == fa[0])
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
