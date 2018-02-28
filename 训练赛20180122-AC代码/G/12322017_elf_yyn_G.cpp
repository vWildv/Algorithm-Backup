#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char a[10][10];
bool vis[10];
int n, k, ans;
void dfs(int i, int cnt)
{
    if(cnt == k) {
        ans ++;
        return;
    }
    if(i >= n) return;
    for(int j = 0; j < n; j ++)
        if(!vis[j] && a[i][j] == '#') {
            vis[j] = 1;
            dfs(i + 1, cnt + 1);
            vis[j] = 0;
        }
    dfs(i + 1, cnt);
}
int main()
{
    while(~scanf("%d%d", &n, &k)){
        if(n == -1 && k == -1) break;
        for(int i = 0;i < n; i ++) scanf("%s",a[i]);
        memset(vis,0,sizeof(vis));
        ans = 0;
        dfs(0 , 0);
        printf("%d\n",ans);
    }
    return 0;
}