#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;
bool vis[10];
char env[10][10];
int sum,cnt,k,n;
void dfs(int ii,int sum)
{
    if (sum==k)
    {
        cnt++;
        return;
    }
    if (ii>n)return;
    for (int i=0; i<n; i++)
    {
        if (env[ii][i]=='#'&&!vis[i])
        {
            vis[i]=true;
            dfs(ii+1,sum+1);
            vis[i]=false;
        }
    }
    dfs(ii+1,sum);
}
int main ()
{
    while (cin>>n>>k)
    {
        cnt=0;
        if (n==-1&&k==-1)
        {
            return 0;
        }
        memset (env,0,sizeof(env));
        memset (vis,0,sizeof(vis));
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                cin>>env[i][j];
            }
        }
        dfs(0,0);
        cout<<cnt<<endl;

    }
}
