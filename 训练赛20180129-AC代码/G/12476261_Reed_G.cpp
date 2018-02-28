#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;
int vis[1005];

int judge()
{
    for(int i=0;i<=1000;i++)
    {
        if(vis[i])
            return 0;
    }
    return 1;
}

int main()
{
    int n,a;
    int ans=0;
    scanf("%d",&n);
    memset(vis,0,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        vis[a]++;
    }
    while(!judge())
    {
        int num=0;
        for(int i=0;i<=1000;i++)
        {
            if(vis[i])
            {
                vis[i]--;
                num++;
            }
        }
        ans=ans+num-1;
    }
    printf("%d\n",ans);
    return 0;
}
