#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int ans=0;
int n;
int k;
int vis[9][9];
bool check(int x,int y)
{
    for(int i=x-1; i>=0; i--)
    {
        if(vis[i][y]=='1')return false;
    }
    for(int i=y-1; i>=0; i--)
    {
        if(vis[x][i]=='1')return false;
    }
    for(int i=n; i>x; i--)
    {
        if(vis[i][y]=='1')return false;
    }
    for(int i=n; i>y; i--)
    {
        if(vis[x][i]=='1')return false;
    }
    return true;
}
void dfs(int m,int tt,int cnt)
{
    if(m==n*n)
    {
        if(cnt==k)
        {ans++;
        }
        return;
    }
    int x=m/n;
    int y=m%n;
    if(vis[x][y]=='#'&&check(x,y))
    {
        vis[x][y]='1';
        cnt++;
        dfs(m+1,tt+1,cnt);
        vis[x][y]='#';
        cnt--;
    }
    dfs(m+1,tt,cnt);
}
int main()
{
    while(scanf("%d%d",&n,&k) != EOF)
    {
        if(n == -1&&k==-1)
        {
            break;
        }
        getchar();
        for(int i = 0; i < n; i ++)
        {
            for(int j = 0; j < n; j ++)
            {
                scanf("%c",&vis[i][j]);
            }
            getchar();
        }
        dfs(0,0,0);
        printf("%d\n",ans);
        ans = 0;
    }
    return 0;
}
