#include<stdio.h>
#include<string.h>
int fa[50005];
void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        fa[i]=i;
    }
}
int find1(int x)
{
    int tmp=x;
    while(tmp!=fa[tmp])
    {
        tmp=fa[tmp];
    }
    fa[x]=tmp;
    return fa[x];
}
void jiaru(int a,int b)
{
    if(find1(a)!=find1(b))
    {
        fa[find1(a)]=find1(b);
    }
}
int main()
{
    int  t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        init(n);
        int a,b;
        for(int i=0; i<m; i++)
        {
            scanf("%d%d",&a,&b);
            jiaru(a,b);
        }
        bool vis[1005];
        memset(vis,false,sizeof(vis));
        for(int i=1;i<=n;i++)
        {int temp=find1(i);
        vis[temp]=true;}
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i])cnt++;
        }
        printf("%d\n",cnt);
    }
}
