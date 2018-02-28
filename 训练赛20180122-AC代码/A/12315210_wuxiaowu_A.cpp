#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int fa[5000],n,m;
void init()
{
    for(int i=1; i<=n; i++)
    {
        fa[i]=i;
    }
}
int find(int x)
{
    return fa[x]!=x?fa[x] = find(fa[x]):fa[x];
}
void unin(int a,int b)
{
    if(a>b) fa[find(a)]=find(b);
    else fa[find(b)]=find(a);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        init();
        for(int i=1; i<=m; i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            unin(a,b);
        }
        int sum=0;
        int t[1050];
        memset(t,0,sizeof(t));
        for(int i=1; i<=n; i++)
        {
            t[find(i)]=1;
        }
        for(int i=1; i<=n; i++)
        {
            if(t[i])
            {
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    
    
}
