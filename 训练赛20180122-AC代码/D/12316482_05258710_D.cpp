#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;
int vis[1000005];
int main ()
{
    int n;
    while (~scanf("%d",&n))
    {
        int a,cnt=0;
        memset(vis,0,sizeof(vis));
        for (int i=0;i<n;i++)
        {
            scanf("%d",&vis[i]);
        }
        sort(vis,vis+n);
        printf("%d\n",vis[(n+1)/2]);
    }
}
