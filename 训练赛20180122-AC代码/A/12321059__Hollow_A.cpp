#include<bits/stdc++.h>
using namespace std;
const int maxn = 1010;
int fa[maxn] , Rank[maxn];
bool vis[maxn];
void init(){
    for(int i = 0 ; i < maxn;i++) fa[i] = i , Rank[i] = 0 , vis[i] = false;
}
int Find(int x){ //非递归路径压缩
    int k , j , r;
    r = x;
    while(r != fa[r])
        r = fa[r];
    k = x;
    while(k!=r){
        j = fa[k];
        fa[k] = r;
        k = j;
    }
    return r;
}
void join(int x , int y){
    x = Find(x);
    y = Find(y);
    if(x != y)
        fa[x] = y;
}
int main(){
    int t;
    scanf("%d",&t);
    for(;t;t--){
        init();
        int ans = 0;
        int n , m;
        scanf("%d%d",&n,&m);
        for(int i = 1; i <= m;i++){
            int a, b;
            scanf("%d%d",&a,&b);
            join(a,b);
        }
        for(int i = 1; i <= n;i++){
            int r = Find(i);
            if(!vis[r]) vis[r] = 1, ans++;
        }
        printf("%d\n",ans);
    }
}
