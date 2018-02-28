#include<bits/stdc++.h>
using namespace std;
int fa[1005];
void init()
{
    for(int i=0;i<1005;i++)
    {
        fa[i]=i;
    }
}
int find(int a)
{
    while(fa[a]!=a)
    {
        a=fa[a];
    }
    return a;
}
void findd(int a,int b)
{
    int x=find(a);
    int y=find(b);
    if(x!=y)
    {
        fa[x]=y;
    }
    else
    {
        return;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,ma=0;
        scanf("%d%d",&n,&m);
        init();
        for(int i=1;i<=m;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            findd(a,b);
        }
        for(int i=1;i<=n;i++)
        {
            find(i);
            if(find(i)==i)
            {
                ma++;
            }
        }
        printf("%d\n",ma);
    }
    return 0;
}
