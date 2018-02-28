#include<stdio.h>
int fa[50005],n,m,x,y;
void init()
{
    for(int i=1; i<=n; i++)
    {
        fa[i]=i;
    }
}
int find(int x)
{
    return fa[x]!=x?fa[x]=find(fa[x]):fa[x];
}
void unin(int a,int b)
{
    if(a>b)
        fa[find(a)]=find(b);
    else
        fa[find(b)]=find(a);
    return ;
}
int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        while(scanf("%d%d",&n,&m)!=EOF)
        {
            int ans=0;
            init();
            while(m--)
            {
                scanf("%d%d",&x,&y);
                unin(x,y);
            }
            for(int i=1; i<=n; i++)
            {
                fa[i]=find(i);
                if(fa[i]==i)
                {
                    ans++;
                }
            }
            printf("%d\n",ans);
        }

    }
    return 0;
}
