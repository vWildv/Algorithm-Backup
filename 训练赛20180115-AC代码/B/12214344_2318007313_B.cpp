#include<stdio.h>
int fa[50005],n,m,x,y;
void init()
{
    for(int i=0; i<n; i++)
    {
        fa[i] = i;
    }
    return ;
}
int find(int x)
{
    if(fa[x] == x)
    {
        return fa[x] = fa[x];
    }
    else
    {
        return fa[x] = find(fa[x]);
    }

}
void unin(int a,int b)
{
    if(a>b)
    {
        fa[find(a)] = find(b);
    }
    else
    {
        fa[find(b)] = find(a);
    }
    return ;
}
int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        init();
        while(m--)
        {
            scanf("%d%d",&x,&y);
            unin(x,y);
        }
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(find(i) == fa[0])
            {
                ans++;
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}
