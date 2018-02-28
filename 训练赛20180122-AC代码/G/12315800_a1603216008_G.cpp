#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char mmp[10][10];
int vis[10],n,k,ans,m;

void DFS(int x)
{
    if(k == m)
    {
        ans ++;
        return ;
    }
    if(x >= n) {return ;}
    for(int j = 0;j < n;j ++){
        if(vis[j] == 0 && mmp[x][j] == '#')
        {
            vis[j] = 1;
            m ++;
            DFS(x + 1);
            vis[j] = 0;
            m --;
        }
    }
    DFS(x + 1);
}

int main()
{
    int i,j;
    while(scanf("%d%d",&n,&k) != EOF)
    {
        if(n == -1 && k == -1){break;}
        ans = 0;
        m = 0;
        for(i = 0;i < n;i ++){
            scanf("%s",&mmp[i]);
        }
        memset(vis,0,sizeof(vis));
        DFS(0);
        printf("%d\n",ans);
    }
    return 0;
}
