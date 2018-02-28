#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int vis[50005];
int n,m,x,y;
void fun1()
{
    for(int i=0; i<=n; i++)
    {
        vis[i]=i;
    }
}
int find(int x)
{
    return vis[x]!=x?vis[x] = find(vis[x]):vis[x];
}
void fun2(int a,int b)
{
    if(a>=b)
    {
        vis[find(a)]=find(b);
    }
    else if(a<b)
    {
        vis[find(b)]=find(a);
    }
}
int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        fun1();
        while(m--)
        {
            scanf("%d%d",&x,&y);
            fun2(x,y);
        }
            int sum = 0;
            for(int i=0; i<n; i++)
            {
                if(find(i)==vis[0]) sum++;
                else continue;
            }
            printf("%d\n",sum);
            memset(vis,0,sizeof(vis));
    }
    return 0;
}
